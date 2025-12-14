/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = var_6;
        var_14 = -22942;
        arr_4 [i_0] = (max(((max((max(var_7, var_1)), (arr_2 [23])))), ((~((~(arr_3 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 ^= (max((min(var_12, (~var_4))), (min(-570649640963964138, 6317))));
                        var_16 = var_8;
                        arr_13 [i_1] = var_3;
                        var_17 = (~9223372036854775807);
                    }
                }
            }
        }
    }
    var_18 = (!164);
    var_19 = (!-1148370768);
    #pragma endscop
}

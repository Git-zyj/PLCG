/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_18 = (358590562 == var_8);
        var_19 = min(358590562, 358590562);
        arr_3 [i_0 + 1] = ((~((~(((arr_1 [i_0] [i_0]) ? 4294967295 : (arr_2 [i_0] [i_0 + 1])))))));
        arr_4 [4] = var_1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = (358590562 - 1471906949);
        var_20 ^= ((358590577 ^ (0 != var_6)));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, (((28 ? var_14 : (arr_12 [10] [13] [i_3]))))));
                    var_22 = var_16;
                    var_23 = (-5079 < var_2);
                    var_24 = (arr_5 [i_3]);
                }
            }
        }
    }
    var_25 ^= ((((max((max(3890917989515018575, var_0)), var_5))) ? ((max(var_5, ((var_6 ? var_7 : var_2))))) : var_4));
    #pragma endscop
}

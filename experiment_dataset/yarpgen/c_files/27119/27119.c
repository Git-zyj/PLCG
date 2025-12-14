/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = ((((((var_6 % var_1) % -var_1))) ? ((((max(var_9, 84))) ? (~var_5) : var_3)) : (~var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_12 = ((!(arr_2 [i_0])));
                    var_13 = (max((arr_4 [i_0]), ((-113052828 ? 131071 : 113))));
                }
                var_14 = (arr_3 [i_1]);
            }
        }
    }
    var_15 |= ((!((max(60, 1)))));
    var_16 = (1 || -1);
    #pragma endscop
}

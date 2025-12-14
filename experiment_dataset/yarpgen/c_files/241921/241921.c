/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((-18446744073709551607 ? var_5 : (max(2660027450256754264, var_3)))), (~var_0)));
    var_21 = ((var_10 && ((!(!-1034434271)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (max((((!(arr_0 [i_1])))), (arr_2 [i_0])));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_23 ^= (!1);
                    arr_8 [i_0] [i_0] [i_0] = var_9;
                    var_24 = (min((-var_9 / var_19), 0));
                    var_25 = ((var_12 ? ((max((var_11 & var_1), 1))) : (min((arr_4 [i_2] [i_1]), ((var_7 ? (arr_5 [i_0] [i_0] [i_1] [i_2]) : 1))))));
                    arr_9 [i_2] = (((arr_6 [i_2] [i_2] [0] [i_2 + 1]) + (min(-1034434271, var_12))));
                }
                var_26 ^= -29;
                arr_10 [i_1] [i_1] = ((((var_13 ? var_10 : 1))));
            }
        }
    }
    #pragma endscop
}

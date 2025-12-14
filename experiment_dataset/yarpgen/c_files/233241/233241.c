/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(var_3, var_11)) == (((~((var_16 ? var_0 : var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [17] [i_1] [i_0] = (1 - -1);
                arr_7 [i_0 - 1] [i_1] = (!var_2);
                var_21 ^= (((((((arr_2 [i_0 + 2]) > (((arr_3 [18] [i_1] [i_1]) ? (arr_2 [6]) : -4)))))) & var_4));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 *= 0;
                                var_23 |= (((((!(arr_11 [i_0 + 2] [i_1 - 2])))) | ((((arr_11 [i_0 - 2] [i_1 + 1]) <= (arr_11 [i_0 + 2] [i_1 + 1]))))));
                                var_24 &= (((((((min((arr_12 [i_0] [i_1] [i_2] [i_0]), var_6))) ? (arr_11 [i_2] [i_3 + 2]) : (((arr_11 [i_0] [i_3]) / var_17))))) | ((((((arr_13 [i_0] [i_0]) & var_16))) ? (~var_10) : ((2097152 ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0]) : (arr_3 [i_0 + 3] [i_1] [i_3 + 2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((-(-1 << -4294967295)));
    var_26 = 1;
    #pragma endscop
}

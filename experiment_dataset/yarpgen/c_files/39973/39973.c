/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((~((~((var_10 ? var_0 : 14))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] = ((-var_8 ? ((((max(var_8, var_7))) ? (29 % 22) : (((var_18 ? var_1 : 2949))))) : 14));
                            var_21 = ((!(((((min(var_15, var_1))) ? (arr_7 [i_2 - 1] [i_1] [i_0 - 3]) : ((62587 ? var_3 : 59507)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_22 = (max(6042, 34));
                            arr_15 [i_5 - 2] [i_1] [i_1] [4] [i_1] [i_0 - 4] = (i_1 % 2 == zero) ? (((((arr_13 [i_1] [i_1]) + 2147483647)) >> (max((((arr_7 [i_1] [i_1] [i_5]) ? 30 : -8793935408294664628)), (~22))))) : (((((((arr_13 [i_1] [i_1]) - 2147483647)) + 2147483647)) >> (max((((arr_7 [i_1] [i_1] [i_5]) ? 30 : -8793935408294664628)), (~22)))));
                            var_23 = (max((((!(!14)))), (min((1 ^ 62575), -119))));
                        }
                    }
                }
                arr_16 [i_1] = (+((((((arr_12 [i_0] [i_1]) ? var_13 : (arr_13 [i_0 - 4] [i_1]))) == (arr_8 [i_1] [i_1] [i_1] [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}

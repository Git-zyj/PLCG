/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_22 = (((((((((-4552 | (arr_1 [i_0] [i_0]))) + 2147483647)) << ((((((var_19 ? (arr_0 [i_0]) : var_1)) + 20651)) - 9))))) | ((var_19 ? var_8 : (((var_19 ? (arr_1 [i_0] [i_0]) : -11409)))))));
                            var_23 = (min((min(225599301, 3938188419)), (((((var_15 > (arr_4 [i_0] [i_1] [i_0]))))))));
                            var_24 = (((((min(var_19, var_13))) << (var_4 == var_1))));
                        }
                    }
                }
                arr_10 [i_0] [i_0] = (((((min((arr_1 [i_0] [i_0]), (arr_4 [i_0] [i_1 + 1] [i_0]))))) != 0));
                var_25 = ((((((-4543 >= var_9) || 3))) <= -4573));
                var_26 = ((5955 != (((arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 3]) ? (arr_5 [22] [i_1 + 4] [i_1]) : var_13))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                var_27 = -1211192310;
                arr_16 [i_4] [i_4] [1] = var_2;
                var_28 = ((20 | var_7) ? ((((5 <= var_8) >> 2))) : (max(var_3, (arr_13 [i_4] [i_5] [1]))));
            }
        }
    }
    var_29 = (min((((((min(var_16, var_14))) != var_17))), var_9));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_13 += (((arr_0 [i_1]) ? (min(((max(65520, 45689))), ((var_4 ? 223 : 0)))) : ((((((var_11 << (arr_1 [i_0] [16]))) < (arr_1 [0] [0])))))));
                var_14 -= (min(((1 - (((~(arr_3 [i_0] [13] [13])))))), ((((-2147483647 - 1) | (arr_0 [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_15 = ((-16 ? (((((9547289800285316372 ? (arr_6 [i_2] [i_2]) : (arr_13 [8] [6] [1] [1])))))) : (((((-19497 ? (arr_8 [17] [17]) : var_3))) ? (arr_5 [i_3] [i_3]) : (arr_7 [i_2 - 1] [i_3 + 2])))));
                            var_16 = (max((((arr_8 [17] [i_3 + 2]) ? (92 == 1362498074) : (((arr_10 [9] [i_2] [9] [i_2]) ? 1082140645 : 7)))), ((min(11, ((max((arr_11 [17] [i_2] [9] [17] [i_2]), 216))))))));
                            var_17 = (max((((arr_12 [i_4] [i_4] [i_5 + 2] [i_5 + 2]) | 5741635333173213240)), (((((((arr_5 [22] [22]) | var_4))) ? (max(-3420984738353452363, 16)) : (arr_8 [i_3] [i_3]))))));
                        }
                    }
                }
                var_18 = (max(((max((arr_4 [i_3 + 2]), (min((arr_7 [i_2] [i_2]), (arr_12 [i_2] [i_2] [i_2] [i_2])))))), (((arr_9 [i_2 + 1]) ? (arr_9 [i_2 + 1]) : 3420984738353452349))));
            }
        }
    }
    var_19 = (((((((max(var_10, var_0))) ? 48230 : ((45689 ? 6 : 8879))))) ? ((((min(3420984738353452362, var_9)) | -3420984738353452363))) : (((32765 * 18446744073709551615) / var_3))));
    #pragma endscop
}

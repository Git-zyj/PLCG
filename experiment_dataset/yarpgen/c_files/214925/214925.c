/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (((-1 + 2147483647) << ((((~(~var_4))) - 31810))));
                    var_14 = ((var_0 ? (max(8322992387333699056, (min(var_10, var_2)))) : ((((!(!var_7)))))));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((!(((-(-127 - 1))))));
                }
            }
        }
    }
    var_15 = (((max(12485525852294028033, 0))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            {

                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    var_16 = (((arr_15 [i_3] [i_3] [i_4] [i_5]) ? (((((14522 >> (var_6 - 21374))) / (arr_11 [4] [i_4 + 1])))) : (max(0, 0))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [i_3] [i_3] = (max(11, (0 <= -7)));
                                var_17 = (arr_11 [i_4] [i_4]);
                            }
                        }
                    }
                    var_18 = max((max(-var_10, (arr_17 [i_5]))), var_8);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_29 [i_3] [i_3] [i_3] [i_3] [i_9] [i_9] = var_10;
                                arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (min(((((((992 ? var_2 : var_2))) ? 0 : (~14502)))), ((~(~var_10)))));
                                var_19 = (0 || var_6);
                                var_20 = (((((((64531 ? 1 : 9))) ? 31 : (max(-29156, 18446744073709551587)))) == (!1)));
                                var_21 = ((127 >> ((var_12 ? (arr_10 [i_3]) : ((var_9 / (arr_28 [i_3] [i_5] [i_5])))))));
                            }
                        }
                    }
                    var_22 = (min(var_22, ((((max(var_6, ((1 ? 1001 : 992)))) >= var_6)))));
                }
                var_23 = (arr_13 [i_3]);
                var_24 *= (((((var_5 ? 0 : 64531)))));
            }
        }
    }
    var_25 = (min(var_25, var_8));
    #pragma endscop
}

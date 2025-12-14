/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((7340227831615881737 ? (((var_4 ? ((10472948135999087370 ? var_1 : var_8)) : var_6))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((79 - ((-(min((arr_2 [i_0] [i_0]), (arr_0 [i_0 - 1] [i_0 - 1])))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_1] [i_2] [i_2] [i_2] = (((arr_5 [i_0] [i_0]) ? -7340227831615881751 : (((223294244 * 4071673051) ? (((((arr_1 [i_0] [i_1]) <= 223294245)))) : -7340227831615881739))));
                    var_16 = -7340227831615881764;
                    var_17 = ((7340227831615881739 ? (((4071673064 ? (4071673051 <= 52661) : 12875))) : (((((10266368890360017144 ? (arr_4 [i_0] [i_1] [i_1]) : 146))) ? (((7340227831615881738 ? (arr_4 [i_0] [i_0] [i_1]) : 223294250))) : (arr_5 [i_0] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (((((12874 ? 1 : 223294244)) + (((arr_10 [i_3] [i_1] [i_1] [i_0]) + 52684)))));
                                arr_14 [i_0 + 1] [i_1] [i_2] [i_1] [i_3] [i_4] = ((4071673025 ? 52661 : (arr_2 [i_0] [6])));
                                arr_15 [i_1] = ((((min(223294244, 223294232))) < (((arr_1 [i_0 + 2] [i_0]) ? -7340227831615881739 : (arr_1 [i_0 - 3] [i_4])))));
                            }
                        }
                    }
                    arr_16 [i_1] = (+(((arr_0 [i_0] [i_1]) + (((arr_0 [13] [i_0]) + 52659)))));
                }
                var_19 = ((((((arr_10 [i_0 - 1] [i_1] [6] [i_1]) + (arr_10 [i_0 + 1] [i_1] [i_1] [i_1])))) ? 3400799478493799319 : ((((min(127, 223294259)) * (arr_3 [i_1] [i_0 + 1] [i_0 + 1]))))));
            }
        }
    }
    var_20 -= var_13;
    #pragma endscop
}

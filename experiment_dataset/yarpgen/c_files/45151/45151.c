/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_2 ? (((var_1 ? 2548 : var_10))) : (2548 - 1755796375076553132))) / (((~(max(224, 551967221))))));
    var_17 = ((((((341737679 ? var_4 : var_7)))) ? ((var_10 ? ((8432494205713193175 ? -118 : 1755796375076553132)) : -var_15)) : ((max(((var_13 ? var_0 : var_7)), var_10)))));
    var_18 = ((((max(150141350275616249, 1755796375076553132))) ? (((((min(var_7, var_0))) < var_10))) : var_2));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 -= (max(((11730 ? (arr_4 [i_0]) : (!0))), (arr_7 [i_0] [i_0 - 1] [i_0])));
                    var_20 = (((max(((2547 ? 5989 : -124)), ((max(var_6, 5)))))) ? (((max((arr_2 [i_0]), var_5)) % 1)) : (arr_4 [i_1]));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            {
                var_21 = (((((arr_11 [i_4 - 1] [i_4 - 2] [i_4 - 2]) ? var_0 : -42)) / -124));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_22 = min(-32684, var_9);
                            var_23 &= (arr_17 [i_5]);
                            var_24 = (max((((((var_2 ? -42 : (arr_19 [i_3] [i_3] [i_3] [i_3] [i_3])))) + var_1)), ((2459367471 ? 1755796375076553132 : (arr_10 [i_6 - 2])))));
                        }
                    }
                }
                var_25 = (arr_9 [i_4 - 1] [i_4 - 1]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_26 = (max(var_26, ((((arr_10 [i_4 + 2]) << (-1825 + 1828))))));
                            var_27 -= max((((arr_22 [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4 - 2] [i_4 - 1]) ? (arr_22 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 2]) : 0)), var_11);
                            var_28 = ((((-134217728 ? 1163854651 : var_10)) >> (-1826 + 1851)));
                            var_29 = min((min(((max(-1845, (arr_10 [i_3])))), (min(var_1, 140720308486144)))), 1);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

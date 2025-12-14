/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_5 ? ((((-2147483630 ? var_12 : var_11)))) : 18063610078755039926);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((((((arr_6 [i_3]) ? (arr_1 [i_2 + 1] [i_1]) : (((((arr_11 [4] [i_1] [i_3] [i_1] [i_3]) <= 611775655))))))) && (~var_1))))));
                                var_17 += (((((611775655 ? 866785722 : -1257855672))) && (((var_13 ? -13 : -24)))));
                                var_18 = (arr_0 [i_0]);
                            }
                        }
                    }
                }
                var_19 = (((-2147483647 - 1) ? (((((var_9 ? (arr_13 [i_0] [i_0] [i_1]) : (arr_4 [i_0] [i_0] [i_0])))) ? (var_2 / var_2) : (((~(arr_5 [i_1] [i_1] [i_1] [i_1])))))) : (((min((arr_6 [i_0]), (arr_10 [i_1] [i_0] [i_1] [1] [i_0] [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_20 += (((~var_9) < (arr_14 [i_7] [i_5 + 1])));
                                var_21 = (max((!var_1), ((9223372036854775807 ? (arr_18 [i_5 - 1] [i_5 + 1] [i_0]) : (arr_18 [i_5 - 2] [i_5 - 1] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_14;

    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_23 = (((~var_0) ? ((-(arr_25 [i_8]))) : (!47)));
        arr_26 [i_8] [i_8] = var_14;
        var_24 = (max(var_24, (((+((2013265920 ? (arr_25 [i_8]) : (arr_24 [i_8]))))))));
        var_25 = 134994719;
    }
    #pragma endscop
}

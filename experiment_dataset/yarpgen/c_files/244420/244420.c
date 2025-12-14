/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-100 ? -100 : (max(var_4, var_9))))) ? var_3 : ((max((100 || var_1), var_11)))));
    var_13 = ((-(min(var_7, ((var_11 ? 100 : 50))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(-6474383280077358641, (min(6474383280077358641, (arr_2 [i_0])))));
        arr_4 [i_0] = (!((((911112017 + var_2) ? 100 : (arr_0 [i_0])))));
        var_14 *= (((((((911112017 ? 1 : 2115140619))) && (((255 ? 53567 : 25313))))) || ((max(var_0, (!var_4))))));
        var_15 = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_16 = (min(var_16, (~255)));

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_17 |= 142;
                var_18 = (min(9223372036854775805, 0));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                var_19 -= (min((((((min(144115188075855872, 1))) ? 1 : -50))), 0));
                arr_14 [i_1] [i_1] [i_2 - 1] [i_4] = 5177360178252259583;
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_17 [16] [i_2 - 2] [16] [16] &= (min(18302628885633695744, -6638763934218868566));
                var_20 = (arr_10 [i_1] [i_1] [i_1]);
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_21 *= (arr_0 [i_1]);
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_28 [i_1] [i_6] [i_7] [i_6] [i_1] = (~var_6);
                            var_22 = 6638763934218868565;
                            arr_29 [i_1] [i_9] [i_9] [i_9] [i_9] = -var_11;
                            var_23 = 166;
                        }
                    }
                }
            }
        }
        var_24 = (max(var_24, (((~(((arr_26 [i_1] [i_1] [18] [i_1] [i_1]) ? 5177360178252259572 : var_1)))))));
        var_25 = (min(var_25, (arr_24 [i_1] [i_1] [i_1] [6])));
    }
    var_26 = (var_9 ? var_2 : var_2);
    var_27 = (((!var_11) ? 2044599299 : ((((22240 <= var_7) ? 613955044 : ((min(var_5, 1))))))));
    #pragma endscop
}

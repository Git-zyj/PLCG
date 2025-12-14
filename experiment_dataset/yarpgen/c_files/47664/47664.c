/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((((((var_4 ? -346460227 : var_8)) + 2147483647)) >> ((((var_8 ? var_10 : var_11)) - 4235718747)))), (max(var_12, (min(var_5, var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = 1293906295;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] = (arr_1 [i_2 + 2]);
                                var_16 = (min(var_16, (max((min(12277117338871553945, 7168)), (((~var_7) + (max(1133970548, var_1))))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_2] = ((var_6 ? (min(0, 3008049342)) : (((((var_9 ? 1286917952 : (arr_3 [i_2 + 2] [i_5])))) ? (14734622548900487401 >= var_3) : (max(var_4, (arr_4 [i_0] [16] [i_0])))))));
                        arr_16 [i_1] [i_1] [i_1] [i_5] = 11457722638556800026;
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_17 = ((((!((max(23, var_2))))) ? ((min(var_11, (arr_5 [i_0 - 2] [i_0] [i_1] [i_2 + 4])))) : ((20 ? (max(2147483647, var_10)) : (max((arr_6 [i_0] [i_1] [i_2] [i_0]), 0))))));
                        var_18 = (min(var_18, var_10));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            {
                var_19 = (arr_9 [14] [14] [i_8 - 1] [i_7 - 1] [i_7] [i_7 - 2]);
                var_20 = ((-(4294967292 >= -114)));
                arr_26 [i_8] [i_7] [i_7] = (min(1863621357, 31));
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}

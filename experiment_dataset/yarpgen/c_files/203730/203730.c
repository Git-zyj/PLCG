/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((!(((max(0, -27015)))))))));
    var_14 = 0;
    var_15 = (min(var_15, (((((var_4 || var_11) ? (~var_7) : 0))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = -11;

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_16 = ((((((arr_2 [i_0 + 2] [i_0]) ? (var_9 / var_12) : var_1))) ? (((0 == ((((arr_8 [i_0] [20] [i_3]) == (arr_4 [i_0 - 1] [i_0]))))))) : var_1));
                        var_17 = (min(var_17, (arr_8 [i_2] [i_1] [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_12 [i_0 - 1] [i_1] [i_2] [i_0] = (((((-((1 ? 1 : 1))))) ? var_7 : (((~(arr_5 [i_0] [i_1]))))));
                        var_18 = ((arr_10 [i_0 + 1] [i_0 + 2]) <= (arr_10 [i_0 + 1] [i_0 + 1]));
                        arr_13 [18] [i_1] [i_2 - 1] [i_2] [i_2 + 2] &= (((-(arr_5 [i_2] [i_2]))));
                        var_19 = (~14926);
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_20 = (min((((arr_2 [i_2 - 1] [i_0]) ? (arr_8 [i_0] [i_2 - 1] [i_0]) : (arr_8 [i_0] [i_2 + 2] [i_0]))), ((((-(arr_3 [i_2] [13])))))));
                        arr_17 [i_5] [i_0] [i_2 - 2] [i_1] [i_0] [i_0] = (+((+(((arr_2 [i_0 - 1] [i_0]) ^ (arr_3 [i_0] [i_5]))))));
                    }

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_21 [i_0] = 3275890824;
                        arr_22 [i_0] [12] [i_2 - 2] [i_2 - 1] = ((~(!var_12)));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_21 = (((arr_27 [i_7] [i_8]) ? (arr_27 [i_8] [i_9]) : (arr_28 [i_7] [i_7])));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_22 = (arr_24 [3] [i_8]);
                                var_23 = ((-(min(((var_8 ? 89 : var_7)), (arr_34 [i_11] [i_10] [i_10 - 1] [i_10 + 1] [i_10] [i_10 - 1] [i_10 + 1])))));
                                arr_36 [i_11] [i_10 - 1] [i_9] [i_8] [i_11] = ((!((min(var_2, (((arr_25 [i_9]) ^ 2044)))))));
                                var_24 = ((((arr_31 [1] [1] [1] [i_10 - 1]) ? (!1) : var_11)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

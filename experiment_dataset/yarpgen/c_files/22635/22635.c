/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = ((((((max(var_0, 10466819095080260740)) >> ((((0 ? var_13 : 11019314873906271791)) - 11019314873906271778))))) ? (!-714710048679946051) : var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = ((~(arr_3 [i_0] [i_1] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 ^= ((!((!(arr_8 [i_0] [i_2 + 1] [i_2] [i_2 + 1])))));
                                arr_12 [i_4] [i_1] [9] [i_1] [i_1] [i_0] = (((((arr_11 [i_0] [i_2 - 1] [i_2 - 1] [i_4] [5]) ? (arr_9 [i_1] [i_1] [i_2 - 1] [i_3]) : (arr_4 [i_2 - 1])))) ? (arr_0 [i_2 + 1]) : (((-821176809 - (arr_5 [i_1] [2] [i_2] [i_2 - 1])))));
                            }
                        }
                    }
                    var_18 &= min((arr_6 [5] [i_1]), -61);
                    var_19 = (((arr_7 [3] [i_1]) ? ((-601365471 ? (-2151264218395031655 - 286837955) : (arr_3 [7] [7] [7]))) : (arr_2 [i_0])));
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        var_20 ^= ((9134906 >> (((((((-7209365407847400456 ? 0 : -1923473905))) ? (((arr_13 [i_5]) ? 18446744073709551602 : -2636414554641027066)) : 9510392650423055160)) - 9510392650423055140))));
        arr_15 [i_5] = (min(-21, (arr_13 [i_5])));
        var_21 = (max(var_21, (((~((-7687738640137563038 ? 4 : -4795083152016515414)))))));
    }
    #pragma endscop
}

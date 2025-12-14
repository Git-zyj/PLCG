/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [16] [16] = (((((((max(70368744177656, 2938))) ? ((204 % (arr_3 [i_1]))) : ((62586 ? 18446673704965373960 : 9223372036854775807))))) ? (arr_1 [i_0]) : (min((arr_0 [i_1]), (arr_8 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [8] [i_4] [i_4] [23] [23] = (((((((arr_7 [i_0] [i_1] [i_2]) == (arr_7 [i_0] [i_0] [21]))) ? (((max((arr_5 [i_0] [i_0]), (arr_6 [15] [i_1] [i_1]))))) : (min(7708618859278718619, 5073099239333030337)))) == (max(((max((arr_13 [i_0] [i_1] [i_2] [i_4] [i_4]), 9223372036854775807))), ((1037318739 ? 18446744073709551615 : 11359))))));
                                var_15 = ((((max(40366, 5))) ? (((220 || -88) ? (min(12039031226736551783, (arr_1 [17]))) : 5073099239333030337)) : (arr_13 [i_4] [i_4] [20] [i_4] [1])));
                            }
                        }
                    }
                    var_16 = ((((min(((min((arr_4 [5]), (arr_6 [i_0] [18] [1])))), ((801169859 ? 102 : (arr_0 [2])))))) ? (max(0, ((2452458432536368751 ? 2452458432536368729 : (arr_1 [1]))))) : (min(((max((arr_4 [i_0]), 1037318756))), (arr_8 [i_0])))));
                }
            }
        }
    }
    var_17 = ((2452458432536368751 / ((min(((-81 ? -9223372036854775807 : 0)), (((0 ? var_6 : 18))))))));
    var_18 = ((var_11 ? ((min(var_3, var_13))) : var_14));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            {
                var_19 = ((((((min((arr_6 [i_6 - 1] [i_6 - 2] [i_6 - 1]), (arr_6 [i_6 + 1] [i_6 + 1] [i_6 - 2])))) + 2147483647)) << ((((((arr_6 [i_6 - 3] [i_6 - 1] [i_6 + 1]) || (arr_6 [i_6 - 2] [i_6 + 1] [i_6 - 2])))) - 1))));
                arr_19 [i_5] [i_5] |= (((((arr_6 [i_6 - 1] [i_6 - 3] [i_6 - 3]) ? (arr_1 [i_6 - 3]) : 0)) % ((((arr_1 [i_6 - 1]) && (arr_1 [i_6 - 2]))))));
            }
        }
    }
    var_20 = (min((!var_0), (min((((-96 + 2147483647) << (var_4 - 27))), var_6))));
    #pragma endscop
}

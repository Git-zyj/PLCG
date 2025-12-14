/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-var_1 * (0 * var_11))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_13 = 22;
                            var_14 |= (((arr_6 [12] [i_2] [12]) != (((((arr_11 [i_0] [i_1] [i_0 - 1] [i_1 + 2] [i_0]) >= (arr_11 [i_0] [i_1] [i_0 - 1] [i_1 - 1] [i_4])))))));
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_2] = ((((var_1 && (arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4] [i_4]))) ? (((79 ? 1040055882 : -6420))) : ((64527 ? (min(123, 3426285647)) : var_1))));
                            var_15 -= (arr_12 [i_1] [i_1] [i_3] [i_4]);
                            var_16 = (max(var_16, (((-1508937746054560996 & ((((((max((arr_6 [12] [i_1] [i_4]), (arr_11 [2] [i_1] [i_2] [i_2] [9])))) && 0)))))))));
                        }
                        var_17 = ((-((((arr_11 [i_2] [i_1 + 2] [i_0 + 2] [13] [13]) || (arr_2 [i_0 + 1]))))));
                    }
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        arr_18 [4] [i_1 - 2] [i_0] [i_1] [i_1 - 1] [i_0] = (!var_1);
                        var_18 = (var_3 ^ -2952039178687127498);
                        var_19 += ((~(arr_13 [i_5] [19] [i_2] [i_1 + 1] [3] [i_1] [i_0 + 1])));
                        var_20 = ((max(13532913876888113446, 3)));
                    }
                    var_21 = (((max(((!(arr_1 [i_0 - 1]))), (((arr_9 [i_0 + 1] [i_1 - 1] [i_2] [i_1]) || 11)))) ? (((var_3 && (!var_11)))) : (((!(arr_9 [i_0 + 2] [i_1 + 2] [i_0 + 2] [i_2]))))));
                    var_22 = ((-(((((1 ? -28 : 2331960311237001165))) ? ((var_3 & (arr_6 [i_0] [10] [i_2]))) : (31 && 30785)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_23 = (max(((((arr_17 [i_0] [i_1 - 1] [i_7] [i_7] [i_7]) >= (arr_17 [i_1] [i_1 - 1] [i_6] [3] [17])))), (arr_17 [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_7])));
                                var_24 = (min(635065913, 2147483647));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 -= ((var_11 | (((-80 & 127) | 17142854576970998662))));
    #pragma endscop
}

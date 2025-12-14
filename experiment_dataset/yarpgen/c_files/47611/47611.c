/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = ((var_5 ? var_10 : var_8));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 -= (var_7 % (((((var_1 ? var_2 : var_3))) ? ((min((arr_6 [17]), var_2))) : (((arr_5 [i_0] [i_0 + 2] [i_0 - 1]) ? var_0 : (arr_0 [12]))))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 = (((((((var_6 <= (arr_5 [i_1 + 1] [14] [14]))) ? var_0 : var_9))) <= var_10));
                        var_15 -= (((((arr_3 [i_0] [i_0 - 1] [i_1 + 1]) & (arr_3 [1] [i_0 - 1] [i_1 + 1]))) % ((~(arr_3 [i_0 + 1] [i_0 + 1] [i_1 + 1])))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_16 = ((((((arr_12 [i_1 + 1] [i_0] [i_1] [i_1 + 1] [i_1 + 1]) ? var_2 : (arr_12 [i_1 + 1] [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? ((max((arr_6 [i_1 + 1]), (arr_6 [i_1 + 1])))) : (arr_0 [5])));
                            var_17 = (min(var_17, var_7));
                        }
                        var_18 = (2529442331 > 2147483647);
                        var_19 -= ((((((arr_1 [14]) ? (((arr_11 [i_0] [12] [i_3]) ? var_3 : (arr_6 [i_1]))) : ((((arr_2 [i_0]) || var_1)))))) ? var_8 : (max(var_0, ((var_3 ? var_4 : var_7))))));
                    }
                    arr_13 [i_2] [i_0] [i_0] [i_0 - 2] = (max(((max((var_6 + var_8), (2147483647 || -2147483647)))), (((((arr_10 [i_0 - 2] [10] [i_0 - 1] [i_0 - 1] [i_0 + 2]) < var_9)) ? (max((arr_0 [i_0 - 1]), var_1)) : (((var_10 ? -2147483647 : 58511)))))));
                }
            }
        }
    }
    #pragma endscop
}

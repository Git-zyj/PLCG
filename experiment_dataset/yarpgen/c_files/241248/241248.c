/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 = ((((var_18 ? (var_10 & var_13) : (((arr_2 [i_0]) & (arr_6 [i_0] [i_1] [i_1] [i_0])))))) || ((max(var_13, (arr_4 [i_0] [i_0])))));
                    var_20 = ((((!(arr_4 [1] [1]))) ? -1 : (((!var_12) >> 1))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_21 = ((-(((!(arr_4 [i_3 - 1] [i_3 - 1]))))));
                        var_22 = (min(((min((arr_4 [i_3 - 1] [i_3 - 1]), (arr_4 [i_3 - 1] [i_3 - 1])))), (((var_15 * var_1) / ((var_2 ? 1 : var_12))))));
                        var_23 = (((var_18 % 1) / (arr_8 [i_0] [i_1])));
                        var_24 ^= (min(((-((max(var_4, var_2))))), ((((arr_9 [i_3 - 1] [1] [i_3 - 1] [1] [1] [i_2]) != 0)))));
                    }
                    var_25 += arr_9 [i_0] [1] [1] [i_1] [1] [i_2];
                    var_26 = (1 || 1);
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_27 = ((((min(1, var_7)))));
                    var_28 = (1 > 1);
                }
                var_29 = (((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_4)) + var_11));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_30 += ((+((-(((arr_0 [i_6] [i_6 - 1]) ? var_17 : (arr_4 [i_5] [i_6 - 1])))))));
                    var_31 = (max(((var_0 + ((max(var_0, var_16))))), -1));
                }
            }
        }
    }
    #pragma endscop
}

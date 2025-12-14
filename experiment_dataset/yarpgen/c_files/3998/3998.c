/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((1 ? 1 : 1))) ? (var_9 != var_10) : var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    var_19 = (min(var_19, ((((((arr_4 [i_2 + 1] [i_2] [i_2 - 2]) - (arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 2]))) - ((max(0, 1))))))));
                    arr_8 [i_1] = (min(((((arr_3 [i_1 + 2] [i_2 - 1]) > (arr_3 [i_1 + 1] [i_2 - 4])))), (max(4, (arr_3 [i_1 - 1] [i_2 + 1])))));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_12 [i_2] [i_1] [i_2] [i_3] [i_2] = (min((-9223372036854775807 - 1), (1 + 1)));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_20 = (arr_11 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_4]);
                            var_21 = (max(var_21, (((0 ? (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [4]) : ((~(arr_14 [9] [i_3 + 1] [i_1 + 2] [i_2 - 2] [i_4]))))))));
                            var_22 = var_3;
                        }
                        var_23 = ((arr_7 [i_1]) ? (0 && 127) : ((min((arr_4 [i_0] [i_1] [i_3 + 1]), (arr_4 [i_0] [i_1] [i_1])))));
                        var_24 = (max(var_24, ((min((arr_10 [1] [i_1] [0]), var_12)))));
                        arr_15 [i_1] [i_1] = (((max(42021, 9223372036854775797))) ? (arr_5 [i_3 + 1] [i_1] [i_1 + 2]) : ((((max(var_4, var_8))) ? (((arr_4 [i_0] [i_1] [i_3]) ? var_4 : var_9)) : var_13)));
                    }
                    var_25 = ((var_0 ? ((((min((arr_9 [i_0] [i_0] [i_1] [5]), (arr_14 [i_0] [i_1] [i_1] [i_0] [i_0])))) ? var_1 : (min(1978686739617289707, 0)))) : -97));
                }
                var_26 = 1;
                var_27 = ((((var_11 ? (1 + 1) : ((min(var_12, (arr_3 [i_0] [i_1])))))) - ((max(var_3, (arr_4 [i_1 + 1] [i_0] [i_0]))))));
                var_28 = var_8;
            }
        }
    }
    var_29 = var_17;
    var_30 = (min(var_30, ((5191 >= (((var_11 & var_5) ? (var_3 / var_0) : (((var_16 ? -13495 : 1023)))))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [17] = min((((max(var_5, 2147483647)) | var_6)), ((min((arr_2 [3]), (~var_6)))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_10 = (min(-1366583943, ((-(min((arr_8 [i_2] [i_1] [i_0]), var_2))))));
                    var_11 = (max((((arr_7 [i_0] [i_0]) ^ var_4)), (10 | 2147483647)));
                    var_12 = (((var_6 | -1267218583) ? (max(var_9, (arr_3 [i_1]))) : (((((arr_0 [i_1] [4]) / var_5))))));
                    var_13 = (min((min((arr_0 [i_0] [i_1]), var_1)), -1147531634));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_14 = (min(2147483647, ((((((max(var_6, var_4)))) >= (arr_11 [13] [11] [13] [3]))))));
                        var_15 = (max(var_0, (min(var_1, ((((arr_10 [i_0] [i_3]) ? (arr_5 [i_1] [20]) : 4294967289)))))));
                        var_16 = ((!(~var_9)));
                        arr_17 [i_0] [1] [i_3] [4] &= ((((-((var_2 * (arr_1 [i_0] [10]))))) << (((((arr_9 [i_0] [9] [i_3] [i_4]) != var_1))))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_17 = (min(var_17, ((max((arr_14 [i_5] [i_3] [i_1] [i_0]), (max(var_5, var_3)))))));
                        arr_20 [i_5] [i_0] [17] [i_0] = (max(var_9, ((min(-604449732, var_8)))));
                        var_18 = (max(15, ((max(var_5, var_1)))));
                        var_19 = ((var_0 ? 33324 : (min((4084586193 + var_5), (max(33324, 16777215))))));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_20 = ((((((arr_1 [i_1] [i_3]) / var_9))) / ((min(var_4, (arr_4 [i_0] [7]))))));
                        var_21 = (min(((min(((var_6 ? 2046128352 : var_9)), (arr_10 [i_1] [i_3])))), (((max(var_5, 35)) + (((min(var_9, var_4))))))));
                        var_22 = (min(((max(16777216, var_6))), (max((((arr_18 [i_0] [1] [12] [i_6] [i_6]) ? (arr_9 [i_0] [1] [i_0] [i_0]) : (arr_22 [i_0]))), ((var_6 / (arr_0 [i_0] [7])))))));
                    }
                    var_23 = (3775209469242770520 + 1147531632);
                    var_24 -= (((max(((7815558956963889480 ? 11917371686098511756 : 35)), var_1)) != (((3775209469242770525 >> (((~var_1) - 90066602860505143)))))));
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_0] [i_7] [i_7] = (((max(3915100335649112938, (arr_19 [i_0] [i_1] [i_1] [0] [i_7]))) + -35));
                    arr_29 [i_0] [i_1] = min(((min((max((arr_10 [i_7] [i_1]), (arr_25 [i_0] [i_0] [1]))), (min((arr_5 [7] [i_7]), (arr_10 [i_0] [i_0])))))), (((var_7 != var_8) & (min(3775209469242770505, 1610675307)))));
                }
                var_25 = (max(var_25, (((((((max(var_7, var_4))) ? (((max(18669, var_6)))) : (min(var_8, var_4)))) - ((((min(var_3, var_3)) * (((min(var_4, var_6))))))))))));
            }
        }
    }
    var_26 = ((var_1 ^ (min((9420 + 200), ((-1544365439 ? -379631638 : 19))))));
    var_27 = ((((min(1, 46864))) ? ((max((var_9 | 1), ((min(var_9, 1)))))) : (max(((max(-40, 2147483637))), var_7))));
    var_28 = (50 == 8744150860369490780);
    var_29 = ((((var_4 ? var_4 : var_1)) | (((min(var_0, (max(var_0, var_4))))))));
    #pragma endscop
}

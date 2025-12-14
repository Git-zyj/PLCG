/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = ((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : (((!(arr_0 [i_0]))))));

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                var_13 = (((arr_1 [i_2] [i_1]) / (((!((((arr_3 [i_2 - 1]) / var_8))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_14 |= ((((((arr_11 [i_2 - 4] [i_4] [i_4] [20] [i_2 - 4]) ? (arr_11 [i_2 - 4] [i_4] [i_4] [i_4] [i_4]) : (arr_6 [i_2 - 4] [i_4] [i_4] [i_4])))) ? (((arr_6 [i_2 - 4] [i_2] [i_2] [i_2 - 1]) ? (arr_11 [i_2 - 4] [i_4] [i_2 - 4] [i_4] [10]) : (arr_11 [i_2 - 4] [i_2 - 4] [4] [i_3] [i_4]))) : (((-(arr_10 [i_2 - 4] [i_2 - 4] [1] [i_3]))))));
                            arr_15 [i_1] [i_4] [4] [i_4] [i_3] = ((((((arr_6 [11] [i_2 - 2] [i_2] [i_3]) + (var_9 - 8108140611365981633)))) ? (((((max((arr_2 [i_1] [i_2 - 4] [i_4]), var_3))) ? (((max(var_1, var_0)))) : (((arr_2 [i_1] [i_2] [i_1]) - (arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4])))))) : (max(((((arr_6 [i_1] [i_2] [i_3] [i_4]) + (arr_5 [i_0] [i_2] [i_0])))), (max((arr_13 [i_4] [i_0]), 8108140611365981633))))));
                            var_15 = (((((arr_13 [i_0] [i_1 + 2]) < (arr_13 [i_0] [i_1 + 2]))) ? (((((2137286396274045516 % (arr_13 [i_1 - 2] [i_2 - 2])))) ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : -var_3)) : ((((((1522088389 ? 0 : 14007703638346714007))) ? ((-(arr_3 [i_4]))) : (((arr_10 [i_1] [i_2] [i_3] [i_4]) ? (arr_4 [i_3]) : (arr_5 [i_4] [i_2 - 1] [i_1]))))))));
                        }
                    }
                }
                arr_16 [i_0] &= ((!(75590 * var_11)));
                var_16 = (arr_10 [i_0] [i_1] [i_1] [i_2 - 2]);
                var_17 = (arr_3 [i_0]);
            }
            var_18 = (min(var_18, ((min(((-var_8 ? (min(1, (arr_7 [i_1]))) : (((((arr_9 [i_0] [i_0] [i_0] [i_0]) < var_9)))))), ((((arr_3 [i_1 - 2]) ? (arr_3 [i_0]) : var_2))))))));
            var_19 -= ((((max(1, -102))) ? ((((arr_9 [i_0] [i_1] [i_1] [i_1]) % (arr_9 [i_0] [i_1 - 2] [i_0] [i_0])))) : (arr_5 [i_1] [i_1] [i_0])));
            var_20 = ((~(75590 || 590416945)));
            arr_17 [i_1] [i_1] = (arr_4 [5]);
        }
    }
    var_21 = 1522088389;
    var_22 = var_5;
    #pragma endscop
}

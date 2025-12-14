/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((65535 && ((max(255, var_6))))))));
    var_11 = (max((((0 ? var_0 : var_6))), ((min(4095, 1978311616)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] = (max(0, 1978311599));
                        var_12 = ((~(min(((~(arr_0 [i_2] [i_1]))), (arr_3 [23])))));
                        var_13 = ((~(arr_5 [i_0 - 2] [i_0 - 2])));
                    }
                    arr_13 [i_2] [i_0] [i_0] = (max((((!(((-1978311605 ? (arr_10 [1] [i_1] [i_1 + 2] [i_2] [1]) : (arr_11 [i_2] [i_0]))))))), 115));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_14 = -264241152;
                                var_15 = (arr_17 [i_1] [i_2] [i_4 - 1] [i_1]);
                                arr_19 [i_0] = (max(((max((arr_6 [i_5] [i_1 + 1] [i_0 - 3] [i_0]), (arr_3 [i_0 - 1])))), ((8646911284551352320 ? 14724 : 1978311628))));
                                var_16 = (min(var_16, (((~((1978311599 ? (-127 - 1) : 3876526199867299740)))))));
                            }
                        }
                    }
                    var_17 = (arr_6 [i_0] [i_0] [i_1] [i_0]);
                    arr_20 [i_2] [i_1] [i_0] [i_2] = ((27227 >= ((239 ? 16376 : 175))));
                }
            }
        }
    }
    var_18 = min((var_1 <= var_6), (max((-92008845 * 3665320014), var_9)));
    #pragma endscop
}

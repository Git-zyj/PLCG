/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_5, (-2147483647 - 1)));
    var_21 = -99;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = (((max((!-99), (arr_3 [i_0] [i_0] [i_1])))) ? 1106265930 : (max((arr_2 [i_1]), ((((arr_0 [i_0]) ? var_6 : (arr_4 [i_0] [i_0] [i_0 - 1])))))));
                arr_6 [i_0 - 1] = (((((!127) != 97)) ? (((arr_5 [i_0] [i_1] [i_1]) ? (~112) : (~var_2))) : (max((((arr_1 [i_0] [i_1]) ? var_2 : 61)), ((1 ? (arr_1 [i_0] [i_1]) : 185))))));
                var_23 = ((((((((arr_0 [i_0]) == (arr_3 [i_0] [i_1] [7]))) ? 10961131864237285282 : (arr_1 [i_0] [i_0 - 1])))) ? ((max(1, 97))) : ((13847 ? 112 : 44238))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_24 = (((((arr_9 [i_0 - 1] [i_0] [i_0] [i_0]) <= (arr_4 [i_0 - 1] [i_1] [i_3]))) ? ((((arr_12 [4] [i_1] [i_1] [i_3] [i_1]) ? (arr_9 [i_0 - 1] [i_1] [i_2] [i_3]) : (arr_9 [3] [i_1] [i_2] [i_1])))) : (((arr_9 [i_0] [i_1] [i_2] [i_3]) ? 7654882704800712731 : (arr_9 [i_3] [i_2] [i_1] [i_0 - 1])))));
                            var_25 = (min(var_25, 119));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] = 2220187454;

                            for (int i_4 = 2; i_4 < 7;i_4 += 1)
                            {
                                var_26 = (40538 ^ -1251909721);
                                var_27 = ((((max(1, 9113859493285958824))) ? ((54705 ? ((max((arr_14 [i_0] [i_0] [i_1] [i_0] [9] [i_4]), -127))) : -1)) : 36689));
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                arr_20 [2] [i_3] [i_3] [i_1] [i_0] = (arr_3 [5] [5] [5]);
                                arr_21 [i_0 - 1] [i_0] [i_0] [i_0] [i_3] [6] = (((2393547706 % 153) & (arr_19 [i_0 - 1] [i_1] [i_2] [i_0] [i_3] [i_2])));
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_28 = (max((max(var_10, (arr_5 [i_1] [7] [9]))), (((((3019128914 ? 18081 : 92)) > ((min(17725, 15509))))))));
                                var_29 -= (var_17 ? (((arr_15 [i_0 - 1] [i_2] [i_2] [i_0 - 1] [i_0 - 1]) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? 504403158265495552 : 3019128923)) : var_18)) : (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]));
                                var_30 -= (+-1106265928);
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 *= -var_12;
    #pragma endscop
}

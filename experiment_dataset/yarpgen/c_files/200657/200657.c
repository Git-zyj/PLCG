/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_15 = (arr_4 [i_2 - 1]);
                                var_16 = (((arr_7 [i_4] [0] [i_4] [i_4] [i_4]) - var_1));
                                arr_13 [i_4] [2] [i_3] [2] [10] [i_0] = (((((-10779 / (arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_3] [i_2 + 2])))) ? 238 : (((var_13 != (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_4 : var_11)))))));
                                arr_14 [i_3] [i_1] [i_1] [i_3] = (((((-21097 ? 7588102630882332939 : 21090))) ? (var_9 % -932638316) : ((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0 - 3]) || (((14518631113489502621 ? (arr_7 [4] [i_1] [i_1] [i_0] [7]) : var_6))))))));
                            }

                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (arr_1 [i_0] [4]);
                                arr_18 [i_0] [i_0] [i_2] [i_3] [8] [1] = (min((max(14518631113489502621, (arr_5 [i_0 - 1]))), ((max((arr_5 [i_0 - 2]), (arr_5 [i_0 - 1]))))));
                            }
                            for (int i_6 = 1; i_6 < 1;i_6 += 1)
                            {
                                var_17 = (((arr_10 [i_6] [i_6] [i_6] [i_6 - 1] [i_0 + 1]) | (((arr_0 [i_6 - 1] [i_1]) ? (arr_0 [i_3] [i_3]) : (arr_0 [i_0] [i_0 - 1])))));
                                var_18 = (min((arr_15 [i_0 - 2] [i_0] [i_0 - 1] [i_2 + 1] [i_6 - 1]), 663500691));
                            }
                            for (int i_7 = 1; i_7 < 11;i_7 += 1)
                            {
                                var_19 = var_7;
                                var_20 *= arr_16 [i_0] [i_0] [i_1] [6] [6] [i_7];
                            }
                        }
                    }
                }
                arr_24 [i_0] [i_0] [i_0] = (min(var_0, 10168309388812148248));
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}

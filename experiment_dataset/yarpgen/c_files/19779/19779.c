/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_7;
    var_19 = ((var_10 ? ((9 ? 50835 : 14700)) : (((var_2 ? var_3 : 40929)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = 527501659;

                            for (int i_4 = 2; i_4 < 13;i_4 += 1)
                            {
                                var_20 = ((((min(((17806 ? 14693 : (arr_3 [i_1] [4] [i_3]))), 2027444901))) ? (~17806) : ((-(arr_4 [i_0] [i_0 - 1] [i_0 - 1])))));
                                var_21 = (arr_0 [i_4]);
                                var_22 = (arr_6 [i_2] [i_4 - 2]);
                                arr_16 [i_0] = -15292;
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                arr_20 [i_5] [i_0] [i_3] [i_3] [i_2] [i_0] [i_0] = 91;
                                var_23 = (max(var_23, ((max(-2339234155055587794, 529400851)))));
                            }
                            for (int i_6 = 2; i_6 < 16;i_6 += 1)
                            {
                                var_24 = (max(var_24, (arr_9 [i_1] [i_1])));
                                var_25 -= ((-(((!((((arr_8 [i_0] [i_1] [i_2] [i_3] [i_1]) ? (arr_3 [1] [2] [i_2 - 2]) : (arr_2 [i_3] [7])))))))));
                                arr_23 [i_0] [i_3] [i_2] [i_1] [i_1] [i_0] = (arr_4 [15] [i_2] [i_1]);
                            }
                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                arr_28 [i_0] [i_0] = min((((max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [11] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_3] [11]))))), 3881004762);
                                arr_29 [12] [12] [i_0] [12] [i_7] = ((((max(-25956, (32767 + -15267)))) ? ((~(((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_22 [i_0] [i_0] [i_2] [15] [i_0]) : -15284)))) : (((arr_5 [i_0] [i_0] [i_2 - 3] [i_3]) ? 25956 : (arr_5 [i_0] [i_0] [i_2 + 1] [i_3])))));
                                arr_30 [i_0] [6] [i_2] [0] [i_0] = (((((-17807 ? ((114463822 ? 152783568 : 2243805299)) : 14700))) ? -942081730403338281 : 6723360938925876668));
                                var_26 = (min(var_26, ((((((arr_13 [i_3]) + 2147483647)) >> (15292 - 157))))));
                                var_27 = (arr_27 [i_0]);
                            }
                        }
                    }
                }
                arr_31 [i_0] [i_0] = -18446744073709551615;
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((max(var_6, ((min(1, 9830))))), var_4));
    var_17 = -0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_0] [1] [i_0] [12] = (max(10940664747260100141, ((max(((-(arr_9 [i_0] [i_1] [i_2]))), 1)))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] = (min(((min((arr_8 [i_0] [i_3 + 1] [i_2] [i_3]), (arr_8 [i_2] [i_3 - 1] [i_2] [19])))), (min(((min(4469, 25235))), 10940664747260100141))));

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            arr_17 [i_4] [i_1] [i_2] [21] [i_4] = (min(((min((arr_3 [i_1]), 40300))), (max(18446744073709551609, 7))));
                            var_18 &= (min(((max(1, 4469))), (min(61060, (arr_8 [i_3 - 1] [i_3 - 2] [i_4 - 1] [i_4])))));
                            var_19 += (max((min(4469, (arr_10 [i_4 + 2] [i_3 - 1] [i_3] [i_3 - 1]))), 0));
                            var_20 *= max((max((min(951030549, 18446744073709551609)), (arr_16 [i_1] [i_1] [i_2] [i_3] [1] [i_1] [i_3 + 1]))), 10940664747260100151);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_21 = 7506079326449451435;
                            var_22 = (arr_5 [i_1] [i_5]);
                        }
                        var_23 = (max(-3129387112430001085, (((~((max(83, (arr_11 [i_3 + 1] [i_2] [i_0])))))))));
                    }
                    arr_20 [i_2] [1] [i_1] [i_0] = (max(-5618728208270301820, (!1)));
                    var_24 = (max(var_24, (((13292 >= ((max(7276, -1))))))));
                }
                arr_21 [3] = (arr_9 [i_0] [i_0] [i_0]);

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_25 = (max(var_25, ((((((((1 != 1) <= ((3123580614 << (-1900858480 + 1900858497))))))) / 18446744073709551593)))));
                                var_26 = (max(var_26, 1286401383));
                            }
                        }
                    }

                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        arr_33 [i_6] [i_1] [i_6] [i_9 - 1] = 2184130456060355886;
                        arr_34 [i_9] [i_6] [i_1] [i_6] [i_0] = (min((((!(arr_23 [i_0] [i_0] [i_6] [i_6])))), (max(1221410377, 1623639251))));
                    }
                    var_27 += (!1);
                }
            }
        }
    }
    #pragma endscop
}

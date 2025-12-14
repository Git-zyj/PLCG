/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (!1)));
                    arr_7 [i_0] [i_2] = (+((((((arr_3 [i_1 + 1] [i_0]) + var_1))) ? (arr_6 [i_0] [i_2 + 1] [i_2 + 3] [i_1 - 1]) : 9831804936736781096)));

                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_14 [i_0] [i_2] [i_3] [i_2] [i_1] [i_0] [i_0] = ((5870264085484388626 ? (((2827 ? 2628521693 : 360099905))) : 18446744073709551615));
                            var_18 = (max(var_18, ((max(((-(arr_6 [i_0] [i_1 + 1] [1] [i_4]))), (arr_6 [i_4] [2] [2] [i_0]))))));
                            var_19 = (min((min((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1 - 1]))), (max(24693, (arr_6 [i_1] [i_1] [i_1 - 1] [i_1 - 1])))));
                            var_20 = (min(var_20, (arr_2 [i_0] [i_1])));
                            var_21 = (((arr_2 [i_1 - 1] [i_2 - 1]) * (((arr_6 [i_1 + 1] [i_2 - 1] [i_3 - 2] [i_3]) ? 31481 : (arr_2 [i_1 - 1] [i_2 + 2])))));
                        }
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            var_22 = ((!((max(218, 9831804936736781096)))));
                            var_23 &= ((~(min(((((arr_5 [i_2]) & (arr_1 [i_2])))), (arr_11 [i_5 - 1] [i_5 - 2] [i_5] [i_2 + 3] [18])))));
                            arr_17 [i_5] [i_3] [i_3] [i_2] [i_1] [20] [20] = arr_12 [19] [i_1] [19] [i_1] [19];
                            var_24 = max((((arr_2 [i_0] [6]) + 17964898070010307901)), (arr_6 [i_1] [i_1 - 1] [i_1 - 1] [i_1]));
                            var_25 = (!12176088243791304475);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_26 = (arr_16 [i_0] [i_0] [i_2] [i_2] [i_6]);
                            var_27 = max(var_7, (((~var_1) | (arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_2 + 2] [i_1]))));
                        }
                        arr_21 [i_1] [i_0] = (((((5837300353363641626 ? 18446744073709551615 : 50376)))) ? ((~(arr_20 [i_1] [i_1 + 1] [i_1 - 1] [i_1]))) : (((min(-86, 225326740785020902)) | 1)));
                        arr_22 [i_0] = (arr_8 [i_3]);
                        arr_23 [i_0] [i_3 + 1] = ((((arr_19 [i_0] [i_1] [i_1] [i_1 - 1]) >= (arr_19 [i_1] [i_1 + 1] [21] [i_1 + 1]))));
                    }
                    var_28 += ((-(arr_10 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_2 + 3] [i_2 + 1])));
                }
            }
        }
    }
    var_29 = ((31 * (min((((var_8 ? var_6 : 32))), ((2823558606 ? 0 : var_15))))));
    #pragma endscop
}

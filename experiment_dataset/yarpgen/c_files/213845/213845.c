/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((max(-9223372036854775800, 35)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = 58;
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_4] [i_4] = (-((-(arr_3 [i_0]))));
                            }
                        }
                    }
                    var_16 = ((((~(max(75, 6827183720589727022))))) ? ((((max((arr_9 [i_0] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_2 - 1] [i_2]), 84))))) : (((((~(arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_1] [i_2] [i_0 - 1])))) ? ((~(arr_9 [i_0] [i_0] [i_0 - 1] [i_2 - 1] [i_1] [i_0]))) : ((131 ? (arr_2 [i_0] [i_0]) : (arr_13 [i_2] [i_0]))))));
                    var_17 = ((((((-1920866393207068025 < 72057594037927928) <= 9223372036854775807))) << (((~249) + 255))));
                    arr_15 [i_1] [i_0] |= ((~69) ? (arr_10 [i_1] [i_1] [i_1 + 3] [i_0 - 1]) : (max(154, (max((arr_6 [17] [i_1] [i_2] [i_2]), 18)))));
                }
            }
        }
    }
    var_18 = (((((max(8344854984764068105, var_11)))) ? (~var_9) : 16));
    #pragma endscop
}

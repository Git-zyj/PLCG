/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((18446744073709551604 || var_2), (min(380085947, 380085943))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [12] [i_4] = (15109332521432203149 + 418160766070321074);
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_3] [15] = (((var_7 || -8277336718656482793) - (((-8885721868362778195 >= (((118 ? (arr_8 [i_0] [i_0] [i_2] [i_1] [i_4] [i_2]) : (arr_10 [i_1] [7] [i_4] [i_3] [i_4] [i_4])))))))));
                                arr_14 [i_1] [i_1] [i_1] = ((2460886133 ? 418160766070321085 : 1913456630));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_17 [i_5] = (min((((-1 ? (arr_16 [i_0]) : (arr_16 [i_1])))), (min(2023035395, (arr_3 [i_5] [i_1] [i_0])))));
                    var_16 -= ((((min(-380085944, 6))) ? (!2037354958762821658) : 96));
                    var_17 = (min(5, ((((arr_8 [i_0] [i_1] [i_0] [i_5] [i_0] [i_0]) >> var_10)))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((+(((arr_10 [i_6 - 2] [i_6 + 1] [i_6 + 2] [i_6 - 3] [i_6 - 3] [i_6 + 2]) ? (arr_22 [i_6 - 4] [i_6 + 3] [i_6 - 3] [i_1] [i_6 - 3] [i_6 - 4]) : (arr_18 [i_6 - 4] [i_6 - 1] [i_6 + 3] [i_6 + 1] [i_6 + 1]))))))));
                                arr_24 [i_0] [i_1] [i_6] [i_0] [i_0] [i_6] [i_1] = ((1677807037993865123 >> (1346497040 - 1346497013)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 8796093022207));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_16 = (min(15, 240));
                        var_17 -= (arr_7 [i_3]);
                        var_18 = ((((((min((arr_7 [i_2]), (arr_5 [i_0] [i_0] [i_2]))) / 120))) ? ((254 ? 255 : (-950803115334397324 + 254))) : (arr_7 [i_2])));
                        var_19 = (((((arr_0 [i_0 + 1]) ? (((arr_1 [i_1]) + var_1)) : 2)) > (arr_3 [i_0] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            arr_14 [i_2] [i_0] [1] [i_4] [i_2] [i_1] = 1;
                            var_20 ^= ((((~(arr_3 [i_5 + 1] [i_1 - 3]))) ^ ((~(arr_3 [i_1] [7])))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_19 [i_0] [i_2] [i_4] [i_4] [1] = (-2147483647 - 1);
                            var_21 += (arr_5 [i_1] [12] [2]);
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_22 *= (!((!(arr_9 [10] [10]))));
                            var_23 = ((~(max((arr_21 [i_0 - 3] [i_0 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 3]), (arr_21 [i_0 - 3] [i_0 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 3])))));
                            arr_22 [i_0] [i_7] [i_2 - 1] [i_2] [i_7] [i_4] = ((((((arr_7 [i_2]) ? -1 : (arr_5 [i_0] [i_0] [i_2])))) ? (((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) + (arr_20 [i_0] [i_4]))) : var_14));
                        }
                        arr_23 [i_2] [i_1] [1] [4] = 116;
                    }
                    arr_24 [i_2] [i_2] [i_2] [13] = (((((arr_1 [i_1 - 3]) ? 248 : (arr_1 [i_1 - 2])))) ? (((arr_1 [i_1 - 2]) - (arr_1 [i_1 - 1]))) : ((253 - (arr_1 [i_1 - 2]))));
                    var_24 = (((((253 ? (arr_8 [i_2 - 1] [6] [i_2] [i_2]) : 242))) ? (min((arr_16 [i_0 - 2]), 1210792526)) : (((46648 & 11891) | (~var_0)))));
                    arr_25 [i_2] [i_2] = ((((-741503011 ? 8121347514544603348 : 0)) + (arr_4 [i_1 - 3] [i_2 - 1] [i_0 - 3] [i_1 - 3])));
                }
            }
        }
    }
    #pragma endscop
}

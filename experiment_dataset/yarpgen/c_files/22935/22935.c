/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (((((min((!80), (1776744841 && -1220177193))))) != (((var_4 | var_8) ? (max(var_3, 576460752303357952)) : ((max(var_5, 2147483647)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 ^= ((((((((~(arr_8 [i_4] [i_1] [i_1] [i_0 - 1])))) ? ((-(arr_1 [i_1]))) : 105))) ? ((((((arr_2 [i_3] [i_3]) ? (arr_13 [i_0] [i_4] [i_4] [i_3] [i_4]) : var_1))) ? var_4 : ((((arr_5 [i_0 + 1] [i_0 + 1]) ? 255 : (arr_9 [i_1] [i_2 + 2])))))) : ((max(var_3, (arr_3 [i_1] [i_1] [i_4]))))));
                                var_13 *= (((((~(arr_6 [i_4] [i_4] [i_4])))) ? ((var_7 ? (arr_8 [i_0] [i_4] [i_4] [i_0]) : (arr_6 [i_4] [i_0 + 1] [i_4]))) : (((((arr_1 [i_1]) >= (arr_6 [i_1] [i_0 - 1] [i_1])))))));
                            }
                        }
                    }
                    var_14 = (((((arr_10 [i_0] [i_1] [i_1] [i_1] [i_2 + 1] [i_1]) ? (arr_8 [i_2] [i_0] [i_0] [i_0]) : (min(3551146615, (arr_1 [i_0]))))) > ((76 ? 2505886029 : 92))));
                    var_15 ^= (((arr_7 [i_2 + 3] [i_0 - 1] [i_0 - 1]) ? (min(108, (max(var_0, (arr_0 [i_1] [i_1]))))) : 192));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_16 *= ((((((arr_4 [i_5] [i_5]) ? (~var_1) : (~1)))) ? (((((~(arr_9 [i_5] [i_5]))) ^ ((var_6 ? (arr_1 [i_5]) : -1824333060))))) : ((~(arr_16 [i_5])))));
        var_17 *= ((~(((arr_13 [i_5] [i_5] [12] [i_5] [i_5]) ? (arr_15 [i_5]) : (arr_13 [i_5] [i_5] [i_5] [4] [i_5])))));
        var_18 = ((arr_7 [i_5] [i_5] [i_5]) / ((((!(arr_14 [i_5] [i_5] [8] [i_5] [14]))) ? ((var_3 ? (arr_16 [i_5]) : var_0)) : (((arr_14 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_7 [i_5] [i_5] [i_5]) : (-2147483647 - 1))))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_19 = (--2461451625);
        var_20 = ((((((2638021455 ? 127 : (-2147483647 - 1))) ? (-2028557125 + 96) : 33554432))));
        arr_22 [24] [24] = ((~(((var_0 / 49) ^ (22436941 ^ 0)))));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_26 [i_7] = (((((((arr_5 [i_7] [3]) ? (arr_18 [i_7] [i_7]) : (arr_6 [i_7] [i_7] [i_7])))) ? ((-1 ? (arr_2 [i_7] [i_7]) : (arr_9 [i_7] [i_7]))) : (arr_14 [12] [i_7] [i_7] [i_7] [i_7]))) * ((((((-(arr_1 [i_7])))) ? (arr_21 [i_7] [i_7]) : ((-(arr_24 [i_7])))))));
        var_21 ^= ((!((max((-2147483647 - 1), (arr_14 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
    }
    #pragma endscop
}

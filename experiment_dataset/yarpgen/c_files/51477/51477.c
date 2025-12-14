/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [15] = (+(max((arr_1 [i_0]), (((arr_4 [i_0]) - 11320270787820744641)))));

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_11 = ((~((1 ? 3812725725911108401 : 9700))));
                    arr_9 [8] [8] [8] = ((((max((arr_8 [i_2 - 1] [i_1] [5] [13]), (arr_8 [i_2 - 2] [9] [9] [i_0])))) - ((max((arr_8 [i_2 + 2] [i_1] [i_1] [4]), (arr_8 [i_2 + 1] [0] [11] [i_1]))))));
                    arr_10 [1] [i_0] [0] [i_0] |= ((3812725725911108401 ? (max((arr_8 [i_1] [4] [i_1 - 1] [i_1]), 18446744073709551603)) : ((max(-3812725725911108408, 14151)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2 + 2] [i_4] [i_4] = (((((min(14154, var_8)) >= ((max((arr_7 [1] [1] [i_2] [1]), var_9))))) ? (arr_1 [i_1]) : (-1122162647 ^ 31668)));
                                var_12 ^= ((9 ? (((92 ? 127 : 115))) : (((((arr_1 [i_2]) ? (arr_4 [i_1]) : -113700948730213653)) ^ (~var_7)))));
                            }
                        }
                    }
                }
                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    arr_19 [i_0] [i_5] [i_0] = (!65535);
                    arr_20 [i_5] [i_5] = ((((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_13 [12] [1] [i_5] [i_5] [i_5 - 4]) : 6702))) ? ((var_6 + (arr_13 [11] [i_1 - 1] [11] [11] [i_1 - 1]))) : (arr_6 [i_1 + 1])))) ? ((~((49 ? 49 : -1956733938)))) : 25);
                }
            }
        }
    }
    var_13 = (max(var_2, (((91 ? ((var_0 >> (var_5 + 99))) : (max(var_0, var_5)))))));
    var_14 = 65535;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= 16224471;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_3]);
                                var_17 = (3761846559 <= -50);
                                var_18 ^= (((!var_12) ? ((((((arr_6 [i_0] [i_0]) || (arr_2 [i_0]))) || ((((arr_6 [i_0] [i_0]) ? 55 : 28271)))))) : (((arr_9 [i_4] [i_3] [i_2] [0] [i_0] [i_0]) % var_0))));
                                var_19 = (min(var_19, ((min((((((min((arr_4 [i_0]), -99))) ? 144 : (~-99)))), ((((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 9 : (arr_13 [i_0] [1] [i_0] [i_0] [11])))) ? (arr_11 [i_0] [2] [2] [3]) : ((~(arr_14 [6] [i_1] [6] [1] [i_1]))))))))));
                            }
                        }
                    }
                    arr_16 [i_0] [0] = (arr_5 [i_0]);
                    var_20 += (min((arr_6 [i_1] [i_2]), (arr_10 [0] [i_1] [0] [0])));
                    var_21 = (((((-82 ? (min(3552469450, 28258)) : 0))) ? 41 : ((((((arr_5 [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [11] [4] [i_0] [i_2]) : 6))) ? (arr_1 [i_0]) : 28317))));
                }
            }
        }
    }
    var_22 = 2753571210;
    #pragma endscop
}

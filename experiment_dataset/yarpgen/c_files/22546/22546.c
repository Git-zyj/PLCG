/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] [i_1] = -2709444802357085637;
                    var_14 = (min((arr_4 [i_1 - 1] [i_1 + 1]), ((var_5 ? (arr_4 [i_1 + 2] [i_1 - 1]) : (arr_1 [i_0] [i_1 - 2])))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_15 = (arr_3 [i_1]);
                        arr_11 [i_1] [i_1 - 1] [i_1 - 2] [i_1 + 1] = (min((((arr_5 [i_0]) + (((var_8 - (arr_10 [i_0] [i_1] [i_1] [i_2] [3])))))), (arr_5 [5])));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [0] = 10204;
                        var_16 = var_6;
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_17 = 8;
                        var_18 ^= ((!((((((var_9 + (arr_5 [6])))) ? (min((arr_5 [i_0]), (arr_3 [i_2]))) : (arr_12 [i_0] [i_0] [i_2] [1] [7]))))));
                    }
                }
            }
        }
    }
    var_19 = (-32767 - 1);
    #pragma endscop
}

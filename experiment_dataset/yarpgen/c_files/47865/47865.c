/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_1 [i_0]) ^ (arr_1 [i_0])))) ? var_5 : (((max((arr_1 [i_0]), var_7))))));
        var_10 = (max(var_10, ((!((max(1, (min(181, 0)))))))));
        arr_4 [i_0] [i_0] = (8524115234673633885 > (((min(0, 5)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_11 = (-1584585399 || (((-(arr_1 [i_0])))));
                        var_12 = (max(var_12, (((((arr_6 [i_0] [i_2] [i_2]) ? (arr_6 [i_0] [i_0] [i_0 - 2]) : ((9922628839035917731 ^ (arr_2 [i_2])))))))));
                        arr_11 [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_3] [i_0] = (((((-(((arr_6 [i_0 - 3] [i_2] [i_2]) * 0))))) ? var_1 : ((-(arr_10 [i_0] [i_0 - 2] [i_0] [i_3 + 3] [i_3] [i_3])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        var_13 = (((arr_6 [i_4 - 2] [i_4 - 2] [i_4 - 1]) & (arr_6 [i_4 - 2] [i_4 + 2] [i_4 - 1])));
        var_14 = (min(var_14, (((-(arr_15 [16]))))));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_15 |= (min(2, 9922628839035917733));
        var_16 += ((((((arr_10 [0] [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_10 [16] [i_5] [i_5] [i_5] [i_5] [16]) : 8524115234673633879))) ? ((~(arr_18 [i_5] [i_5]))) : var_9));
        arr_20 [i_5] = (((!7772822527119755657) & (arr_7 [8] [i_5] [8] [8])));
    }
    var_17 = ((((max((~-13), 7772822527119755678))) & ((((1004025688 ? 697192311 : 8524115234673633871)) >> (((min(var_9, var_3)) - 917593307))))));
    var_18 = (max(var_18, ((max(-7772822527119755674, (min((min(8524115234673633885, -1)), var_2)))))));
    #pragma endscop
}

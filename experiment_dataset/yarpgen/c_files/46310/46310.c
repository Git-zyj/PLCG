/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= 835103167;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((arr_2 [i_0] [i_1] [i_1]) ? ((max((-835103167 / var_5), (arr_3 [i_1 + 2] [i_1 + 1])))) : (arr_1 [i_0] [i_1]));
                arr_5 [i_0] [i_1] = (((((((max((arr_1 [i_1] [i_0]), var_5))) ? ((((arr_0 [i_1] [i_0]) ? var_9 : var_2))) : (min(var_4, var_15))))) ? (((((var_18 ? var_3 : (arr_3 [14] [i_1])))) ? ((~(arr_1 [i_0] [i_0]))) : ((min((arr_0 [i_1 + 1] [i_0]), -1))))) : ((((var_1 && (arr_3 [i_0] [i_1])))))));
                arr_6 [i_0] = (arr_1 [i_1 + 2] [i_1]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_20 = (min(var_18, (((!-835103167) ? var_11 : (((min(var_2, (arr_11 [i_2] [i_2])))))))));
            var_21 -= ((~(var_1 >= 835103167)));
        }
        arr_12 [i_2] [i_2] = ((((((max(-835103178, 4035225266123964416)) << (835103190 - 835103190)))) ? (min(-835103167, (arr_1 [i_2] [i_2]))) : ((((min(835103167, (arr_2 [i_2] [i_2] [i_2]))))))));
        var_22 -= (max((((max(835103167, 16384)) << (((((arr_1 [i_2] [i_2]) / (arr_10 [i_2]))) - 6030388315)))), (min(var_8, -835103168))));
    }
    var_23 = var_12;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = -var_3;
                    arr_8 [i_1] [i_2] [i_1] [i_2] = (((300201823 * (13661649931915223556 || 17197614402450071532))));
                    var_15 = 4031675013167746960;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_16 = (min(var_16, (((((((arr_9 [i_3]) ? (arr_2 [i_3] [i_3] [i_3]) : 1))) | (max((arr_2 [i_3] [20] [i_3]), ((2191668747008738592 ? 14415069060541804656 : 1697136461)))))))));
        arr_12 [i_3] = ((((((17197614402450071532 ? 4031675013167746963 : 1598307740)) ^ ((min(64, (arr_4 [4])))))) * (((((((5613475101127364701 % (arr_6 [i_3] [i_3] [i_3] [i_3])))) > -5613475101127364706))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_21 [i_3] [i_3] = ((((129 / 187787954020317987) ? (max(2160885891890938127, var_4)) : ((((arr_5 [i_3] [i_4] [i_3] [i_3]) ? (arr_0 [6]) : (arr_18 [i_3] [i_3] [i_3] [i_3])))))));
                        var_17 ^= (min((min(1, 0)), var_10));
                        var_18 += (((((((min(315600166, (arr_14 [i_3] [i_6] [i_6])))) ? (1 + 1521516693) : (max(1998463362, 5536664845094080880))))) ? (!-1285714238) : (max((((-2147483634 & (arr_19 [i_4])))), (arr_5 [i_4] [6] [6] [i_4])))));
                        arr_22 [i_3] [i_3] = (arr_2 [i_3] [i_4] [i_5]);
                    }
                }
            }
        }
        arr_23 [i_3] = ((((((43450 ? 1 : 98)))) * (3647404893451882519 && 17197614402450071532)));
    }
    var_19 = var_2;
    var_20 = -41;
    #pragma endscop
}

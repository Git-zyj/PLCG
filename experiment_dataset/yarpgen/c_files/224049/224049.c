/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (1 + var_14);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = 7276001070782230503;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = ((var_1 ? -1 : (min((1 + var_14), (arr_6 [i_2] [16] [i_0])))));
                    var_20 -= var_14;
                }
            }
        }
        arr_8 [3] [3] = (min((((3082576699250917228 ? (arr_2 [i_0]) : (arr_2 [i_0])))), var_9));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_11 [i_3] = ((!((!((max((arr_6 [i_3] [i_3] [i_3]), (arr_0 [i_3]))))))));
        var_21 = (min((((min(var_15, (arr_6 [3] [3] [i_3]))))), ((-(max(var_11, 15364167374458634373))))));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_5 + 1] [1] = (min(0, var_13));
                    arr_22 [i_4] [1] = (((var_13 <= -var_17) ? ((1 ? -4323569990667963739 : (1 | 4067117034475316116))) : (((max(1, 1))))));
                    var_22 = (max(var_22, 770613095));
                }
            }
        }
    }
    #pragma endscop
}

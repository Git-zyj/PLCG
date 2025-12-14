/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = -var_1;
                arr_6 [i_0 + 1] [i_0] [i_0] = ((((max((arr_2 [i_0] [i_0]), (arr_2 [i_0 - 1] [i_0])))) ? (((arr_4 [i_0 - 1]) ? var_7 : (arr_2 [i_0 - 1] [i_0]))) : ((max((arr_1 [i_1]), (arr_4 [i_1]))))));
                arr_7 [i_0] [i_0] [i_0] = max((min((max(var_6, 124)), (arr_1 [i_1]))), ((((arr_0 [i_0]) > var_9))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_2] [i_4] |= ((42 || ((min(var_8, 26)))));
                    arr_18 [i_3] [i_4] = ((((max((arr_3 [i_2]), var_1))) ? 151 : ((255 << ((((max(255, 151))) - 249))))));
                }
            }
        }
    }
    #pragma endscop
}

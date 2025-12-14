/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(var_12, var_12);
    var_14 = ((((max(((max(var_12, var_11))), (min(2409978215845625892, 16120376703586691122))))) ? (((((var_0 ? -2371828072795036139 : var_6))) ? var_10 : var_2)) : ((((!(!var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = ((((!(arr_6 [i_1] [i_1] [i_2 - 2] [i_2]))) ? ((min((!2326367370122860493), ((var_9 ? 5328867645773525427 : -2371828072795036139))))) : ((+(max((arr_6 [i_2] [i_2] [i_1] [i_0]), 16120376703586691123))))));
                    var_16 = (min(var_16, ((min((((!((max(6142498083883261582, (arr_3 [i_1]))))))), (min(2326367370122860493, 937298515)))))));
                }
            }
        }
    }
    #pragma endscop
}

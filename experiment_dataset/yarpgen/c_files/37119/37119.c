/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_1 ? 10020 : 2532024092)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((arr_1 [i_0]) - ((var_4 ? 2532024107 : ((-(arr_5 [i_1])))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_12 = 1762943209;
                    var_13 = (min(-1, (1762943212 < 4323455642275676160)));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] = (min(124, var_8));
                    var_14 = ((((~((var_8 + (arr_2 [i_0]))))) > (((((1 >> (((arr_8 [i_3]) - 3251746935)))) << (((((arr_1 [i_0]) ? -125 : 4092985035)) - 4092985031)))))));
                }
                arr_13 [i_0] = ((+(max((arr_8 [i_0]), (arr_8 [i_1])))));
                arr_14 [i_0] = -var_9;
                var_15 = -4092985035;
            }
        }
    }
    var_16 += -521556745564651470;
    var_17 = ((((max(var_4, var_1))) ? ((((((var_7 ? 1 : 201982275))) ? var_7 : 1))) : var_8));
    #pragma endscop
}

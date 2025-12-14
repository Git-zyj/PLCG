/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = ((!((((221 ? var_1 : 32123))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = 1;
                arr_5 [0] [i_0] = (max(var_11, (min(735299416035964326, (arr_0 [i_1] [i_0])))));
                arr_6 [i_0] [i_0] = var_13;
            }
        }
    }
    var_21 = (min(var_21, ((-var_6 * (1735 - -1735)))));
    #pragma endscop
}

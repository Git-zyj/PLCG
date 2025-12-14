/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((((!(((var_10 ? var_6 : var_10))))) && (((var_6 ? (((var_0 ? var_6 : var_4))) : var_0))))))));
                    var_14 = min(((((max(var_11, var_3))) ? var_9 : (var_7 ^ var_0))), var_6);
                }
            }
        }
    }
    var_15 += -var_2;
    #pragma endscop
}

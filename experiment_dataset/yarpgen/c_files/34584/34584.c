/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((~((2711389076 ? var_3 : var_9)))), var_8));
    var_13 = (max(var_13, (((var_2 ? var_7 : var_4)))));
    var_14 &= (min(3297074226914452787, ((min(106, 1029)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (min((((!((((arr_1 [i_0] [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_2]))))))), 44058))));
                    var_16 = ((-(arr_2 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}

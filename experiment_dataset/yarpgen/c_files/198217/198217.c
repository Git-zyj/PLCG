/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = ((-(arr_1 [i_0] [i_0])));
                    arr_9 [i_0] [5] [i_0] = (min((!135107988821114880), 18311636084888436735));
                }
            }
        }
    }
    var_17 = (max(var_17, (((!(((var_0 ? 923444410 : var_0))))))));
    var_18 = (~var_4);
    var_19 = ((((((var_0 * var_0) * var_1))) ? var_12 : -32752));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((5149662388757401982 ? -7056538595225971507 : 9223372036854775807)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = 675391482;
                var_21 = (min(((var_10 ? (arr_0 [i_1]) : var_6)), 675391482));
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}

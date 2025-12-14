/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_8;
    var_13 = var_3;
    var_14 = (((((min(2606024578, 22849)) ? (max(var_7, 2173095826)) : (!var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (((~var_10) ? 2173095816 : ((((!(arr_0 [i_0 + 1])))))));
                var_16 |= ((var_11 && ((!(arr_1 [i_0 - 1])))));
            }
        }
    }
    var_17 = (min(var_17, ((min(var_2, (((((max(1, var_0))) ? -10202 : ((min(var_6, var_1)))))))))));
    #pragma endscop
}

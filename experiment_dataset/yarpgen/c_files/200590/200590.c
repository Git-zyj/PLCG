/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((var_9 << (var_12 == var_5)));
                var_18 = 2147483647;
                var_19 = ((-(arr_2 [i_0])));
                var_20 &= ((((!((max(0, (arr_2 [6])))))) ? ((((max((arr_2 [14]), var_4)) != var_6))) : (((!(((var_12 - (arr_0 [i_0])))))))));
                var_21 = (max(var_21, (((-((~(arr_3 [18]))))))));
            }
        }
    }
    var_22 &= ((!((((var_7 ? var_2 : 1169108197)) >= (((var_4 ? 0 : var_1)))))));
    #pragma endscop
}

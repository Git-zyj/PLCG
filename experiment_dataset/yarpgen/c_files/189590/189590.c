/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 ? ((var_1 ? ((var_7 ? 110 : 1726)) : 1)) : (((-110 == 25529) << (var_5 - 176)))));
    var_11 ^= var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [i_1] = (((max((((16383 ? 2047 : 1))), ((82 / (arr_1 [i_1]))))) < ((((!(((1767290571 ? 455605012912342837 : -3392748321172562441)))))))));
                arr_6 [i_0] [10] = (((var_9 == -39) ? var_4 : (min((((var_3 ? (arr_3 [i_0]) : var_5))), (min(var_8, 124998356))))));
                arr_7 [i_0] [i_0] = 6554210284175974908;
            }
        }
    }
    var_12 = (((1 - 1) ? (var_8 >= 2527676725) : var_4));
    #pragma endscop
}

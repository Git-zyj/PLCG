/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (max((((((var_19 ? -425009694 : 8796092497920))) ? (max(-3604269743735870532, 6741632847843407532)) : ((max(var_15, var_2))))), (min((min(192, -8796092497921)), (min(-3604269743735870543, var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = ((((max(8796092497919, (max(-8796092497921, (arr_1 [i_0])))))) ? (max((max(5, 8141884072678202527)), var_8)) : ((min((max(-3604269743735870533, (arr_2 [i_0] [i_0]))), var_11)))));
                var_22 += max((((max(var_8, var_6)))), ((~(min(var_8, (arr_0 [i_1]))))));
                arr_5 [i_0] [12] &= ((-1956032413081010561 ? ((1 ? (max(-3604269743735870527, 3604269743735870532)) : (min(-8796092497921, 8796092497889)))) : (((-(~var_3))))));
            }
        }
    }
    var_23 -= (~7618);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                var_24 &= (((((-(max((-2147483647 - 1), (arr_1 [i_2])))))) ? ((((!8796092497889) ? (max(-8796092497921, (arr_9 [4] [i_3 + 1]))) : (((2147483647 ? (arr_10 [12] [i_3]) : (arr_6 [4]))))))) : (((!31) ? (min(-30410, 8141884072678202527)) : ((min(-8796092497910, (arr_8 [0]))))))));
                var_25 *= (((-((min(27296, 103))))));
            }
        }
    }
    #pragma endscop
}

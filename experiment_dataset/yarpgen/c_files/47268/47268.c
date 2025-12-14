/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 &= ((((max(-3436, (max(var_3, (arr_0 [i_0] [i_1])))))) ? (arr_4 [i_1] [i_0] [i_1]) : (min(2, (1290018270 + -32754)))));
                var_22 = (min((((var_12 >> (var_19 + 3218)))), ((32753 ? var_4 : (arr_5 [i_1])))));
                arr_6 [i_1] [i_0] [i_1] = ((((arr_5 [i_1]) & (((arr_1 [i_1]) ? -9980 : 8104128101634076736)))));
                arr_7 [i_0] [i_0] = var_15;
                arr_8 [i_0] [i_0] [i_0] = (max(5981282113720209272, 268435424));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_23 = (((arr_0 [i_2] [i_3]) ? (((-((var_13 ? (arr_10 [i_3] [i_2]) : (arr_9 [i_3])))))) : ((((max((arr_9 [i_3]), -32754))) ? (min(3014590992, var_11)) : ((((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_10 [i_2] [i_3]))))))));
                var_24 = (((~var_15) ? (max(1, ((9223372036854775807 ? var_3 : var_7)))) : (~var_1)));
            }
        }
    }
    #pragma endscop
}

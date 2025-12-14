/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_4 [i_0] [i_0] [i_0]);
                var_17 = (max(var_17, (((var_12 ? var_14 : var_0)))));
                var_18 = ((((((arr_0 [i_1 - 3]) ? 245 : ((0 ? 29 : 5375860462904194859))))) ? 14635 : (55489 + 10061)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] [i_3 + 1] = (var_0 ? (((arr_11 [i_3 + 1] [i_3 + 1]) | (~var_2))) : (3148205273 != 55508));
                var_19 = 3743508845;
                var_20 |= (((min(201, 1146762022)) - -255));
            }
        }
    }
    var_21 &= var_16;
    var_22 = ((var_13 ? ((-((1146762000 ? 10047 : 55489)))) : (var_9 / var_15)));
    #pragma endscop
}

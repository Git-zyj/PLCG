/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(max((1 + 182), (max(2368288591418765558, 7))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (min(((-((max(198, 1))))), (~var_12)));
                var_20 = (((((2305843009213693952 || (arr_4 [i_0 + 1] [i_1])))) << ((((((116 ? var_3 : (arr_2 [i_0] [i_0]))) >> (1 || var_9))) - 8175))));
                var_21 = (max((~var_7), (((arr_1 [i_1] [i_0 - 2]) ^ (((~(arr_4 [7] [1]))))))));
                arr_5 [i_1] = (max((((arr_2 [i_0 + 1] [3]) ? (arr_0 [i_0 - 2]) : (min(var_10, -1266923407417064640)))), (((-var_17 ? (min(2, var_7)) : (((((arr_1 [i_1] [i_0]) || var_6)))))))));
            }
        }
    }
    var_22 ^= 1136630491;
    #pragma endscop
}

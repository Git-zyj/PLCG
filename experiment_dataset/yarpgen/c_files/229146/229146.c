/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (max(6893204501131962555, (arr_3 [i_1] [13])));
                arr_6 [i_0] [i_1] = ((!((min((arr_4 [i_1] [i_1 + 1]), ((max((arr_0 [i_0]), var_3))))))));
                arr_7 [i_0] [i_1] = ((var_3 || ((min((min(2, 1)), 1)))));
                var_20 = (min(var_20, ((min((max((1 % 1), (max((arr_3 [i_0] [i_0]), 7968234153350325923)))), (min(-9192989058443311360, (arr_2 [i_0]))))))));
            }
        }
    }
    var_21 *= var_16;
    #pragma endscop
}

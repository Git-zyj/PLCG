/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!9113);

    for (int i_0 = 4; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 - 1] [15] = (var_0 == 112);
        var_11 &= (((((min(-64, (max(1909, var_7)))))) <= var_9));
        arr_4 [i_0 - 2] = var_6;
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                {
                    var_12 = ((!(((389936848826605252 ? (arr_13 [i_1 + 1] [i_1] [i_3 - 1] [i_3]) : (min((arr_2 [i_1 + 1] [i_1 + 1]), var_9)))))));
                    var_13 = (max((((((((arr_7 [i_2]) ? 63 : (arr_9 [i_2])))) || ((min(1, 2201423031)))))), (arr_11 [i_3 - 1] [6] [17] [i_1])));
                }
            }
        }
        arr_15 [i_1] = (min(2061773764, 2061773789));
    }
    for (int i_4 = 4; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_14 -= (min((((arr_13 [i_4] [16] [i_4] [i_4 - 2]) - (arr_13 [i_4 + 1] [4] [i_4 + 1] [i_4]))), 10057));
        var_15 = max((min((arr_17 [i_4]), (min(var_5, 751694671)))), (max((min((arr_6 [i_4] [i_4]), var_2)), (((122 ? 10058 : 3543272622))))));
    }
    #pragma endscop
}

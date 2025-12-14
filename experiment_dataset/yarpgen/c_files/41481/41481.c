/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = ((!(arr_1 [i_1] [i_1])));
                    var_20 = ((min((arr_4 [i_2 + 3] [i_1 - 1] [1] [i_1]), (!var_10))));
                    arr_6 [i_0] [i_0] [i_0] [i_0] = 5460;
                    arr_7 [i_2 + 2] [i_1] [i_0] = (min((min((arr_2 [i_0 - 2]), (arr_0 [i_1]))), (((!(((0 ? 127 : (arr_4 [i_2 + 1] [i_1 + 2] [i_0] [i_0 - 1])))))))));
                }
            }
        }
        arr_8 [i_0] [i_0] = (max(1, 2));
        arr_9 [i_0] = ((min((arr_4 [5] [5] [5] [5]), -1)));
        var_21 = ((!((((max(1291105108, 0)) << (!var_1))))));
        var_22 = 74;
    }
    var_23 = var_2;
    #pragma endscop
}

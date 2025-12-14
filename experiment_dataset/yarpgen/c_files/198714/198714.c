/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 = (((((((arr_3 [5] [i_2]) <= var_0)) ? (arr_5 [i_0] [i_0] [i_1] [i_1]) : (var_6 + 4294967290))) | ((((!(4294967290 <= 4294967290)))))));
                    var_11 = -var_4;
                    arr_6 [i_0] [i_1] [i_2] = (~((-(9831819289085380948 / 8614924784624170667))));
                }
            }
        }
    }
    var_12 = (max(var_12, (min((min(var_1, (~10))), 1))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 23;
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [0] [i_0] = (arr_4 [i_1]);
                var_15 = ((((((!(arr_4 [i_1 + 1]))))) + var_5));
                var_16 = (arr_0 [9] [12]);
                var_17 *= var_10;
            }
        }
    }
    var_18 = (max(var_12, (((var_10 && (((var_2 ? -26420 : -1))))))));
    #pragma endscop
}

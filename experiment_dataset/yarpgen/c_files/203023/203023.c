/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = -1167544301;
                var_12 = ((((min(((!(arr_3 [i_1]))), ((!(arr_1 [i_0])))))) == (-1167544301 <= 1167544309)));
                var_13 = (min(var_13, ((max((max(((var_9 | (arr_0 [20]))), -1666574631470244354)), ((min((arr_0 [18]), (arr_0 [14])))))))));
                arr_4 [i_1] [i_0] = ((-(min((arr_0 [i_0]), ((-(arr_0 [i_0])))))));
            }
        }
    }
    #pragma endscop
}

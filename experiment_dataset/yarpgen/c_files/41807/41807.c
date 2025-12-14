/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (!(1 + 743574407));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((((((arr_2 [i_1] [i_1]) ? (((max(var_10, var_5)))) : (195087922 + var_10)))) ? (0 | 0) : (min((min(606084998, var_5)), (arr_1 [i_0]))))))));
                var_14 *= ((1804730987 * (arr_1 [i_1])));
            }
        }
    }
    var_15 = ((-606084991 * (((((min(var_9, var_10))) < (49615 - var_6))))));
    #pragma endscop
}

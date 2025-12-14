/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1661944744;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (((((-((1 ? (-127 - 1) : (arr_4 [i_1])))))) ? ((-(arr_4 [i_0]))) : ((((-7163558755462332299 ? (arr_1 [i_0] [i_1]) : -7163558755462332308))))));
                var_20 -= (min((arr_1 [i_0] [i_1 - 1]), (((!(arr_4 [i_1 - 1]))))));
                var_21 = min(((max((arr_1 [i_1 + 1] [i_1 + 1]), (arr_2 [i_0] [i_1 + 2])))), 8783820892736111971);
            }
        }
    }
    var_22 = -7163558755462332308;
    #pragma endscop
}

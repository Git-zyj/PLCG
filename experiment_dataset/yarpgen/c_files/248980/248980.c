/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_4));
    var_14 = 1045962091247791339;
    var_15 = 2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_16 -= (((((max(var_1, var_12))) ? (arr_4 [i_0] [i_1 - 1] [i_1]) : 2)));
                var_17 = (arr_5 [i_0]);
                var_18 += (((max(120730392, 1)) != (arr_2 [i_0])));
            }
        }
    }
    #pragma endscop
}

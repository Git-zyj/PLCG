/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((2624270063839912631 ? var_9 : 8019894868902900814))) ? var_13 : -40))) ? -114 : (!var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = ((((!(!var_8))) ? ((((arr_1 [i_0] [i_0]) && -77))) : (!231)));
                var_17 -= ((((!(arr_4 [i_0]))) ? (arr_5 [12]) : ((-(arr_3 [i_1 - 2] [i_1] [i_1 + 1])))));
                var_18 = -50;
            }
        }
    }
    #pragma endscop
}

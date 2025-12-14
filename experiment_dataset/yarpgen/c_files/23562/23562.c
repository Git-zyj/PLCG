/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = var_9;
                var_19 = (((((arr_1 [i_0]) && 225)) ? (((!(arr_1 [i_1])))) : ((max(var_7, (arr_1 [i_0]))))));
                var_20 = ((((max((arr_3 [i_1]), (arr_4 [i_0]))) + 255)));
                var_21 = 10325365148496133373;
            }
        }
    }
    var_22 -= var_13;
    #pragma endscop
}

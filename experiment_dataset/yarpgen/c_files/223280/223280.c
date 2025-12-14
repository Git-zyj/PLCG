/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -4745;
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [2] = (((((arr_1 [i_0] [i_0]) == 50763)) ? ((((arr_2 [i_0]) ? 1 : (arr_2 [i_0])))) : -6628073372014877481));
                var_14 = ((-((max(2354036310, (arr_3 [2] [i_1] [i_1]))))));
            }
        }
    }
    var_15 &= (max((((2147483647 - var_6) + (((var_0 ? 28672 : var_0))))), (((((var_3 ? var_1 : 232048019)) + var_10)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(((((-32767 - 1) + var_10))), var_3))) ? var_11 : (((var_13 % var_12) ? (((var_8 << (6398653978019488662 - 6398653978019488659)))) : var_16)));
    var_18 *= (((var_11 * (var_5 < var_7))));
    var_19 += (((((((var_0 << (3680201734949217806 - 3680201734949217801)))) ^ 1039726869)) - 1));
    var_20 = ((var_10 ? (((3255240426 | 30177) ? var_10 : -6756266550026609342)) : (((var_11 ? (var_15 - var_6) : var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 -= var_0;
                var_22 = ((((-(arr_0 [i_0]))) != (((!(arr_2 [1] [i_1] [i_1]))))));
                var_23 = (max(var_23, (arr_2 [i_0] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}

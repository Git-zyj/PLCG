/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += -1670503696;
    var_11 += (max(((var_6 ? (!var_8) : var_7)), var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = ((((max(49726, 57))) < (max(var_3, (max((arr_2 [i_0] [i_0] [i_0]), -21227))))));
                var_13 = (max(var_13, ((((max((arr_2 [6] [i_1] [6]), -2828)) < ((max(var_5, var_9))))))));
                arr_4 [i_0] [i_0] = (((((max(var_2, var_1))) ? -1555648721 : var_6)));
            }
        }
    }
    var_14 = ((-var_1 ? (max(((var_0 ? var_9 : var_6)), (65265 & -1514599813))) : (((((var_5 ? 1514599790 : 1514599797))) ? (-1514599813 || var_4) : var_1))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_0 + var_12) ? var_17 : ((((((min(var_4, var_9)))) == (max(var_1, var_17)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((-((max((((var_5 || (arr_1 [i_0] [i_0])))), 0)))));
                arr_5 [i_0] [i_1] [i_1] = -0;
                var_19 = max((((((var_8 ? (arr_2 [i_0] [i_1]) : var_16))) ? var_6 : 18446744073709551600)), (arr_3 [i_0] [i_1]));
                var_20 = ((var_16 | (max(((12199984699613171282 ? 1198688622 : 32)), var_6))));
            }
        }
    }
    var_21 = (min((((0 % 138648586) * var_9)), ((((var_7 & var_0) < var_13)))));
    var_22 = (((((max(var_4, var_12))) <= 1)));
    #pragma endscop
}

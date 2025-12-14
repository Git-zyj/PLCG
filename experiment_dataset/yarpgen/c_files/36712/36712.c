/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_6 ? var_2 : var_17)))) / ((var_4 ? ((max(var_3, var_15))) : (~var_16))));
    var_20 = ((-807255901 ? (max(var_17, ((max(var_3, var_2))))) : ((max(var_3, ((var_4 ? 6 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 = (max(1, ((((((arr_1 [i_0] [i_0]) ? var_7 : var_2))) && (((var_0 ? 0 : var_16)))))));
                var_22 = (max(((var_13 | ((-9 | (arr_5 [i_1]))))), (((!(3330406065 | var_7))))));
                var_23 = ((!((((arr_5 [i_0 - 1]) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 2]))))));
            }
        }
    }
    var_24 = (min(var_24, var_6));
    #pragma endscop
}

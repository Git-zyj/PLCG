/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(var_1, (((var_12 ? var_0 : -27082)))))) ? (((min(-27093, var_5)))) : -var_8));
    var_15 = (min(var_15, (((((((((var_0 ? var_13 : var_10)))) + 2147483647)) >> ((((15457751637098867960 ? -27082 : -27075)) + 27082)))))));
    var_16 = (min(((((min(27074, var_12))) ? var_2 : (((var_10 ? var_9 : var_0))))), (((var_9 ? -var_12 : (((-27075 ? 279265756 : 279265745))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= (((((18138482770034632097 ? var_6 : (min(4294967295, 124751779))))) / ((var_3 ? (arr_6 [i_1] [21] [i_2]) : -1))));
                    arr_8 [i_0] [1] [i_0] = (max((((var_0 / ((min((arr_6 [i_0] [i_1] [i_2 - 1]), (arr_3 [i_0] [i_1] [2]))))))), (((arr_0 [i_0 - 1]) ? (arr_2 [i_0]) : (arr_0 [i_0 + 1])))));
                    var_18 = (arr_6 [i_0] [i_0] [i_2]);
                    var_19 = (!3245315432);
                }
            }
        }
    }
    #pragma endscop
}

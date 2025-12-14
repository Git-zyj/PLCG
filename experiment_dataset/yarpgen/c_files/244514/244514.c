/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((min(7313909146627931911, 2254507124)), ((((((var_8 ? var_3 : var_13))) ? var_11 : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = var_2;
                    var_18 = (((arr_5 [i_0] [i_0 - 1] [i_0 + 1] [i_0]) ? (min((min((arr_2 [i_2] [i_1]), var_13)), (((!(arr_4 [i_0 - 4] [i_0 - 1])))))) : (arr_2 [i_0 - 2] [i_2])));
                    arr_7 [i_0 - 4] [19] [2] = -var_13;
                }
            }
        }
    }
    var_19 = ((var_3 ? var_9 : ((((((min(var_15, var_15))) || (var_1 * -7491)))))));
    var_20 = ((((((((min(var_8, var_14)))) ^ var_9))) ? var_6 : (min(((-7502 ? 3245344989036975517 : 11132834927081619686)), ((min(2147483647, var_2)))))));
    #pragma endscop
}

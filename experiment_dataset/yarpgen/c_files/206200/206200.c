/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [6] [i_2 - 2] [i_2] = ((((min(1213985563, 65535))) ? ((65534 ? 3609091367 : 32767)) : ((min((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1]))))));
                    var_18 -= arr_2 [i_2];
                    var_19 = (max(((min(var_2, var_13))), -40863));
                    var_20 = (arr_6 [i_0] [i_0 - 3] [i_1] [i_2]);
                }
            }
        }
    }
    var_21 = ((-1370122402463121769 ? var_4 : ((32767 ? (((40863 ? -32695 : 1))) : -9093285289914011641))));
    var_22 = ((var_3 ? ((((-21019 ? 3823791188 : var_14)) << (((max(var_9, var_11)) - 955959059)))) : (((-((var_1 >> (var_12 + 11919))))))));
    #pragma endscop
}

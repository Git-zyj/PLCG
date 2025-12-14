/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (max(((max(var_3, var_1))), (max((min(var_17, -8192)), ((var_0 << (var_5 + 1374958431)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 ^= (min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_0])));
                    var_20 = (max((!var_15), (min((arr_8 [i_1] [i_1]), 1))));
                }
            }
        }
        arr_9 [i_0] |= (min((arr_6 [i_0] [12] [i_0]), (arr_8 [i_0] [i_0])));
        arr_10 [i_0] |= (((((arr_8 [i_0] [i_0]) && (arr_5 [0] [i_0] [i_0])))) << ((((!(arr_2 [i_0]))))));
    }
    var_21 -= var_2;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            {
                var_22 = var_2;
                var_23 = (max(((max((arr_1 [i_4 + 1] [i_4 - 1]), ((17501863422141549139 ? var_15 : -8192))))), (((arr_8 [i_3] [i_3]) ? (((arr_14 [1] [i_4]) << (((arr_14 [1] [i_4 - 1]) - 11934879424062478830)))) : (arr_12 [i_4 + 1] [i_3])))));
            }
        }
    }
    #pragma endscop
}

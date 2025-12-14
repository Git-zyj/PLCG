/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 *= (arr_1 [i_0] [i_1]);
                    var_18 = var_7;
                }
                arr_8 [i_1] [i_1 - 1] [i_1] = (arr_3 [i_1]);
                var_19 += (((((arr_7 [i_0] [i_1 - 1] [i_1 - 1]) && ((min((arr_5 [14] [14] [4]), var_1))))) ? (((!((max((arr_1 [i_1] [i_1 - 1]), (arr_2 [i_0] [15] [16]))))))) : ((~(((arr_5 [16] [16] [i_1]) << (var_3 - 4831875662757113706)))))));
                var_20 = (min((((((arr_3 [i_0]) || var_3)) ? ((var_7 ? var_3 : (arr_7 [i_0] [i_0] [i_0]))) : var_4)), (arr_1 [i_0] [i_1])));
                arr_9 [i_0] [2] [4] |= (max(((!(((~(arr_5 [18] [i_1 - 1] [10])))))), ((((max((arr_5 [18] [i_0] [18]), (arr_1 [i_0] [i_1])))) && ((((arr_7 [i_0] [i_1] [i_1]) ? var_5 : (arr_3 [i_1]))))))));
            }
        }
    }
    var_21 = var_15;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 *= ((((((arr_6 [i_0] [i_1] [i_2]) ? ((((arr_1 [8]) ^ 1))) : (119 - 10381566902942317561)))) ? ((-19854 ? (((((arr_4 [i_2] [i_1] [i_0]) > (arr_5 [i_0] [i_0] [i_0]))))) : (min((arr_8 [i_0] [i_0]), var_14)))) : ((((var_15 || (arr_2 [i_0] [i_0] [i_0])))))));
                    arr_9 [9] [i_1] [i_0] [0] = (max((((1 ? 1 : (-5074974329011700250 < 8065177170767234055)))), (((((arr_4 [i_2] [i_1] [i_0]) ? 3696005069652056146 : (arr_0 [i_0]))) + 1))));
                    arr_10 [0] [i_0] [1] = (arr_7 [i_0] [i_2 - 1] [i_2 - 1] [i_0]);
                    var_19 += ((+(((arr_7 [i_1] [i_2 + 1] [i_2 - 3] [i_2 - 3]) ? (arr_7 [i_1] [i_1] [i_2 - 2] [i_2 - 1]) : (arr_7 [i_2] [i_2] [i_2 - 2] [i_2 - 1])))));
                }
            }
        }
    }
    var_20 = ((var_12 ? var_5 : (min(41, var_8))));
    #pragma endscop
}

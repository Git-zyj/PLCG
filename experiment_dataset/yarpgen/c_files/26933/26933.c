/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 888797001;
    var_17 = (((((((max(var_13, var_9))) ? var_1 : (max(3406170295, var_6))))) && ((((var_2 ? 888797001 : 888797001)) == -1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = ((-93 ? (max((((15928 >> (3406170264 - 3406170244)))), (min(1878117947605170788, 472748428)))) : -536839702));
                    var_19 = (arr_3 [i_0]);
                    var_20 = ((((-(max((arr_0 [i_0] [i_1]), var_9)))) < ((min((((-32 * (arr_4 [1] [i_1] [i_1])))), (min((arr_4 [1] [i_1 - 1] [i_1]), (arr_0 [i_1 + 2] [i_2]))))))));
                    var_21 = (max((arr_2 [i_0]), (((max((arr_2 [i_1]), (arr_6 [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}

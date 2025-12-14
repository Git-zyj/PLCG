/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);
        var_17 &= (min((((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 176))) ? (107 + var_0) : var_13))), ((((17208435406790889954 + (arr_0 [i_0]))) + 1))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_8 [i_3] [i_2] [i_0] [i_0] &= (((min((((arr_1 [i_0]) % 536870911)), ((((arr_2 [i_0]) ? -15597 : 182))))) * ((min((arr_1 [i_1]), (1 / var_0))))));
                        var_18 = (max(((max(3519404787, 3519404800))), (max((arr_5 [0] [12]), (max(775562513, (arr_4 [13] [6])))))));
                        arr_9 [i_3] [14] [i_2] [i_2] = (((1565589539 < (3389189951 < 3519404795))));
                    }
                }
            }
        }
        var_19 = ((80 ? ((~((~(arr_1 [i_0]))))) : (arr_7 [i_0] [i_0] [11])));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-var_2 ? (((var_8 ? var_6 : var_3))) : var_15));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((!((max(var_7, (arr_1 [i_0 - 1]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_3] [i_1] [i_3] [i_3] = (((arr_5 [i_3 + 1] [i_1] [i_2] [i_2]) <= (((arr_5 [i_3 + 1] [i_3 + 1] [i_2] [9]) ? -14162 : (arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 2])))));
                        var_19 *= min((arr_1 [i_0]), 14161);
                    }
                }
            }
        }
    }
    #pragma endscop
}

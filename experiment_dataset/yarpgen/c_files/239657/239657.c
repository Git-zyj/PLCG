/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2 - 1] [i_1] = ((~(!0)));
                        var_19 = (arr_8 [i_0] [i_0] [i_0] [i_1] [i_1] [i_3 + 1]);
                        var_20 = (min(var_20, ((max(((~(~1))), (((1 == (~8105090712998724836)))))))));
                        var_21 = (max(var_21, ((((!var_4) >= 13861449383417913123)))));
                    }
                }
            }
        }
        arr_11 [i_0] = (~(arr_4 [i_0]));
    }
    var_22 = (min(var_22, (((max((876769445437340762 / var_2), var_2))))));
    var_23 = var_13;
    #pragma endscop
}

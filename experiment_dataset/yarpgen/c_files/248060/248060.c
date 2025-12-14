/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 *= (((((~(((arr_1 [i_0]) + (arr_1 [i_0])))))) ? ((0 ? (12723155138226303931 < var_8) : -1)) : ((-(arr_1 [i_0])))));
        arr_2 [i_0] = var_10;
    }
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_16 = (max((((((47 ? var_12 : -2)) != -56))), ((max((arr_0 [i_1 + 1]), var_8)))));
                        var_17 = (((var_6 ? var_2 : (arr_3 [i_2]))));
                        arr_12 [i_2] = (~-125);
                        var_18 = ((0 % (((var_4 ? 1 : 12)))));
                        arr_13 [i_4] [i_3] [i_2] [i_2] [i_2] [i_1] = var_0;
                    }
                    arr_14 [i_2] = (!(!0));
                }
            }
        }
    }
    #pragma endscop
}

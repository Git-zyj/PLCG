/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_20 = (((arr_0 [i_1 + 2] [i_1 - 2]) != (arr_5 [i_1 + 2])));
            var_21 = ((((1 ? 536870912 : -95)) >> var_13));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_3] [i_0] [i_5] [i_5] = (~5745);
                            var_22 = var_4;
                            arr_20 [i_5] [i_3] [6] [i_5] = var_8;
                        }
                    }
                }
            }
            arr_21 [i_0] = (((((arr_16 [14] [i_2] [i_0] [i_2] [i_2] [i_2] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_7 [i_0] [15] [i_0]))) <= var_5));
        }
        var_23 = (((arr_6 [i_0]) > ((((arr_4 [i_0]) != (arr_4 [i_0]))))));
        var_24 = 33468;
    }
    #pragma endscop
}

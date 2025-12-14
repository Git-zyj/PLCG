/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_12 ? var_11 : var_0);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = -731927756487685399;
        var_18 = ((-((-(arr_1 [i_0])))));
        arr_2 [i_0] = var_0;
        var_19 = (max((((-731927756487685399 + 9223372036854775807) << (((arr_1 [i_0]) - 25884)))), (((arr_0 [i_0]) ? (~17436) : (~-9223372036854775807)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            {
                var_20 = max((arr_6 [i_2]), (arr_6 [i_2]));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_12 [i_2] [i_2] = (max(((111 ? (!-9223372036854775807) : 11475237929747942438)), (((!(13 && 1849583198))))));
                            arr_13 [i_2] [i_2] [i_2] [i_1] = ((max(((var_0 ? (arr_9 [6] [6] [i_3] [3]) : 1)), (((var_14 ? 0 : -1515447688))))));
                        }
                    }
                }
                arr_14 [i_2] [i_2] = -9223372036854775806;
                arr_15 [i_2] [i_2] = 369616681;
                arr_16 [i_2] [i_2] = (((!var_11) + (arr_0 [0])));
            }
        }
    }
    #pragma endscop
}

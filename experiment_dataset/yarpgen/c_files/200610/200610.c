/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, -7504084653398187098));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = (min((((var_12 + 2147483647) << (((((arr_4 [i_0] [i_0] [i_0]) + 5591866437492057323)) - 2)))), -8));
            var_15 += (((((~(arr_0 [i_0])))) ? (min(-3115595623435445411, (arr_0 [i_0]))) : ((3115595623435445406 ? -3115595623435445411 : -3115595623435445432))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] = (((((-3115595623435445432 ? -3115595623435445436 : -3115595623435445409))) ? 898245751 : (((((arr_0 [i_0]) <= var_1))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_16 = (((var_9 + 2147483647) >> (((arr_9 [i_3]) - 2013021045))));
                        arr_17 [i_0] = (((var_11 ? -3115595623435445436 : -3115595623435445429)));
                        arr_18 [i_0] [i_2] [i_0] [i_4] = ((3115595623435445404 ? ((((arr_3 [i_0]) ? 23 : 195))) : 3396721552));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            arr_22 [i_0] [i_5] = ((!(arr_3 [i_0])));
            arr_23 [i_0] [i_0] = var_0;
        }
        arr_24 [i_0] [i_0] = ((((-(-17493 * -3))) >= var_12));
    }
    #pragma endscop
}

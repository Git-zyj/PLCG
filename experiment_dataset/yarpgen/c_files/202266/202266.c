/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(((!(var_18 - var_11))))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((((236 ? (arr_0 [i_0] [i_0]) : var_3)) * ((-1488070857 / (arr_0 [i_0] [i_0]))))))));
        var_20 = ((((((!(arr_1 [i_0]))))) <= (((min(8064, var_4))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = var_9;
        var_22 ^= var_3;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        var_23 = (!var_0);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_3] [i_2] = (~2623860959);
                    var_24 = (min(var_24, (((2623860959 ? 1 : 116)))));
                }
            }
        }
        var_25 = (max(var_25, (((2623860950 ? 1671106346 : 1)))));
    }
    var_26 = ((-(((1671106337 ^ 1) ? -2623860959 : 1671106346))));
    var_27 = (max(var_27, ((((((-(!14296)))) ? var_16 : (~10135122835173267649))))));
    #pragma endscop
}

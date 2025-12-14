/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(var_15, ((~((12088144493428167275 ? var_1 : var_0)))));
    var_17 = (((!32552) ? (((min(var_9, 32961)) - 115)) : var_13));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = ((~(!32982)));

            /* vectorizable */
            for (int i_2 = 4; i_2 < 15;i_2 += 1) /* same iter space */
            {
                var_18 = (min(var_18, ((((!4) == var_10)))));
                var_19 = 32984;
                var_20 = 32552;
            }
            for (int i_3 = 4; i_3 < 15;i_3 += 1) /* same iter space */
            {
                var_21 = (arr_6 [i_0] [i_1 - 1] [i_3 + 1]);
                arr_10 [10] [i_3 + 2] [i_0] [i_0] = (((min(((19815 ? 32541 : (arr_7 [i_0] [i_0]))), var_10)) + ((((!(arr_7 [i_1 - 1] [i_3 + 2])))))));
            }
        }
        var_22 = (((((arr_1 [i_0]) ? 419137940 : -var_4)) < ((((!(0 && -29342)))))));
        var_23 *= ((-(~var_8)));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    var_24 = var_8;
                    var_25 = (arr_8 [i_4] [i_5] [i_5]);
                }
            }
        }
        var_26 |= ((~((29655 | (~-1799888024173055506)))));
    }
    #pragma endscop
}

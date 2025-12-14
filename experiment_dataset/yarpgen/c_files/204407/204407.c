/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = ((((((!(((33570 ? 4208111353 : 1981223948455050038))))))) | (arr_5 [i_0] [i_0] [i_0])));
                arr_6 [i_1] [i_0] [i_0] = ((!(((arr_2 [i_0]) || (arr_2 [i_0])))));
                var_19 = (min(var_19, (((((((((arr_4 [i_1] [i_0]) | (arr_5 [i_1] [i_0] [i_0])))) ? (arr_2 [i_0]) : (min(16122539677286042974, 4208111353)))) >= (((((((86855942 ? 32767 : (arr_1 [i_0])))) == (arr_5 [i_1] [i_0] [i_0]))))))))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_20 = (min(((!(((16122539677286042973 ? 23592 : 1))))), (((((arr_2 [i_2]) ? var_6 : 4052660016926942127)) == (arr_2 [i_2])))));

        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            var_21 = (((arr_12 [i_3 - 2]) % 1));
            arr_13 [i_2 + 1] [i_2] [i_3 - 2] = ((min((!var_11), ((var_13 ? (arr_12 [i_3 - 1]) : var_10)))));
            var_22 = (min(2324204396423508663, -15));
            var_23 = var_4;
        }
        var_24 = (arr_11 [i_2 - 1]);
    }
    var_25 = (min(var_5, var_12));
    #pragma endscop
}

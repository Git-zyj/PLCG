/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 += (arr_0 [i_0 + 1]);
                var_12 = ((1 ? 14229 : ((((((arr_2 [i_0] [i_1] [9]) % (arr_2 [i_1] [i_1] [0])))) + (min((arr_0 [i_0]), (arr_2 [i_0] [i_0 - 1] [i_0 - 1])))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_13 = (max(var_13, (((!((((arr_7 [i_2] [1] [i_3]) / -1322125108))))))));
            var_14 = ((var_4 ? (arr_4 [i_3 + 2] [i_3 - 1]) : (arr_5 [i_2])));
            var_15 = ((-(arr_6 [i_2])));
            var_16 = (min(var_16, -9002801208229888));
            var_17 = (min(var_17, (~var_5)));
        }
        arr_11 [i_2] [i_2] = ((!(arr_8 [i_2] [i_2])));
        var_18 |= ((((arr_6 [i_2]) ? (arr_10 [i_2]) : (arr_10 [i_2]))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = ((((max((arr_7 [i_4] [i_4] [i_4]), (arr_10 [i_4])))) || ((min(((max(var_5, -1818042319))), ((var_4 ? 1849914948 : var_7)))))));
        arr_15 [i_4] [i_4] = (~-1);

        /* vectorizable */
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            var_19 = var_6;
            var_20 += (((arr_13 [i_4] [i_5 + 1]) ? var_7 : 32489));
        }
        arr_18 [i_4] = (((((~var_3) ? 10679894085447282692 : (min(34359738368, (arr_9 [20] [i_4]))))) != (((min(32470, 96))))));
    }
    var_21 = (max(var_21, 2032));
    var_22 = var_4;
    var_23 = (max(var_2, -1));
    #pragma endscop
}

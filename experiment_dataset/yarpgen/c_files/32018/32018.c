/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_7 ? var_4 : var_2);
    var_14 = (min(var_14, (((var_10 ? (40790 % var_11) : (((!(((var_12 ? 40790 : var_3)))))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = arr_0 [i_0] [i_0];
        var_16 = (((arr_0 [i_0] [14]) < (min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_17 = (max(var_17, (((((~(arr_1 [i_1 + 1])))) + (arr_2 [i_1 + 2])))));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_8 [10] [i_3] = (max((((~var_10) ^ (~308871389651158227))), (((arr_6 [i_1]) ? 40790 : (((arr_3 [3]) ? -4433911494642582458 : var_7))))));
                var_18 = -22;
            }
            arr_9 [i_1 + 2] = ((((((((arr_0 [i_1 - 1] [15]) + 9223372036854775807)) >> (((arr_6 [i_1 + 2]) - 8687))))) ? ((var_0 | (arr_0 [i_1 + 2] [19]))) : (((arr_2 [i_1 + 1]) ? (arr_6 [i_1 - 1]) : -9))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_12 [i_4] [i_4] [i_1] = max((((var_5 ? var_7 : 3626034878083510935))), (((!(((7 ? var_6 : var_8)))))));
            var_19 += var_4;
        }
        var_20 = (max(var_20, ((((((0 == 1688780334712397068) > (min((arr_10 [18] [i_1]), var_2)))) ? ((((arr_2 [i_1 - 1]) ? var_6 : 65516))) : (min(-1867720010410815856, var_9)))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_21 = var_5;

            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                var_22 = -var_10;
                arr_18 [i_6] = ((-(arr_10 [12] [i_1 - 1])));
                var_23 = ((-6265082830184272388 ? (((var_12 ? (arr_4 [i_1]) : (arr_13 [i_1 - 1] [i_1] [i_1])))) : ((56720 ? 38241 : var_3))));
            }
            var_24 += 6265082830184272394;
        }
    }
    #pragma endscop
}

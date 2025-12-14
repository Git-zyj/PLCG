/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = ((~(-9223372036854775807 - 1)));
        var_17 = ((~(-9223372036854775807 - 1)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_18 |= (max(((~(((arr_11 [i_1]) ? 1270329400 : var_13)))), var_4));
                        var_19 = (((((arr_8 [i_3]) / (arr_8 [i_1]))) >> (1 % 1308461136)));
                        var_20 = ((+(((arr_3 [i_1]) + (arr_3 [i_4])))));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_18 [i_5] = ((~(((arr_0 [i_5]) | (((max(var_11, var_4))))))));
            arr_19 [1] [1] |= (~((((var_9 ? (arr_5 [i_1]) : -9223372036854775804)) / (max(var_3, (arr_6 [i_1] [i_5]))))));
            var_21 = ((-(6391985584720723249 | -1308461123)));
        }
        arr_20 [i_1] = (max((((((arr_1 [i_1]) - (arr_17 [i_1]))) / 9223372036854775805)), var_8));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = 253;
        var_22 &= ((1 | (!9223372036854775807)));
        var_23 = ((~(((arr_0 [i_6]) ? 88 : -20176))));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_24 = ((32767 <= (arr_28 [i_7])));
        var_25 = (max(var_25, (((((max(32767, (arr_17 [i_7])))) ? ((((arr_3 [i_7]) || (arr_3 [i_7])))) : (((arr_3 [i_7]) ? (arr_16 [i_7] [i_7]) : (arr_16 [i_7] [i_7]))))))));
        var_26 = 3256881062;
    }
    var_27 = 21690;
    var_28 = (max(var_28, var_15));
    var_29 = (!(((max(var_5, 1)))));
    #pragma endscop
}

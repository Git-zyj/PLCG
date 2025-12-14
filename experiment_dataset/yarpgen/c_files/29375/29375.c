/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((max(-var_4, 40)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 *= ((max(var_15, -6925822632124273228)));
            arr_4 [i_0] [i_0] [i_1] = 225;
            arr_5 [i_1] = ((~(arr_3 [i_0] [i_1])));
        }
        arr_6 [i_0] = (((((28312 ? ((var_17 ? (arr_1 [i_0] [8]) : 6925822632124273228)) : var_12))) ? ((65535 ? (arr_0 [i_0]) : ((var_10 ? 10375 : -6925822632124273228)))) : -4294967295));
        var_22 -= (!var_16);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_23 = (((~var_15) || var_10));
        var_24 = (4294967295 < 31035);
        arr_9 [i_2] [i_2] = ((!(((var_9 << (4294967295 - 4294967276))))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = (min(0, -31039));
        var_25 = (max(var_14, var_0));
    }
    var_26 = var_0;

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_16 [i_4] = arr_15 [i_4];
        arr_17 [i_4] = ((((min(255, var_18))) ? 51874 : (arr_15 [i_4])));
        arr_18 [i_4] [i_4] = min((arr_2 [i_4] [16] [10]), (arr_0 [i_4]));
        arr_19 [i_4] [i_4] = (((216172782113783808 + 6693643730364713686) ? ((9 ? -9192662042782589826 : 16)) : 239));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        var_27 = (arr_27 [i_6] [1] [8] [i_8]);
                        arr_32 [i_6] = (min(((7613504628653151042 ? 1 : (arr_23 [i_5] [i_6 - 1] [i_7]))), ((((arr_23 [i_7] [i_7] [i_6 + 1]) != var_7)))));
                        var_28 = (max(var_28, ((((((17562876673193694527 ? (arr_31 [i_5] [i_5] [i_6 + 1] [i_6 + 1] [i_8]) : (arr_31 [i_5] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_7])))) ? (3751724880 * -22595) : ((((arr_31 [i_5] [i_6] [i_6 - 1] [i_6 + 2] [i_6]) ? (arr_31 [i_5] [i_5] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (arr_31 [i_5] [i_5] [i_6 - 1] [i_6 - 1] [6])))))))));
                    }
                }
            }
        }
        var_29 = ((((!((min(1471609501915778940, var_12))))) ? (min((16975134571793772676 || 5), ((var_12 ? var_1 : var_8)))) : (arr_14 [7])));
    }
    #pragma endscop
}

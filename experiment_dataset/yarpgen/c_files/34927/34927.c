/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_16 ? -250457821 : var_0))) || var_17)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((((~(arr_0 [i_0] [i_0]))) & (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = (min(var_2, (min(93254280, 1))));
                    arr_9 [i_1] [i_1] [i_1] = ((((min((arr_6 [i_1] [i_1] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_2] [i_0])))) ? (max(((~(arr_0 [i_0] [i_1]))), (((2280194148 ? (arr_2 [i_0] [1]) : (arr_2 [i_0] [10])))))) : (((max((arr_7 [i_0] [i_1] [i_2] [i_0]), (-2 == -9948)))))));
                }
            }
        }
        arr_10 [i_0] = ((((((arr_0 [i_0] [i_0]) ? var_10 : var_7))) ? ((1696085588 ? -969680177089212783 : -255)) : ((((var_10 && (arr_0 [i_0] [i_0])))))));
        arr_11 [i_0] = (!1);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_16 [i_3] = (!3790452202);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {
                    arr_22 [i_5] [i_5] [i_5 + 1] = (((arr_17 [i_5 + 1] [i_5 + 1] [i_5 + 1]) / (var_1 * -30320)));
                    arr_23 [i_3] [i_5] = 123;
                    arr_24 [i_5] [i_4] = arr_21 [i_5] [i_4] [13];
                    arr_25 [12] [i_5] = (arr_20 [i_5] [i_5 + 1] [i_5 + 1]);
                }
            }
        }
    }
    var_20 = var_10;
    var_21 = (var_7 ? ((max(((max(var_13, var_10))), ((8191 ? var_1 : 7))))) : (min((max(4294967282, var_5)), ((min(var_2, var_0))))));
    var_22 = (((((min(var_8, 245))) == (max(49, 504515077)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = ((((min(8312915962165155591, (arr_0 [i_0])) & (((min(var_1, var_0))))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [0] = ((((((arr_3 [i_1 - 1]) << var_12))) ? var_14 : ((((min(var_11, 1)) && ((((-27462 + 2147483647) << (var_8 - 53404)))))))));
                        var_18 = (i_0 % 2 == 0) ? (((((1 ? 260619378 : 29)) >> (((min((arr_9 [i_1 - 3] [i_1 - 3] [i_0] [i_1 + 1]), var_0)) + 248031376))))) : (((((1 ? 260619378 : 29)) >> (((((min((arr_9 [i_1 - 3] [i_1 - 3] [i_0] [i_1 + 1]), var_0)) + 248031376)) + 961490130)))));
                        var_19 = ((((max(var_6, (min((arr_4 [10] [i_1 - 1]), 1))))) ? (arr_8 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2]) : ((~(arr_0 [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_20 = ((((((var_9 ? var_6 : (arr_1 [i_0]))))) ? (~var_9) : var_1));
                        var_21 = var_3;
                        var_22 = (var_11 - var_11);
                    }
                    var_23 = ((-(((min(1, 1))))));
                }
            }
        }
        var_24 ^= ((((((!(arr_1 [i_0]))) ? (arr_12 [i_0] [4] [4] [i_0 - 2]) : ((max(var_1, (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))) != (((var_8 + ((((arr_3 [i_0 - 1]) < 1))))))));
    }
    for (int i_5 = 3; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_25 = (((((!(arr_5 [12])))) != 129757736));
        var_26 = ((-(((arr_8 [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 3]) + ((max(var_14, (arr_0 [12]))))))));
        var_27 = (arr_9 [i_5 - 3] [6] [6] [i_5]);
        arr_15 [i_5] = (((arr_3 [i_5 - 1]) | ((max((arr_6 [i_5]), (min(var_6, var_5)))))));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_28 = var_8;
        arr_19 [i_6] [i_6] = (((((arr_4 [i_6 - 1] [i_6 + 1]) + 9223372036854775807)) >> (arr_0 [14])));
        var_29 = ((1 << (arr_2 [i_6])));
    }
    var_30 = var_16;
    #pragma endscop
}

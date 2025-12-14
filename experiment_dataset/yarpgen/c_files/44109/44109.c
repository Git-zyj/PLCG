/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_18 = (min(var_18, ((((arr_5 [2] [i_1 + 1] [i_1 - 1]) ? (arr_3 [i_1 - 1] [6]) : (arr_5 [16] [i_1 + 1] [i_1 + 1]))))));
            arr_6 [0] [0] |= (((arr_0 [i_0]) & (!var_3)));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_19 = -9;
                            var_20 ^= (!var_12);
                            arr_16 [i_1] [i_3] [i_3] [i_3] [16] [i_1] [i_1] = ((-2 ? -983799058 : (arr_7 [i_1] [i_4] [i_4])));
                            var_21 = var_13;
                            arr_17 [i_0] [i_1] = (((-5318198144504979505 - 194) ? var_13 : (arr_1 [i_4] [i_3])));
                        }
                    }
                }
            }
            var_22 = (arr_12 [i_0] [i_1 - 1] [i_1 + 1] [i_1 - 1]);
            var_23 = (((arr_1 [i_0] [i_1 - 1]) ? (arr_9 [i_0] [i_1 + 1] [i_1] [i_1 - 1]) : (arr_9 [i_0] [i_1 + 1] [i_1] [i_1 + 1])));
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            var_24 = (((arr_8 [i_0] [5] [i_0] [i_5 - 1]) | ((var_8 ? var_11 : (arr_19 [i_0])))));
            arr_22 [i_0] [i_5] = ((((var_2 ? (arr_10 [i_5] [i_0] [i_5]) : var_0)) ^ ((((arr_15 [i_5]) ? (arr_7 [i_5] [i_0] [i_5]) : 1170601013)))));
        }
        var_25 = ((((min(var_9, (arr_8 [i_0] [2] [i_0] [i_0])))) ? (((!(arr_14 [i_0] [1] [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((max((arr_18 [i_0] [i_0] [i_0]), var_9)))));
    }
    for (int i_6 = 2; i_6 < 22;i_6 += 1)
    {
        arr_26 [i_6] &= (var_4 != -9);
        var_26 = var_16;

        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            arr_29 [i_7] [i_7 + 2] [i_7] = -1309280815;
            arr_30 [1] [0] [i_7 - 1] |= 17941;
        }
        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            var_27 = (arr_31 [i_6] [i_6] [i_8]);
            var_28 = ((-109 ? (var_1 || var_7) : (((var_17 || (((var_9 ? var_16 : 18014364149743616))))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_29 = var_7;
                            var_30 = (min((min(((var_15 | (arr_31 [i_8] [i_9] [i_10]))), (~65535))), var_5));
                        }
                    }
                }
            }
            arr_41 [i_8 - 1] [i_6] = (arr_23 [i_8]);
            var_31 = (max(-1885425419, 1885425434));
        }
        var_32 = 17561891568715835442;
    }
    var_33 = var_10;
    #pragma endscop
}

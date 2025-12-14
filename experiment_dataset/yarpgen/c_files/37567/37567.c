/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (min(-27420, var_2));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 = (1726202121 == 368033740);
            var_15 *= (max(63, (arr_5 [5] [i_0 + 1])));
            var_16 = ((((127 ? (arr_2 [i_0 + 1]) : (arr_0 [i_0 - 1]))) > (((!(arr_5 [i_0] [i_1]))))));
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_17 = ((((-(arr_1 [16])))));
            var_18 = (arr_5 [14] [14]);
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] &= var_8;
            arr_14 [i_3] [i_3 + 2] [i_0] = ((~((min(54255, (arr_5 [i_3 + 2] [i_0 + 1]))))));
            arr_15 [i_0] = (3926933561 ? (((((~(arr_10 [i_3])))))) : (((((var_11 ? (arr_11 [i_3]) : var_2))) ? (max(1, -128)) : (((8365 ? 0 : 3926933550))))));
        }
        var_19 *= ((((max((arr_5 [i_0] [i_0 + 1]), (!3836687079)))) ? (arr_2 [2]) : (min((((arr_0 [i_0 - 1]) ? (arr_3 [i_0 - 1]) : (arr_2 [i_0 + 1]))), (arr_3 [i_0])))));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_24 [i_6] [i_5] [i_5] [i_4] = ((1746337841 == (((arr_12 [i_4 - 2] [i_5] [i_6]) + ((-24328 ? (arr_21 [i_4] [i_4 - 2] [i_4 - 1]) : (arr_16 [i_4 - 1])))))));
                    arr_25 [i_4 - 1] [i_5] [i_5] [i_6] = ((-(((arr_2 [i_4 - 1]) & ((2548629473 ? 1746337858 : 220))))));
                    var_20 = ((-((~(max(3836687076, -1726202121))))));
                }
            }
        }

        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_29 [i_4] &= -5687;
            var_21 = ((65523 ? (min((15925 * 76), var_5)) : ((~(arr_18 [i_4] [5] [i_4])))));
            var_22 |= 49232;
        }
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            var_23 = -var_10;
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        arr_37 [i_8 + 1] [i_8] [i_10] [i_10] [i_4 - 1] [i_4 - 2] = (((((23459 ? var_11 : (arr_4 [i_8] [i_4])) % (arr_7 [i_4])))));
                        var_24 = (128 ? (min((arr_22 [i_8 + 1]), (arr_22 [i_4]))) : (arr_26 [1] [i_9 + 2] [i_8 + 1]));
                    }
                }
            }
        }
    }
    #pragma endscop
}

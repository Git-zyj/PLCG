/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~17669829342434370975);

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_18 = (((!var_7) ^ ((624732829414964456 ? (1 + 3297500760) : (var_4 > var_10)))));
        var_19 -= 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_1] [i_1] = (1 ? -69 : -1782864451);
            var_20 ^= (152 + var_3);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_21 ^= (((!746243432) || (((var_8 ? 2486619329 : var_2)))));
            var_22 += (((arr_6 [i_1] [6] [i_1]) < 16691461041558427345));
            arr_12 [i_1] [i_1] [i_3] = ((((var_4 ? var_3 : 1)) + (arr_6 [i_1] [i_1] [i_3])));
            var_23 &= ((var_16 ? var_4 : 1755283032151124261));
            arr_13 [i_1] [i_1] = (~-25736);
        }
        arr_14 [6] |= 0;
        arr_15 [i_1] [i_1] = ((1 ? (arr_11 [i_1]) : 1));

        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_24 = (((((var_1 ? (arr_6 [5] [i_1] [4]) : var_15))) ? var_13 : (var_0 > var_11)));
            arr_18 [i_1] [i_1] = var_10;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_25 |= (!var_12);
                            var_26 = ((!(((-5335106948748114548 ? 1 : var_0)))));
                            var_27 = ((var_1 ? (var_1 != 1) : var_2));
                        }
                    }
                }
            }
            arr_28 [i_1] [1] = ((var_10 ? 624732829414964456 : (arr_6 [i_4] [i_1] [i_1])));
            var_28 = (((17194 >= var_10) << (((arr_21 [6] [6]) - 73))));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            var_29 = -47;
            var_30 = (((~var_0) + var_9));
            arr_31 [i_1] = 1;
            arr_32 [i_1] = ((var_16 ? (arr_23 [i_8]) : var_6));
            var_31 = ((var_2 >= -1037622378717573177) ? var_16 : -3034888590669969560);
        }
    }
    #pragma endscop
}

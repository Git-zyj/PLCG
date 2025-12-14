/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = ((((arr_1 [0] [0]) >= (arr_3 [i_0]))));
                var_12 = ((((min((arr_2 [i_0]), -8012300916324881301))) ? (~var_2) : var_9));
                arr_4 [i_0] [i_1] = ((((var_2 | (arr_2 [1])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] |= (((9223372036854775807 && 1278799731) ? (arr_2 [i_2]) : var_9));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [i_3] [i_6] [i_6] = 1;
                                var_13 |= ((((-36 ? (var_5 % 8648729941322034782) : -8648729941322034783)) * var_6));
                            }
                        }
                    }
                    var_14 = ((-1823621125397982486 ? 1 : 1));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_15 = ((((min(-7762, var_6)))));
                                arr_25 [i_3] [i_7] [i_4] [i_3] [i_3] = var_7;
                                var_16 = (arr_19 [i_3] [i_3] [3]);
                            }
                        }
                    }
                    arr_26 [i_3] = ((3743976531986110835 >> (((min((arr_3 [i_2]), (max(var_2, -8648729941322034813)))) - 4292138642804106970))));
                }
            }
        }
        var_17 = ((((min(((99 ? var_8 : (arr_1 [i_2] [i_2]))), ((var_0 ? -465155479227797620 : (arr_1 [i_2] [6])))))) ? ((max((arr_6 [i_2]), var_6))) : var_6));
        var_18 = var_2;
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
    {
        var_19 |= 32767;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_20 = (min(var_20, ((((6338777729836363965 && 32767) ^ 8648729941322034782)))));
                    arr_35 [i_11] [i_10] [i_9] [i_9] = (arr_21 [i_9] [i_9] [11] [i_10] [5] [i_10]);
                    var_21 = (max(var_21, ((((((var_5 * (arr_9 [1] [i_11])))) ? (max(var_7, 17538282268914644078)) : ((max(1780613388125498205, 3440400526))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                {
                    arr_40 [i_9] [i_9] [8] [8] = ((-(((((((arr_30 [1] [i_12]) >= -8648729941322034816))) == -36)))));
                    arr_41 [4] [i_12] = ((var_4 <= (((~1) & 1023))));
                    var_22 = (min(var_22, var_3));
                    arr_42 [i_13] [8] [9] [i_9] = 18446744073709551590;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        var_23 = (arr_2 [i_14]);
        arr_45 [i_14] [i_14] = -5156570361502358614;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((1 > ((var_1 ? -123 : 0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = ((var_1 || ((10 < (arr_0 [i_0])))));
        var_13 &= (((arr_1 [i_0]) ? (arr_1 [i_0]) : 1));
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_14 -= (max(var_0, ((40356 ? (arr_5 [16] [16] [15]) : (arr_5 [i_1] [i_2] [i_3])))));
                    var_15 = ((+(((arr_2 [1]) ? (var_4 == 4664158222605286301) : (~1)))));
                }
            }
        }
        var_16 = (((arr_4 [i_1]) << (((max((max(var_9, (arr_3 [i_1]))), ((((arr_6 [i_1] [i_1]) ? (arr_8 [i_1] [i_1] [i_1]) : 0))))) - 18446744073709526559))));
        var_17 = ((min((((var_6 ? -12457 : var_4)), (arr_6 [i_1] [i_1])))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_18 = var_8;
        var_19 = (min(var_19, ((((((((arr_6 [11] [11]) * var_5)) > -1)) ? (((arr_5 [11] [i_4] [i_4]) ? (arr_3 [i_4]) : (arr_3 [19]))) : ((min(var_5, (((arr_6 [8] [8]) ? var_9 : (arr_8 [i_4] [i_4] [i_4])))))))))));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_20 = -var_2;
        var_21 = (((-(arr_2 [i_5]))));
        var_22 = (max((arr_2 [i_5]), ((~(min((arr_4 [i_5]), var_5))))));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_23 ^= ((64717 ? (((((max(51, (arr_20 [i_8] [i_6] [i_6] [i_6])))) && (arr_17 [i_8] [i_7] [i_6])))) : var_3));
                    var_24 = (min(var_24, ((((((var_10 ? (arr_13 [i_6]) : (13781289024025964289 * 0)))) ? (((max(-1623, var_2)))) : ((~(arr_4 [i_7]))))))));
                    var_25 = (((min(77, (!4))) || (~-var_6)));
                    var_26 = (255 ? ((-(arr_2 [i_7]))) : 116);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        var_27 *= (arr_20 [i_11] [3] [i_9] [i_6]);
                        var_28 = (min((((-(arr_12 [i_9] [i_6])))), (arr_3 [i_11])));

                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            var_29 = (max(((64717 ? (arr_4 [i_10]) : 819)), (arr_25 [16] [10] [7] [16])));
                            var_30 = (max((max((((89 == (arr_8 [i_9] [i_9] [i_11])))), var_6)), ((((arr_22 [i_6]) != (((max(98, var_8)))))))));
                            var_31 = (min(var_31, (((arr_17 [i_12] [i_11] [i_6]) ? 1915024948 : ((((((arr_16 [i_9] [i_12]) * 204)) - (arr_25 [4] [16] [16] [i_9]))))))));
                            var_32 = (((((17497 ? (arr_22 [0]) : (arr_8 [i_12] [18] [2]))) == (arr_7 [i_9] [3] [i_11] [i_12]))));
                        }
                        var_33 = 30453;
                    }
                }
            }
        }
        var_34 = 1;
        var_35 = (max(var_35, (((127 ? (((((~1) < 39562)))) : ((10 ? (arr_22 [i_6]) : (min(20, (arr_4 [14]))))))))));
    }
    #pragma endscop
}

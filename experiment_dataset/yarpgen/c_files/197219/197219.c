/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_16 = ((((var_11 >= (arr_1 [i_0])))));
        var_17 = ((var_14 / var_11) * (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_3] = (max((((arr_10 [i_1] [i_1] [i_1]) ? (arr_10 [i_1] [i_2] [i_3]) : (arr_10 [i_3] [i_2] [i_1]))), ((((arr_10 [i_3] [i_2] [0]) >= (arr_10 [i_1] [i_2] [i_3]))))));
                    arr_14 [i_2] [i_2] [i_2] = (((((max((((var_11 <= (arr_10 [i_3] [i_2] [i_1])))), (max((arr_4 [i_1]), (arr_7 [i_1] [18] [i_1]))))))) / var_0));
                    arr_15 [i_1] [i_1] [i_3] [i_2] = var_6;
                    var_18 = arr_7 [i_1] [i_1] [i_3];
                    var_19 = (!var_1);
                }
            }
        }
        arr_16 [i_1] = (arr_8 [i_1] [i_1] [i_1]);
        var_20 -= ((!((min((((13697703675417656437 == (arr_5 [7])))), ((8244 ? (arr_7 [i_1] [i_1] [i_1]) : (arr_5 [i_1]))))))));

        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_21 |= (arr_3 [i_1]);
            var_22 = 1;
            arr_19 [14] = ((((min(((var_5 ? (arr_11 [i_1]) : (arr_5 [i_4]))), var_1))) <= ((~(arr_12 [i_4] [i_4 + 1] [i_4])))));
            var_23 = ((max((min(1698191671, (arr_8 [i_1] [i_4 + 1] [i_1])), var_1))));
            var_24 = (arr_5 [i_1]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    {
                        var_25 *= -23137;
                        var_26 = var_4;
                    }
                }
            }
            var_27 = (min(var_27, ((((!(arr_5 [i_1]))) ? var_4 : (arr_21 [i_5])))));
            arr_28 [i_1] [i_1] = var_3;
        }
        /* vectorizable */
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            var_28 = ((arr_4 [i_1]) ? (arr_17 [i_1]) : (arr_32 [i_1] [i_8 - 2] [8]));
            var_29 = (min(var_29, (arr_11 [i_8 - 3])));
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            arr_37 [0] [i_9] [i_9] = (max((((-(2147483647 >> var_8)))), 11336530279175050224));
            var_30 = -16777216;
            arr_38 [i_1] [1] [1] = (((((min((arr_23 [i_1] [i_9] [i_1]), var_4))) ? ((min((-32767 - 1), 32044))) : (!401370119))));
        }
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_31 = (arr_32 [i_10] [i_10] [i_10]);
        var_32 = (max(var_32, ((((((((!(arr_17 [i_10]))) ? (max(29, (arr_6 [i_10] [i_10]))) : (arr_12 [i_10] [i_10] [i_10])))) ? ((((!-120) || ((max(var_9, (arr_7 [i_10] [i_10] [i_10]))))))) : (min((max(512278791, 1282136357)), ((-11762 ? var_9 : 16)))))))));
    }

    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        var_33 += (arr_21 [i_11]);
        var_34 = ((!(((var_3 ? (((arr_21 [i_11]) >> (((arr_44 [i_11]) + 136)))) : (((arr_18 [i_11] [i_11]) ? var_1 : var_15)))))));
    }
    #pragma endscop
}

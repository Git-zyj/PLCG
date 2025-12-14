/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_8 >= var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_20 -= ((((arr_4 [i_3 + 1] [i_3 - 1]) && (arr_4 [i_3 + 1] [i_3 - 2]))));
                        var_21 += ((2305843009213431808 >= (arr_1 [i_0] [i_0])));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_22 = ((((((var_10 || (arr_7 [i_0] [i_1] [i_1]))) >> ((((var_9 ? 4294967295 : 2305843009213431789)) - 4294967295))))));
                        var_23 = (min(((min(var_7, (arr_9 [i_4] [i_2] [i_1] [i_0])))), 2305843009213431808));
                        var_24 = (min(6235253025167861559, 51));
                    }
                    var_25 = ((((1012246002 ? (-2147483647 - 1) : -2305843009213431790)) >= 6235253025167861559));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_26 = ((var_10 ? (((((((arr_11 [i_5] [i_5] [i_2] [i_1] [i_5]) ? (arr_12 [i_5]) : (arr_14 [i_0] [i_1] [i_2] [i_5])))) | (arr_9 [i_0] [i_1] [i_2] [i_5])))) : (arr_1 [i_0] [i_0])));
                        var_27 = ((((112 ? (arr_2 [i_0] [18] [1]) : 6235253025167861558))) ? ((((-12 ? 522240 : 112)) / 233)) : (arr_2 [i_0] [i_1] [i_2]));
                        var_28 = ((min((1 <= 2305843009213431790), 522250)));
                        arr_16 [i_5] [i_1] [i_1] [i_1] [i_1] [i_1] = arr_11 [i_0] [i_1] [i_2] [i_2] [i_5];
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_25 [i_6] [i_6] [i_8] [i_6] = (min(816605614835149616, -29902632965319567));
                    var_29 = (min(var_29, (((min(var_1, (arr_12 [i_6])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    var_30 &= ((((((arr_7 [i_6] [1] [i_10]) ? (arr_7 [i_6] [i_6] [i_6]) : (arr_7 [i_6] [i_9] [i_10])))) >= (min((arr_6 [i_6] [i_6] [i_6]), (~1215262176)))));
                    var_31 = (min((((((arr_2 [i_10] [i_9] [i_6]) ? (arr_18 [i_6]) : (-9223372036854775807 - 1))))), ((var_12 ? (arr_8 [i_10] [i_10] [i_9] [i_6]) : (arr_9 [i_6] [i_9] [i_10] [i_10])))));
                }
            }
        }
        arr_30 [i_6] = ((((var_1 | -1241262382) ? (min(2147483647, (arr_29 [i_6] [i_6] [i_6]))) : ((5890397422812387161 ? var_13 : var_4)))));
    }
    #pragma endscop
}

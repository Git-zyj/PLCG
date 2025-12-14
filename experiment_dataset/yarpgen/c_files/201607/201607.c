/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = arr_0 [i_0];
        arr_2 [i_0] = ((((min(6775751058470551601, ((-113 ? (arr_1 [i_0]) : (arr_0 [i_0])))))) ? 112 : var_13));
        var_15 += ((((((!(arr_1 [i_0]))))) ? (arr_0 [i_0]) : ((((min((arr_1 [i_0]), var_1))) ? var_11 : (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 += ((((((min(var_2, (arr_3 [i_2 + 1] [i_1] [i_0])))) ^ (arr_7 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2]))) + (((arr_4 [i_0] [i_2 + 2]) ? (arr_4 [i_0] [i_2 + 2]) : (arr_4 [i_0] [i_2 + 2])))));
                    var_17 = ((!(arr_4 [i_2 + 2] [i_2 + 2])));
                }
            }
        }
        var_18 = (min(var_18, (arr_1 [i_0])));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            arr_14 [i_4] = (((arr_10 [i_3]) && ((((15834263142065432758 || 110) ? ((19200 ? 19200 : -1)) : (max((arr_10 [i_3]), (arr_9 [i_4] [i_3]))))))));
            var_19 = ((~((-var_0 ^ ((var_8 ? (arr_12 [i_4] [i_4 - 2]) : 6472333568950464355))))));
            var_20 = (-(((arr_13 [i_4] [i_4 + 1]) ? (min(100663296, 145)) : (arr_9 [i_4 - 2] [i_4 - 2]))));
        }
        var_21 = (max(var_21, (((!(arr_12 [2] [2]))))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_22 ^= var_3;
                        var_23 ^= (((((((((89 >= (arr_19 [i_5] [i_6] [i_7])))) < var_9)))) & ((((((arr_13 [i_3] [i_3]) ? (arr_15 [i_5 + 1]) : var_7))) ? (arr_12 [4] [i_5 - 2]) : (min(var_10, 4249815278))))));
                        var_24 = (((((+(((arr_20 [i_3] [i_5] [i_6] [i_7] [i_7] [i_7]) ? var_12 : (arr_9 [i_6 - 1] [i_5])))))) ? -var_5 : (((0 ? 32767 : 0)))));
                        var_25 = (min(4294967295, 1));
                    }
                }
            }
        }
    }
    var_26 = (max(var_26, ((((~54699) ^ (min((~var_5), var_1)))))));
    var_27 = ((-((112 ? var_11 : ((6472333568950464355 ? 9782715046301437802 : (-32767 - 1)))))));
    #pragma endscop
}

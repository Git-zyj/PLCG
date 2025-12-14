/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!(((-var_8 - (~-15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_13 = (min(var_13, ((((((arr_2 [i_0]) >> (((arr_1 [i_0]) - 53056))))) ? ((+((-15 ? (arr_9 [i_0] [i_1] [i_2] [i_1]) : -9)))) : ((((!(arr_9 [i_3] [i_2] [i_1] [i_0])))))))));
                        var_14 = ((((min((-19 || -31), ((65535 ? var_5 : (arr_5 [i_2] [i_1] [i_1])))))) ? (((((arr_8 [i_0] [i_1] [i_2] [i_3]) ? (arr_9 [i_0] [i_0] [i_2] [2]) : (arr_10 [i_0] [13] [13] [i_3] [i_1]))) + (((arr_8 [i_0] [i_1] [i_2] [i_3]) - var_11)))) : ((((!0) / 2745743717)))));
                    }

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_15 = (min(var_15, -6517818519586083759));
                        arr_15 [i_0] [i_1] [i_2] [i_4] [i_4] = ((((min((min(233, (arr_9 [i_0] [i_1] [i_0] [i_4]))), 263634737))) ? (((((-(arr_0 [i_0] [i_1])))))) : ((((((arr_14 [i_0] [i_1] [0] [i_2] [i_4]) ? var_10 : var_5))) ? (min(var_10, 2745743717)) : (((min((arr_5 [i_2] [i_2] [i_4]), 65535))))))));
                    }
                    arr_16 [i_0] [i_2] [0] = 18446744073709551599;
                    var_16 = (((1 * 0) ? (arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]) : (arr_13 [i_0] [i_1] [i_2] [i_0] [i_2] [8])));
                    arr_17 [i_2] [i_1] [i_1] = (min(((((20114 ? 243 : 4467570830351532032)) ^ ((((arr_11 [i_0] [i_0] [i_2] [i_2]) | (arr_7 [4] [i_1] [i_1])))))), (arr_13 [i_0] [i_0] [12] [i_0] [i_0] [i_0])));
                }
                arr_18 [i_0] = (((min((arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0]), (((2306737693 ? (arr_14 [i_0] [i_0] [i_0] [i_1] [i_0]) : 1))))) != ((((!(arr_6 [i_0] [i_1] [i_1] [i_0])))))));
            }
        }
    }
    #pragma endscop
}

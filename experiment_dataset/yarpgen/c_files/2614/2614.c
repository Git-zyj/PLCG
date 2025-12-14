/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = ((((var_8 ? (((-(arr_4 [i_0] [5] [i_2])))) : (max((arr_2 [i_0 + 1] [i_2]), (arr_4 [i_0] [i_1] [i_2]))))) <= ((((max(var_1, var_5)) | (((min(var_8, var_8)))))))));
                    arr_8 [i_0] [i_1] [10] = (var_4 + var_2);

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_13 = ((((((min(var_5, (arr_4 [i_0] [i_1] [i_2])))) ? var_9 : (((((arr_7 [i_0 + 1] [i_1] [i_2] [i_3]) && var_3)))))) & ((min((arr_5 [i_3 - 1]), var_3)))));
                        var_14 = (((((~(arr_2 [i_0] [i_1])))) ? (arr_7 [i_0] [i_1] [i_2] [i_3 + 2]) : var_0));
                        var_15 = var_6;

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            var_16 = (max((arr_6 [i_1] [i_4]), ((((max((arr_10 [i_3] [i_3]), (arr_7 [i_1] [i_3] [i_3] [4]))) | (var_11 && var_5))))));
                            var_17 = (((arr_10 [i_3] [i_3 + 2]) ? ((var_4 ? (max(3008172371179881005, 3008172371179881005)) : (((var_2 + (arr_9 [i_0] [i_1])))))) : (((min((((var_3 >= (arr_14 [i_0 + 1] [i_0 + 1] [i_4])))), (max((arr_3 [i_0 - 1] [i_0 - 1]), (arr_1 [14])))))))));
                        }
                        for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_18 = (((((((arr_12 [i_0]) ? var_2 : var_11)) <= var_5)) ? (max(var_7, (min(var_2, (arr_9 [i_1] [i_0]))))) : (arr_13 [i_0] [i_1] [i_2] [i_5 + 1])));
                            var_19 = (((arr_5 [i_0 - 1]) ? ((((((((arr_16 [i_5 - 1] [i_2] [i_1]) ? var_1 : var_5))) && ((min((arr_5 [i_0]), var_3))))))) : (((((arr_9 [i_0] [i_0]) != (arr_12 [i_0 - 1]))) ? ((3008172371179881024 ? 15438571702529670592 : -12680)) : (arr_9 [i_3 + 2] [i_0 - 1])))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_20 = (arr_4 [i_0] [i_1] [i_2]);
                            var_21 *= (((((arr_12 [i_3]) ? var_11 : (arr_16 [i_0] [i_0] [i_0 - 1])))) && (var_2 != var_8));
                        }
                    }
                    for (int i_7 = 4; i_7 < 14;i_7 += 1)
                    {
                        arr_21 [i_0] [14] [i_2] [i_7 - 1] = (min((arr_11 [i_0 - 1] [9] [7] [i_7] [i_0 - 1] [i_7 + 2]), ((max((arr_17 [i_0] [i_0 - 1] [i_2] [i_0] [i_7 - 1] [i_7] [i_1]), ((((arr_14 [i_0 - 1] [i_1] [i_2]) && (arr_18 [i_0] [i_0] [8] [i_0] [i_0])))))))));
                        var_22 = (min(((((arr_18 [i_0] [i_0] [i_0] [i_0] [6]) | (arr_5 [i_0])))), ((((arr_4 [i_0] [i_1] [i_7]) != (((arr_19 [3] [3]) ? var_1 : var_10)))))));
                    }
                    var_23 *= (min(((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])))), ((((max((arr_11 [i_2] [1] [i_0] [i_0] [i_0] [i_0]), (arr_15 [i_0] [6])))) ? ((((arr_9 [i_0] [i_1]) && var_2))) : (arr_13 [i_0 + 1] [i_2] [14] [6])))));
                    var_24 = ((((arr_10 [i_1] [i_0 + 1]) >= (arr_5 [i_0 - 1]))));
                }
            }
        }
    }
    var_25 = var_7;
    var_26 = ((((((min(15438571702529670622, 1))) ? var_6 : (((var_8 ? var_2 : var_7))))) != var_3));
    #pragma endscop
}

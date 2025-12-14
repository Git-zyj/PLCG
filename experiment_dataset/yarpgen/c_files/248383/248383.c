/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((max((max(var_6, 14520)), (min(var_6, 552831821))))), ((((max(-1043470307, 34502))) ? ((1 ? -5710718138218251124 : 0)) : -8926846789402825971))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_2 - 2] = (((-(max(var_3, var_10)))));
                    var_14 = var_10;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] [12] = (((((~(arr_2 [i_1 + 1])))) ? -5301609302774776954 : (min(var_11, -2495919770266869633))));
                        var_15 = (max(((65535 ? (arr_3 [i_0] [i_2 - 1]) : ((var_0 ? 16384 : (arr_6 [i_3] [i_2 - 1] [i_0] [i_0]))))), var_3));
                        var_16 = ((-(((arr_4 [i_2 - 1]) ? -var_8 : var_11))));
                    }
                    var_17 = (min(var_17, (min((((((3483433531 ? var_6 : (arr_7 [i_2] [1] [i_0] [i_0])))) ? (((arr_10 [i_0] [8] [8] [i_1] [i_0]) ? (arr_5 [i_0] [i_1] [i_2]) : -5710718138218251124)) : (arr_4 [i_0]))), ((((var_11 ? var_7 : var_7))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_5] = ((-2495919770266869636 ? (((~((max(var_7, var_11)))))) : (max((((!(arr_16 [7])))), (min(131064, -7533679873037257795))))));
                var_18 = (max(var_18, var_9));
                var_19 = 18062;
            }
        }
    }
    var_20 ^= ((~((-((min(var_4, var_7)))))));
    #pragma endscop
}

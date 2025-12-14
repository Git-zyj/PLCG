/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        var_20 = (max(var_20, (((((~((min(1, (arr_0 [i_0])))))) & (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = (min(var_21, ((max((arr_5 [i_1] [i_1]), ((((max(32, -107))) >> (((!(arr_5 [i_1] [i_1])))))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_22 = ((((((arr_15 [i_3] [i_2] [i_3] [i_4 - 2] [1]) / 17412))) * (((min((arr_0 [i_4]), (arr_10 [i_1]))) << (var_16 - 3532265516)))));
                                var_23 = (((arr_1 [i_1] [i_4 - 1]) ^ (((arr_1 [i_1] [i_4 - 1]) ? (arr_1 [i_1] [i_4 - 3]) : (arr_1 [i_3] [i_4 + 1])))));
                            }
                        }
                    }
                    var_24 = (max(var_24, (((-127 > (min((arr_12 [i_1] [i_1] [i_1] [i_3]), ((1 ? 17412 : -17413)))))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_25 = (min(var_25, (((((max((!17412), (arr_16 [i_8] [i_8])))) - ((-(((-48 + 2147483647) >> (17412 - 17391))))))))));
                        var_26 = (max((((-17413 ? -17424 : ((85 ? (arr_3 [i_1]) : var_3))))), (((arr_22 [i_6]) / ((17424 ? var_9 : (arr_8 [i_1] [i_6] [i_7] [4])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

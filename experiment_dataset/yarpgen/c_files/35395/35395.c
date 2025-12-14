/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = ((((!(arr_6 [i_0] [i_1] [i_1] [i_2]))) ? ((var_4 ? (arr_6 [i_0] [i_0] [i_2] [i_2]) : -64)) : (arr_6 [i_0] [i_1] [i_0] [i_2])));
                    var_13 = ((~((max(var_8, (min(var_3, var_8)))))));
                    var_14 = (arr_1 [i_0]);
                    var_15 = 51;
                }
            }
        }
    }
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_17 = (!var_9);
                arr_12 [i_4] [9] [i_4] = -49;

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_15 [i_4] [i_5] = (max((var_3 < var_10), ((var_3 ? ((var_0 % (arr_7 [i_4] [i_5]))) : (min((arr_13 [i_3] [i_4] [i_3] [i_3]), -31))))));
                    var_18 = -var_8;
                    var_19 = (((-(arr_10 [i_3]))));
                    var_20 = (max(var_20, (min((((-((-52 ? -369530352 : 1664304943))))), ((75 ? (var_11 < 1121501860331520) : (arr_14 [i_3] [i_4])))))));
                    var_21 = (max(var_21, (~9050830687070675020)));
                }
                var_22 |= (arr_7 [i_3] [i_4]);
            }
        }
    }
    #pragma endscop
}

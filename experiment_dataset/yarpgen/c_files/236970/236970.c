/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(((var_4 >> (var_4 - 32))))));
    var_11 = var_1;
    var_12 = ((-(max((min(-8133298750820584719, var_8)), var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = (min((((var_6 ? ((var_1 ? var_5 : -1)) : (((arr_10 [i_0] [i_1]) ? (arr_11 [1] [i_4] [i_2] [i_0] [i_4]) : (arr_14 [i_0] [i_1] [i_2] [i_2] [0] [i_4])))))), (var_2 & var_1)));
                                arr_16 [i_4] [i_1] = (!var_5);
                            }
                        }
                    }
                    var_13 = ((((!((((arr_13 [i_0] [i_0] [i_0] [i_1] [i_1]) ? (arr_4 [3] [i_1] [i_2]) : var_5)))))) << (((((arr_1 [i_2] [i_1]) ? var_6 : var_5)) - 3225593694013225201)));
                    var_14 &= (max(var_4, (((((17006062423236953149 ? 31566 : var_4))) ? (arr_1 [i_2] [i_1]) : (arr_11 [i_2] [i_0] [i_2] [i_2] [i_0])))));
                    arr_17 [i_2] [i_1] [i_1] [i_2] = ((+(((arr_11 [i_2] [i_1] [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_1] [i_1] [i_1] [i_2]) : -18962))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_15 += ((((var_8 ^ var_4) ? (((var_3 ? 8544667458893453514 : (arr_18 [i_6] [i_5] [i_2] [i_1] [i_0])))) : var_8)));
                                var_16 = (min((((var_7 <= (max(8544667458893453514, 31566))))), var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_10 &= (min(((~(min(var_4, var_0)))), ((((arr_0 [i_1 - 1]) && (arr_0 [i_1 - 2]))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_11 += (min((min((arr_5 [i_0] [i_1 - 1] [i_2] [i_2]), var_6)), (((arr_6 [i_1] [i_1 - 2]) ? -654948657 : var_4))));
                    arr_7 [i_0] = ((((((max((arr_1 [i_0] [i_2]), (arr_1 [i_0] [i_1])))) ? (arr_0 [i_2]) : (((arr_3 [i_1 - 1] [i_0]) ? var_1 : (arr_4 [i_1 + 2]))))) + (arr_6 [i_0] [i_1])));
                    var_12 ^= ((~((max(var_6, var_5)))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_13 = ((-127 - 1) % -654948657);
                    var_14 = ((var_4 & (((var_4 ? -654948657 : 252)))));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_15 [i_5] [15] [i_4] [i_1] [i_0] = ((((var_7 & ((max(var_1, (arr_3 [i_1] [i_5])))))) | (~-117)));
                            var_15 += (min(8, ((min((((arr_14 [i_0] [i_5] [1] [i_0] [i_5]) ? var_1 : (arr_10 [i_0] [i_0] [i_0] [i_0] [7] [i_0]))), (arr_4 [i_1 + 1]))))));
                            arr_16 [i_3] [i_4] [14] [i_1] [i_3] &= (max((((!var_0) ? (((max(var_0, var_2)))) : (((arr_6 [i_3] [i_3]) ? var_7 : var_6)))), (((max(var_5, (arr_2 [i_3])))))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_20 [i_0] [i_4] [i_6] [i_4] [i_6] = (((min((arr_0 [i_1 - 2]), var_3))) * var_3);
                            var_16 = (((var_1 ^ var_4) % (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])));
                        }
                        arr_21 [i_3] [i_3] [5] [i_4] [i_4] = (((var_8 ? (arr_13 [i_4] [i_1 + 1]) : (arr_13 [i_4] [i_1 - 2]))));
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_24 [i_7] [7] = (((((-117 ? ((-(arr_22 [i_7]))) : ((var_1 - (arr_13 [i_7] [i_7])))))) ? ((((var_9 ? var_0 : var_1)) | var_3)) : var_1));
        arr_25 [i_7] = (~(!-13));
    }
    #pragma endscop
}

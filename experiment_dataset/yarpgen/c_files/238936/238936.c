/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_10 < var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_8 [i_1]) << (-43 + 57)))) == ((((var_7 != (((arr_3 [i_0] [i_0] [i_0]) ? 7764 : 120))))))));
                            arr_13 [i_3] [i_1] [i_1] [i_0] &= (((((arr_2 [i_1 + 1]) + var_6)) > (((arr_2 [i_1 + 1]) / (arr_2 [i_1 + 1])))));
                            arr_14 [1] [2] [2] [i_3] = (max(((((max(var_9, var_0))) ? ((max((arr_6 [i_1] [i_2] [i_3]), (arr_1 [i_0])))) : (((!(arr_8 [i_0])))))), ((((max(var_6, var_10)) < var_11)))));
                            arr_15 [i_3] [i_3] = (((arr_1 [i_3]) ? (((~-64) ? ((~(arr_1 [1]))) : ((max((-127 - 1), var_1))))) : var_9));
                            var_13 = (((arr_2 [i_0]) ? ((var_5 | (arr_3 [i_1] [i_1] [i_1 + 1]))) : (((-58 ^ (((arr_1 [i_1]) ^ var_7)))))));
                        }
                    }
                }
                arr_16 [i_1] = (max((max((arr_1 [i_1 - 1]), 1842720342)), (arr_1 [i_1 + 1])));
                var_14 *= ((-122 == ((((arr_11 [i_1 - 1] [1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? var_11 : (arr_11 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
            }
        }
    }
    var_15 = min((min((min(var_3, var_1)), -64)), (((3482 < ((var_9 ? var_1 : var_4))))));
    #pragma endscop
}

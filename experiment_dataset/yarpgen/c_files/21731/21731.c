/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 += var_11;
                    arr_9 [1] = (((((((~(arr_1 [i_2])))) == ((var_4 ? (arr_3 [i_1] [i_2]) : (arr_7 [i_0 + 2] [i_0 + 2] [i_2]))))) ? (min((arr_0 [i_0 + 2]), (arr_1 [i_0 + 2]))) : 66));
                    arr_10 [i_0 - 1] |= (((1006632960 ? ((max((arr_0 [i_2]), var_1))) : ((min(var_7, (arr_0 [i_1])))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_13 [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((!(((~63) || (32767 >= var_11)))));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [16] [13] = (-(arr_4 [i_3] [19] [19]));
                        var_15 = (min(var_15, ((((((((arr_6 [i_3]) + 31))) ? var_12 : (arr_4 [i_0 - 1] [11] [11])))))));
                    }
                }
            }
        }
    }
    var_16 ^= ((~(((var_9 ? var_6 : var_4)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(var_11, var_1))) ? var_7 : (var_4 / var_4))));
    var_14 = (min((max(-702968425, 65516)), ((1708 ? var_2 : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((var_3 <= var_10) ? (max(var_7, var_10)) : (((1 ? ((var_8 ? var_1 : 197)) : (arr_2 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = ((((((arr_0 [i_0] [i_2]) | (arr_0 [i_0] [i_3])))) ? -var_7 : ((((arr_0 [i_0] [i_1]) << (arr_0 [i_0] [i_1]))))));
                            arr_12 [1] [1] [i_2] [i_3] &= (((arr_11 [i_3]) >= (((-var_9 + 9223372036854775807) << ((((var_4 / (arr_2 [i_1] [i_3]))) - 189))))));

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_16 = (max(var_16, ((0 | ((-var_12 ? -1 : var_6))))));
                                var_17 = ((((max((arr_3 [i_0] [i_2]), (arr_3 [i_1] [i_1])))) ? var_5 : 16383));
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                var_18 = -30;
                                arr_17 [i_0] [i_0] [i_2] [14] [i_5] = (min((((((max(46, 252)))) & (arr_4 [i_0] [i_1] [i_0]))), (arr_3 [i_0] [i_0])));
                            }
                            var_19 = (+-3709541776);
                        }
                    }
                }
                var_20 ^= ((~((((var_5 - (arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [2])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 4; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                var_21 = 65535;
                var_22 = (max(var_22, (((65535 <= (min(var_9, var_4)))))));
                arr_22 [i_7] = ((((~(((arr_7 [i_6] [12]) ? (arr_9 [i_6] [i_6 + 2] [i_6] [i_6 - 3] [i_7]) : (arr_4 [i_6] [i_7] [12]))))) <= -17));
            }
        }
    }
    #pragma endscop
}

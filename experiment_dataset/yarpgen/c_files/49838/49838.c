/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((min(var_12, var_8))) ? (max(var_13, var_8)) : (max(var_12, var_2)))), (min((min(var_4, var_13)), (((var_14 ? var_7 : 112)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_19 = (((((8388592 ? var_3 : 5346))) ? ((var_10 ? (arr_7 [i_0] [i_1]) : (arr_13 [i_0 - 4] [i_1] [i_2] [i_0 - 4] [i_4]))) : (((arr_11 [i_1] [i_1] [i_2] [0]) ? var_3 : (-127 - 1)))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [3] [i_3] [i_4] = ((-1838246890818520221 ? 1 : 0));
                            arr_16 [i_4] [i_1] [i_0] [i_1] [i_0] = (((((var_3 ? -17389 : 1))) ? ((5346 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0]) : var_5)) : ((1 ? (arr_4 [i_0 - 2] [7]) : -34))));
                        }
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_20 += (((((var_15 ? var_8 : (arr_0 [i_0] [i_0])))) ? (((244 ? 27732 : 647551774))) : ((var_3 ? (arr_4 [i_3] [i_3]) : (arr_1 [i_0] [i_0])))));
                            arr_20 [i_1] = (((((var_1 ? -32762 : (arr_2 [i_2])))) ? (((arr_13 [11] [i_1] [i_2] [i_1] [i_0]) ? 0 : (arr_17 [i_0] [i_1] [i_2] [i_0]))) : ((var_10 ? 10942 : -57))));
                        }
                        arr_21 [i_0] [i_1] [i_1] [i_0] = (((-32767 - 1) ? 33 : 6910209486622472210));
                    }
                    var_21 = (min((max((((arr_6 [i_1] [i_1] [i_2]) ? (arr_2 [i_0]) : var_2)), ((max(1, (arr_4 [i_0] [i_2])))))), ((((min((arr_6 [i_1] [i_1] [i_2]), (arr_12 [i_2])))) ? (min(1, 3247680296559033297)) : (max(var_4, var_3))))));
                }
            }
        }
    }
    #pragma endscop
}

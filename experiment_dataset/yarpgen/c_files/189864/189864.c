/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = (min((var_9 | var_5), ((-var_0 ? (~2930568381) : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((-103 ? 2930568381 : 22728)) - ((((arr_9 [i_0] [i_0] [i_2] [i_3] [i_4]) ? (arr_9 [i_4] [i_0] [i_2] [i_0] [0]) : (arr_9 [i_0] [i_0] [i_2] [10] [i_4]))))))));
                                var_14 = 2930568388;
                                arr_14 [i_3] [i_0] [i_0] [i_2] [i_1] [i_0] [i_3] = ((((!(arr_4 [i_0] [i_0]))) ? var_6 : (min(2930568388, 15))));
                                arr_15 [i_3] [i_1] [i_3] [5] [i_4] = (((min(-1836804376244461676, 2930568388)) | ((((((-20 + (arr_8 [i_0] [i_1] [i_0])))) ? var_2 : ((((arr_7 [i_1] [i_1] [3]) >= 7080559))))))));
                                var_15 = (max(var_15, ((((arr_3 [4] [i_1] [7]) % ((((((1 ? 92 : var_2))) ? 65535 : (arr_4 [i_0] [i_4])))))))));
                            }
                        }
                    }
                }
                var_16 ^= ((!-1) <= (min(55950, ((1364398899 ? (arr_4 [i_1] [9]) : (arr_0 [i_1]))))));
            }
        }
    }
    var_17 = (!var_4);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 *= (((max(((((arr_4 [i_0] [i_1] [i_1]) * (arr_1 [1])))), (1214869130819132122 - 7369880753045076898)))) ? ((((max(26, -2))) ? ((((arr_2 [i_0]) < var_4))) : (((18446744073709551615 > (arr_4 [i_0] [7] [i_0])))))) : ((((((var_5 ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0])))) <= ((7 ? var_14 : var_14))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_17 -= (min((((255 * -8) ? (((0 ? 810 : -85))) : ((127 ? (arr_5 [i_0] [i_0] [i_1] [i_0]) : var_12)))), ((max((var_4 / var_5), ((236 ? 1 : 1955014185)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = ((((max(((((arr_13 [i_0] [i_1] [7] [i_3] [i_4]) ? (arr_2 [i_4]) : var_10))), (min(6960063539302027029, var_12))))) ? (min(((((arr_11 [2] [2] [i_2] [i_2] [i_3] [i_4]) ? (arr_4 [i_1] [i_1] [i_2]) : (arr_1 [i_0])))), (min(6809, -1)))) : ((max((((var_11 ? 3435 : var_4))), ((var_14 ? (arr_11 [i_0] [1] [1] [i_0] [i_0] [i_0]) : (arr_7 [i_2] [i_3] [i_3]))))))));
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_3] = ((((max((((15607407548966803912 ? var_6 : 253))), (max((arr_13 [i_0] [i_2] [i_2] [i_0] [i_4]), 0))))) ? (((((35417 ? 97394899 : 1))) ? (max((arr_1 [12]), var_14)) : ((1 ? 31285 : var_14)))) : ((((((-9033030917433030379 ? var_15 : (arr_9 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4])))) ? ((min(var_2, 1))) : (374913197 - var_13))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((((min(var_10, var_12))) ? ((max(var_3, -15))) : ((8732175879665477221 ? 892633559 : 0))))) ? (((((var_15 ? var_9 : var_7))) ? (((var_2 ? var_10 : var_15))) : (max(var_2, 16143995334036992969)))) : (((((max(var_6, 0))) ? (max(3773305830, var_1)) : ((var_3 ? var_8 : var_11))))));
    var_20 *= (((((((-2111259517 ? var_2 : var_4))) ? (min(var_4, var_14)) : (((min(117, var_3))))))) - (max((max(var_7, var_0)), (((var_11 ? var_5 : var_8))))));
    #pragma endscop
}

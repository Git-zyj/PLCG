/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((1 ? 4294967295 : 1)) ? ((4294967295 ? var_7 : 6)) : (((1 ? 370375436 : 4294967295)))))));
    var_15 = ((((((((0 ? var_8 : var_6))) ? (((var_11 ? 1 : 0))) : (4294967294 | 1513483425)))) || ((max(((42 ? -2842810422403480622 : var_11)), -1)))));
    var_16 *= ((((max(1, (4063232 | 13461)))) ? ((((max(42, 1))))) : ((1 ? (((44562 ? 1 : 2768585206))) : 3827172124490590376))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = min((max(var_9, 1147943728)), ((((4018520046 ? var_12 : var_12)))));
                                arr_13 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] = ((~(((!(((11895612923607199861 ? var_9 : var_6))))))));
                            }
                        }
                    }
                }
                var_18 *= (((~((-25 ? 1 : 4)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_19 = (max(var_19, (-9223372036854775807 - 1)));
                            arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((1291470484662177319 ? (0 & 1) : -42));
                            arr_19 [i_0] [i_6] [i_5] [i_1] = max(var_7, -10);
                            arr_20 [i_6] [i_6] [i_1] [i_1] [i_0] [i_0] = ((6774748572785664284 ? (((((max(var_4, 5239594621409534134))) || (0 * 123)))) : var_8));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

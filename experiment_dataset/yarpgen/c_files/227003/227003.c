/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_2 ^ (((var_11 + 2147483647) << (var_4 - 3946940905)))))) && -var_2));
    var_13 -= var_6;
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (7057804824205528060 + 1)));
                                var_16 = (min(var_16, ((min(197, ((254 ? (((arr_13 [i_0] [i_1] [i_1] [i_1] [i_4]) - 255)) : (1 >= 1))))))));
                            }
                        }
                    }
                }
                var_17 = ((((min(var_1, 144))) << ((((((var_0 ? var_8 : 2565785378)) * (arr_9 [i_0]))) - 163))));
                var_18 = arr_2 [i_1] [i_1];
                arr_14 [i_1] [i_1] [1] = (18446744073709551615 && 1);
                arr_15 [i_1] [i_1] = ((!(((arr_13 [i_0] [i_0] [i_0] [i_0] [i_1]) <= 207))));
            }
        }
    }
    var_19 = (max((((23104 < 4625473844984171098) ? ((196 ? -138527626 : var_11)) : ((var_5 >> (241 - 214))))), (((((var_3 ? var_3 : var_8))) ? ((9223372036854775797 ? var_5 : var_8)) : 1))));
    #pragma endscop
}

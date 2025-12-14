/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 += (arr_1 [i_0]);
                                var_13 = (((((var_9 ? (((min(var_1, var_5)))) : ((var_10 ? 2199023255551 : var_9))))) ? (max(var_2, (((var_10 ? 0 : var_10))))) : (((var_5 ? var_7 : var_2)))));
                                var_14 += (max(var_3, ((min(((var_1 ? var_0 : 1)), ((var_7 ? 24890 : var_5)))))));
                            }
                        }
                    }
                }
                var_15 += (arr_4 [i_0] [i_1]);
                var_16 = 0;
                var_17 = (max(var_17, (((((((((24890 ? 18446744073709551615 : 24890))) ? (arr_8 [i_0]) : (!1411186156241373370)))) ? ((-var_6 ? ((1 ? 2199023255551 : 80)) : (((var_9 ? var_10 : var_10))))) : (max(var_7, 0)))))));
                arr_13 [i_0] [i_1] = var_0;
            }
        }
    }
    var_18 = (((((var_8 ? ((15195 ? var_7 : 2695035653)) : (!var_3)))) ? var_5 : var_10));
    #pragma endscop
}

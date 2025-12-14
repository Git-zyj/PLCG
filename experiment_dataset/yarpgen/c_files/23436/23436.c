/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((-((var_11 ? var_8 : var_1))))) ? (((!(1 != 252)))) : (528482304 == var_1));
    var_18 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, -528482324));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = ((((var_3 ? ((127 ? 252 : var_15)) : ((max(var_1, 127)))))) ? var_1 : ((~(min(var_13, 1668521136)))));
                                var_21 = (max(var_21, (528482296 > 4294967295)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((-1034417300 + 2147483647) >> 1))), 13));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = 1;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_12 ^= max(2019223194, -1788170887);
                    var_13 = var_9;
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_14 = ((((min(-1729354446, (arr_10 [i_4])))) > (arr_8 [i_0] [i_1] [i_1])));
                            var_15 = (min(var_15, var_8));
                        }
                    }
                }
            }
        }
    }
    var_16 = (min((((var_1 <= (min(var_8, var_1))))), (max(var_8, (1 >= var_6)))));
    var_17 = (max(((((((var_0 ? 1 : 1))) ? var_0 : var_1))), var_1));
    #pragma endscop
}

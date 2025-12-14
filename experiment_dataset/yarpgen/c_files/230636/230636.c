/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = ((((!(arr_3 [i_1] [i_0]))) ? (arr_2 [i_0]) : (arr_2 [i_0])));
                var_14 = -9223372036854775789;
                var_15 = (((((min((arr_2 [i_0]), 5411)))) + (max((arr_2 [i_1]), (arr_3 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_16 = ((max((arr_4 [i_3 + 2] [i_2 + 4] [i_0]), (arr_4 [i_0] [i_0] [i_3 + 2]))));
                            var_17 = (((max((arr_8 [i_2 + 3] [i_2 + 2] [i_3 + 2]), var_5))) ? (arr_3 [i_3 + 2] [i_3 + 1]) : (!var_6));
                            var_18 = ((!(((arr_6 [i_2 - 2] [i_2 - 2]) && (arr_6 [i_2 - 2] [i_2 - 2])))));
                        }
                    }
                }
            }
        }
    }
    var_19 = ((var_9 + ((-(min(var_0, var_0))))));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                var_20 = (max(var_20, (((-(-3850576564824985026 != var_2))))));
                var_21 = var_12;
            }
        }
    }
    #pragma endscop
}

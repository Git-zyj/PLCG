/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (var_7 ? ((18446744073709551615 ? 1 : 24)) : (-1485520592 != 1485520603));
                var_17 |= (!var_4);
                var_18 = -1485520605;
                var_19 = ((-((~(min(var_8, var_9))))));
            }
        }
    }
    var_20 = 76;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_12 [i_2] = (max((var_6 | 0), (((var_0 ? 60 : 3943770586)))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_20 [i_2] [i_2 + 2] [i_5] [i_2] = ((~(((((max(var_9, var_1))) || -1485520566)))));
                            var_21 = 1485520630;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((var_10 | -106) ? ((var_9 ? 111 : -127)) : var_6)), var_15));
    var_18 -= var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((max(11, 42121)))));
                arr_5 [i_0] = ((-(49 / -2868450536034970305)));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [0] [6] [i_2] [i_3] [i_0] [2] [3] = ((((((6721263858791823831 <= -12) % ((83 ? -6983118896765072558 : 8434425076152940875))))) || (0 == var_8)));
                                arr_13 [i_0] [i_2] = (607624865 || 1749302473039721207);
                                var_20 = ((146 ? -114 : 1307720748));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

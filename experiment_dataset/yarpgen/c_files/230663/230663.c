/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        var_14 = ((476912758008346013 ? -549755813888 : var_13));
                        var_15 = (max(var_15, (arr_7 [i_2] [i_2])));
                        var_16 = 24;
                        var_17 = (min(16383, 127));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        var_18 |= 127;
                        var_19 = 115;
                        var_20 = (max(var_20, 44650));
                        var_21 ^= -28;
                    }
                    arr_15 [i_0] [i_1 - 1] [i_1] [i_2] = ((!60) ? 4294967290 : ((((arr_0 [i_2 - 2]) ? 31008 : -1456489194))));
                    var_22 = (max(23904, (-127 - 1)));
                    var_23 = -36;
                }
            }
        }
    }
    var_24 = (min(44, (((!(!var_1))))));
    #pragma endscop
}

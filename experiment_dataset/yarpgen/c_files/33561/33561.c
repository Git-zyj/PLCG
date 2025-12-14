/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (min((((var_8 == ((-663775225 ? var_2 : var_10))))), (arr_7 [3])));
                    var_12 = ((((((min((arr_6 [i_0] [i_0]), 33248))) << (((max((arr_4 [i_1] [i_0]), 58720256)) - 58720250))))) ? (((32277 || 0) ? ((-1717 ? var_0 : 26706)) : ((105951121 ? (arr_7 [13]) : 147)))) : 33238);
                    var_13 = (min(var_13, ((max((arr_8 [i_0] [i_1]), ((-663775248 ? var_10 : -1)))))));
                    var_14 = (((((((var_9 ? 511 : var_1)) / ((max(595539142, -663775225)))))) ? (min((!1), (max(-1356181109, 0)))) : ((min((!214), 255)))));
                }
            }
        }
    }
    var_15 = ((((((var_9 ? var_6 : 149)))) ? var_5 : (((!(((-1901894030 ? var_9 : 145))))))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                arr_15 [i_3] = (min(((min((arr_3 [i_4] [i_4]), var_5))), ((var_3 << (53596 - 53572)))));
                arr_16 [1] [12] [i_3 + 1] = ((max((var_1 - -22659), ((236 ? var_9 : (arr_1 [i_4]))))));
            }
        }
    }
    var_16 *= 28;
    var_17 = (min(var_17, ((((((!-48) >= (-127 - 1))) ? 1 : var_2)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_2);
    var_12 *= (((0 | 0) ? (((((var_5 ? var_0 : var_6))) * ((var_8 ? var_1 : 0)))) : ((((!((min(48271, (-9223372036854775807 - 1))))))))));
    var_13 = (10094462767635145963 * 0);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [6] [i_0] [i_0] = (min(((0 ? 148 : 127)), ((max(var_0, var_8)))));
                var_14 *= 0;
            }
        }
    }
    #pragma endscop
}

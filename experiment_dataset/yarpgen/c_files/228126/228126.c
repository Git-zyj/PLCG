/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_10));
    var_14 |= 1;
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((((((19 ? 2933823486 : 11608))) ? ((87 ? 15219 : 40252)) : 76))) ? ((193 ? (((34875 ? 16 : 241))) : ((30660 ? 9007199246352384 : 885658749)))) : (((23085 ? 62618 : 3874191707)))));
                var_16 = (max(var_16, ((max(((23076 ? 1812450466 : 4718296835164974339)), -64)))));
            }
        }
    }
    #pragma endscop
}

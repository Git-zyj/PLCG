/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = 7789800161361682486;
                    arr_8 [i_1] = (((((var_9 * var_9) ? (((arr_7 [i_0] [i_0] [i_2]) ? var_6 : var_8)) : 37915))) ? 7305757439843032609 : ((((((-8936738021520385835 ^ (arr_2 [i_0]))) >= (((23371 ? 3281343542 : var_13))))))));
                    var_17 = (max(var_17, ((((((var_0 ? (~var_15) : (10389 << 0)))) & ((~((var_8 ? var_0 : 244)))))))));
                }
            }
        }
    }
    var_18 = var_5;
    var_19 = var_6;
    #pragma endscop
}

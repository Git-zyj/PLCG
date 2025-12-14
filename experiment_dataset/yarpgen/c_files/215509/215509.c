/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((var_10 ? var_1 : (((3402022587743597502 | 15029096815354293878) & ((max(var_5, 1))))))))));
    var_16 ^= ((var_2 ? (1 - var_3) : ((max(3417647258355257737, var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((!((max((((!(arr_1 [i_0])))), 882254988))))))));
                arr_6 [i_1] = ((max((arr_5 [i_1 - 2]), 1)));
                var_18 ^= 3417647258355257737;
                arr_7 [i_0] [i_1] [i_1] = ((var_14 / (((((max(var_3, 15029096815354293879))) ? (arr_3 [i_0] [i_1 + 2] [i_0]) : (arr_1 [i_0]))))));
            }
        }
    }
    var_19 = var_0;
    var_20 -= ((1535869581 ? var_9 : (max((~var_0), -var_13))));
    #pragma endscop
}

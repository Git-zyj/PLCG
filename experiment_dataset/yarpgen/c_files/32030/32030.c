/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (-8955 ? 18119912965780987700 : -15);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = var_8;
                var_14 *= ((((178 ? var_9 : -89))) ? var_5 : ((var_0 ? (arr_1 [i_0]) : (((arr_4 [i_1] [i_1 - 2]) ^ (arr_2 [i_1]))))));
                var_15 += ((var_7 ? (~var_9) : ((~((max((arr_0 [i_0 + 1]), (arr_1 [i_0]))))))));
                arr_6 [1] [i_1] [i_1] |= (((((!(arr_5 [i_0] [i_1 + 4])))) <= (var_10 <= 0)));
            }
        }
    }
    #pragma endscop
}

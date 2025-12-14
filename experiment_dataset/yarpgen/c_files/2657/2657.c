/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = max(((var_16 ? (((arr_3 [i_0] [i_1]) ? 1 : var_8)) : var_9)), (arr_6 [i_0] [i_0] [i_0]));
                var_21 &= (((((max((arr_2 [i_1] [i_0]), 10))) % (424055261 % 290388513))));
                arr_7 [i_1] = ((!((max(((((arr_4 [i_0] [i_1]) % 141))), (max((arr_6 [i_0] [i_1] [i_0]), (arr_5 [i_0] [i_0]))))))));
                var_22 += ((-var_14 % (((arr_0 [i_1]) % var_1))));
            }
        }
    }
    var_23 = var_19;
    var_24 += (2766323706 % var_9);
    #pragma endscop
}

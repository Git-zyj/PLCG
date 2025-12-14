/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((5054787356692134440 ? ((-32738 ? -3522369003371775383 : 1)) : (var_3 <= var_8)))) ? var_6 : ((((4833 == (-2147483647 - 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (~var_4);
                    var_12 &= 32738;
                    arr_8 [i_0] [2] [i_0] &= (1 * var_6);
                    var_13 = (((((max(60690, 987204421)) & (~var_0)))));
                    arr_9 [i_0] [i_0] [5] [i_0] = (min(((((var_5 ? 31 : var_0)) & ((((arr_7 [i_0] [i_0]) ? var_9 : var_5))))), ((max(((var_4 % (arr_0 [i_2] [i_0]))), (arr_0 [i_0] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}

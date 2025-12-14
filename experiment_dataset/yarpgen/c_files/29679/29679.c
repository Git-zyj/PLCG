/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-5217388808391832913 ^ 25570) ? var_8 : -var_10);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 ^= -698905967172380390;
                    arr_8 [i_1] [i_1] = (((((-(arr_2 [i_0 - 2])))) ? ((max((arr_4 [i_0] [i_1] [i_2]), ((~(arr_4 [i_0] [i_1] [i_1])))))) : (arr_0 [i_0] [i_0])));
                }
            }
        }
    }
    var_20 -= ((var_4 ? var_0 : (((var_17 != (var_3 + var_9))))));
    #pragma endscop
}

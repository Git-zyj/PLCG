/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((~(max((arr_0 [i_0]), (arr_0 [i_0])))));
                arr_5 [i_0] [i_0] = (min(1, 127));
                var_14 *= (var_9 <= var_9);
                arr_6 [i_0] &= ((((var_7 ? ((max(524288, 17592181850112))) : ((var_8 >> (((arr_2 [i_0]) - 1488080509)))))) > 4294967294));
                var_15 ^= ((~((1 ? var_6 : 1))));
            }
        }
    }
    var_16 = (max(var_16, 424172304));
    #pragma endscop
}

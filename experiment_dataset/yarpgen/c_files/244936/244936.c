/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 ^= (var_0 * var_1);
                arr_5 [i_1] = (((((max(29743, -1)))) ? ((min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))) : (max(-1103698675, (((arr_1 [i_0]) ? 1 : (arr_0 [i_1] [i_1])))))));
                arr_6 [i_0] [i_0] [i_0] &= (arr_3 [i_0] [i_1]);
            }
        }
    }
    var_13 &= ((var_1 ? (((var_6 ^ ((85 >> (-1103698688 + 1103698709)))))) : var_3));
    var_14 *= ((((-((var_2 ? var_8 : 15632)))) & ((~(~10)))));
    #pragma endscop
}

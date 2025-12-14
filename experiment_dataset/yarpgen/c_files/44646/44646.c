/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 *= ((2235110100 && ((max((arr_1 [i_1]), (max(-1, (arr_0 [i_0] [i_1]))))))));
                var_21 = (var_18 / (arr_4 [i_0]));
                arr_5 [i_0] [i_0] = ((~(min(var_7, (((arr_4 [i_0]) ? (arr_1 [i_1]) : (arr_3 [i_0])))))));
            }
        }
    }
    var_22 = (max(var_22, var_6));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                var_23 = (max(var_23, var_16));
                arr_10 [i_3 - 2] [i_2] &= ((((((arr_7 [i_3 - 2]) - (arr_7 [i_3 - 2])))) ? (((31 ^ (arr_7 [i_3 - 2])))) : (min(3968, 2059857196))));
            }
        }
    }
    var_24 = (max(var_24, var_5));
    var_25 ^= (max(((var_7 >= ((2 << (var_2 + 6305932540960301565))))), (!64)));
    #pragma endscop
}

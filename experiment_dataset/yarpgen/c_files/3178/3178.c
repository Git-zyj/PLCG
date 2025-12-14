/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 9223372036854775797;
    var_21 -= ((63 ? -1 : 8502));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 -= ((((-2512066346964834918 + (min(2853208743096859125, 8192)))) / (((var_9 ? ((min((arr_3 [i_0] [6]), 8502))) : -687148582)))));
                var_23 = (((((((min(1, var_18))) ? (arr_1 [i_0 - 3]) : (arr_5 [i_0 - 2] [i_0 - 3])))) ? (max(((var_4 * (arr_5 [i_0 - 1] [i_0]))), 38)) : (min(((50319 ? 1 : 1726882920)), ((min(8502, 8510)))))));
                var_24 &= ((((min((max((arr_0 [i_0] [10]), (arr_3 [10] [4]))), (((65535 ? -687148597 : 38)))))) ? ((max(65509, 9226))) : (min(9, 687148585))));
            }
        }
    }
    #pragma endscop
}

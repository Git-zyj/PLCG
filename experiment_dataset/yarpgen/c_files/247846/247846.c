/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((((var_8 ? (var_8 % 1695875629) : (~15177842014144178462))) != (!15177842014144178462)));
                arr_5 [i_0] = (((~13686809295399903736) ? var_9 : (max(15177842014144178462, 13686809295399903736))));
            }
        }
    }
    var_11 = var_10;
    var_12 = 246711831;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_13 ? 43537 : (((((13093237068621415325 ? 111 : 50))) | var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (min(var_16, 1372925023253680353));
                var_17 = -32756;
                arr_4 [i_1] |= (!7);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_10 [4] = (((-(~28552))));
                arr_11 [i_3] [i_2] |= ((((18446744073709551608 ? 5744945457140139069 : -1228673199)) > (~2473)));
            }
        }
    }
    #pragma endscop
}

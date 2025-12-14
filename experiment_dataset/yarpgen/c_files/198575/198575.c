/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((~(arr_1 [8]))) & ((31784 ? (arr_1 [10]) : 0)))))));
                arr_4 [i_0] [i_1] = ((+((-17267 ? (~65524) : 3345629714))));
                var_17 = (max(var_17, var_0));
                var_18 = (max(var_18, (((113 ? 1 : 119)))));
            }
        }
    }
    var_19 &= var_6;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            {
                var_20 = (max((1 | 1), ((-(((var_11 < (arr_8 [i_2]))))))));
                arr_10 [i_2] [i_3 + 2] = (arr_3 [i_3]);
            }
        }
    }
    #pragma endscop
}

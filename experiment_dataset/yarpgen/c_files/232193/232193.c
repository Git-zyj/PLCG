/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = var_17;
        var_19 = 9706;
        var_20 = 9727;
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_21 = var_4;
                var_22 = ((((max(55841, 65528))) ? (((((14673807380802053269 ? 1 : 9697))) ^ (arr_2 [i_1 + 1]))) : 69));
                var_23 &= (max(11039063282981748663, 16));
                var_24 = 55829;
                var_25 = ((~(((~var_0) ? 13651 : ((55829 ? (arr_4 [i_1]) : var_12))))));
            }
        }
    }
    #pragma endscop
}

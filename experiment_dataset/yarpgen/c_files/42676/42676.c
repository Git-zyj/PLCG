/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_15 = (7029 > 255);
        arr_2 [i_0] &= (((arr_1 [i_0]) & (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_16 = ((!((((arr_3 [i_1] [i_1]) ^ var_8)))));
        var_17 ^= ((((min(var_14, -26))) ? 64 : (-1354183968390176606 + -var_3)));
        arr_5 [18] = var_3;
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_18 = ((((149 ? 113 : ((18016022133958570822 ? 17467 : 4)))) + 1));
                    var_19 = var_13;
                }
            }
        }
    }
    #pragma endscop
}

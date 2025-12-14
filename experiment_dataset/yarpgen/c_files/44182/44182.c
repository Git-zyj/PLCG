/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (arr_1 [i_0]);
        arr_3 [i_0] = ((+(((~var_6) ^ (((min(var_10, var_4))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            {
                arr_8 [i_1] = ((!((min((arr_0 [i_2 - 1] [i_2 + 1]), (arr_0 [i_2 + 1] [i_2 + 1]))))));
                arr_9 [i_2] [i_1] = (((((((max(-6451194460980409037, var_3)) > var_4)))) == (min(((-(arr_6 [i_1] [i_1] [i_2]))), -var_6))));
                arr_10 [i_1] [i_2] = (max(((-(((arr_0 [i_1] [i_2]) >> (var_10 - 51363))))), ((-((max(var_1, var_0)))))));
            }
        }
    }
    #pragma endscop
}

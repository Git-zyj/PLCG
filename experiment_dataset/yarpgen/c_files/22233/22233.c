/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min(var_13, (((908101711 ? 2147483647 : -1416643613))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((!(arr_0 [i_0])));
                    var_21 = ((((((arr_2 [i_0]) << (((max((arr_2 [i_1]), (arr_1 [i_0]))) - 2304430358))))) ? (((~var_10) ^ var_11)) : (((min(38030141, var_15))))));
                }
            }
        }
    }
    var_22 = var_4;
    #pragma endscop
}

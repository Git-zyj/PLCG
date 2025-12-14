/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min((((((var_15 ? var_7 : var_10)) * (var_12 <= var_7)))), (((var_11 > var_8) ? (!var_3) : 0)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 ^= (min((arr_3 [i_2 - 1] [i_0 - 1]), -1515472289));
                    arr_8 [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_2] = 4095;
                }
            }
        }
    }
    var_19 = (min(var_6, var_8));
    #pragma endscop
}

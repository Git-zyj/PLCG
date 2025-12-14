/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((-((var_9 ? var_6 : var_5)))) << (-55 + 66)));
    var_20 = ((var_5 ? (min(var_11, var_18)) : (max((var_6 || var_4), var_18))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 ^= (max((((arr_5 [i_0]) >> (((arr_5 [i_1]) - 58933)))), (((arr_5 [i_1]) << (((arr_6 [i_1]) + 21956))))));
                    var_22 = (arr_4 [i_1 + 1] [i_1 - 2]);
                }
            }
        }
    }
    #pragma endscop
}

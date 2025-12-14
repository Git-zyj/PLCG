/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_11, ((max(2047, (!var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 += ((((-14 ^ (arr_3 [i_0] [i_1]))) <= (((((((-169702162 ? (arr_4 [i_1]) : -27))) != (min(37, var_9))))))));
                    arr_8 [1] [i_1] [i_2] = (((!169702177) << (14240 - 14239)));
                }
            }
        }
    }
    var_17 ^= 0;
    var_18 = var_10;
    #pragma endscop
}

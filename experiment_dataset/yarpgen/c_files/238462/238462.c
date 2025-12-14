/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_11 [i_3 + 2] [9] [i_0] [i_0] [i_0] [i_0] = (max((((var_13 >= ((var_9 ? var_0 : var_3))))), var_13));
                            var_14 *= var_13;
                            var_15 ^= ((((((9896092928923651024 ? var_1 : 8550651144785900580))) ? (min(3662495392901996118, var_3)) : (((7222436866095748084 ? 14680064 : var_10))))) + (((((max(var_5, var_2)))) * (min(var_13, var_8)))));
                            var_16 = (max(var_16, ((((((((var_0 ? var_10 : var_13)) / ((var_9 ? var_4 : var_5))))) ? ((var_12 / (min(var_9, var_8)))) : var_13)))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = (((((((min(var_3, var_7))) ? (var_1 - var_3) : var_5))) ? (((var_3 || ((max(var_9, var_10)))))) : ((var_13 ? (var_8 >= var_5) : (var_12 || var_11)))));
                        }
                    }
                }
                arr_13 [i_0] [4] &= ((((((min(var_9, var_13))) ? (var_13 * var_10) : (max(var_6, var_13))))) ? ((17874 ? 8550651144785900592 : 40)) : (((var_2 / var_2) ? (max(var_9, var_8)) : (((min(var_5, var_3)))))));
            }
        }
    }
    var_17 = (max(var_17, var_8));
    #pragma endscop
}

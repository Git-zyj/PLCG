/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-var_10 + (8598164255083332694 / var_2)))) ? ((var_8 ? ((8598164255083332694 ? 60 : 3496357299)) : ((var_2 ? -60 : 402653184)))) : (((-(82 - 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((--0) ? (((var_7 / var_10) ? (var_1 - var_3) : (((arr_2 [i_0] [i_1 - 3] [0]) << (((arr_2 [i_0] [i_0] [i_1]) - 16620)))))) : ((((var_3 != -2634) <= ((var_11 ? var_8 : (arr_2 [i_1] [i_1] [i_0]))))))));
                arr_6 [i_0] = ((((((-(((var_4 > (arr_0 [i_1] [i_0])))))) + 2147483647)) << ((((2634 ? ((10705359607432796656 ? 784892399 : 128)) : (48 & 1))) - 784892399))));
            }
        }
    }
    var_13 *= (((((((var_9 ? var_0 : var_9))) >= ((var_5 ? var_1 : var_8)))) ? (((((var_9 ? var_6 : var_8))) ? (~var_8) : (((var_10 ? var_9 : var_6))))) : (((-((var_6 ? 0 : var_11)))))));
    #pragma endscop
}

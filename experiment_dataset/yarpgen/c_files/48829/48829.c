/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 ^= ((((((((var_16 ? var_0 : var_2))) == -var_7))) >= (((var_12 ? var_0 : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((+((((~var_13) < (arr_2 [i_0] [i_0]))))));
                    arr_7 [4] = ((((max((arr_4 [3] [i_1] [i_1] [3]), var_6))) & ((~(max(var_8, 0))))));
                    arr_8 [i_0 + 1] = 32767;
                    var_21 = (min(var_21, (arr_4 [i_0 + 3] [i_0 + 3] [5] [i_0 + 3])));
                    var_22 -= ((var_1 ? (var_7 >= 32767) : (min((arr_0 [i_0 + 3]), (arr_2 [i_0 - 1] [i_0 + 2])))));
                }
            }
        }
    }
    var_23 = (((((var_14 ? ((var_11 ? var_4 : var_4)) : ((var_13 ? var_2 : var_16))))) ? (~var_13) : ((((max(var_0, var_8))) ? (max(var_10, var_0)) : (((var_16 ? var_2 : var_16)))))));
    #pragma endscop
}

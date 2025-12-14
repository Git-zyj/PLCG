/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_2 ? var_1 : (var_10 || var_3))));
    var_14 = (max(var_14, (max(((~(((var_1 + 9223372036854775807) << 0)))), var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (max((max((arr_3 [i_0]), (max(var_2, var_2)))), ((-(((arr_7 [i_0] [i_1] [i_2] [i_2]) ? var_0 : (arr_7 [i_0] [i_0] [i_1] [i_2])))))));
                    var_16 = (var_6 << ((((((max(var_12, var_5))) ? (var_0 ^ var_4) : var_10)) - 17090249300701648978)));
                    var_17 *= (-((~((var_8 ? (arr_3 [i_1]) : var_5)))));
                    var_18 = (max(((max(var_10, var_8))), ((var_7 ^ (max(var_6, var_2))))));
                    arr_8 [i_0] [i_1] = var_3;
                }
            }
        }
    }
    var_19 += var_2;
    var_20 = ((((((~var_1) << (!var_0)))) ? -var_7 : ((var_4 ? var_6 : ((var_9 << (var_7 - 98)))))));
    #pragma endscop
}

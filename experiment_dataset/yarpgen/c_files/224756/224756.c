/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_11 ? (((((var_1 ? 224 : 0))))) : ((141 ? var_11 : 14048086268172443545))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((1 ? 14048086268172443545 : 4294967284))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_17 = ((2648116999778876889 ? var_14 : ((((!(arr_2 [i_0] [i_1 + 2] [i_2 - 1])))))));
                        arr_13 [i_3] [8] [i_0] [i_0] = var_2;
                    }
                }
            }
        }
    }
    var_18 = var_4;
    var_19 ^= ((((((((185 ? var_3 : var_10))) ? var_3 : var_3))) ? 4398657805537108077 : var_0));
    #pragma endscop
}

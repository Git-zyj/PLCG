/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = 654861893;
                    var_17 = (((((max(var_9, var_10)))) ? ((-(arr_4 [i_0] [i_1]))) : ((-(((arr_1 [i_0]) / var_11))))));
                }
            }
        }
    }
    var_18 = (min(var_18, var_12));
    var_19 = var_14;
    var_20 += (max(var_5, ((-(~4294967295)))));
    #pragma endscop
}

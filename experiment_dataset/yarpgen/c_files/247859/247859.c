/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = -0;
                    arr_10 [i_0] [i_1] [i_2] = (~32767);
                    var_18 = (max(var_18, ((max(((-(~var_0))), ((32755 ? 0 : 3)))))));
                }
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}

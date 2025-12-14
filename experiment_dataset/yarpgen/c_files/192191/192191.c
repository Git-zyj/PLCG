/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_1 - (-7 - -14324))));
    var_18 = (((((1 ? 115 : var_5) % (121 / var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((14324 ? (arr_3 [i_0] [i_1]) : var_0));
                    var_20 ^= (arr_5 [i_0] [i_1]);
                    arr_10 [i_0] = var_6;
                }
            }
        }
    }
    var_21 = (max(var_21, (((var_1 ? ((((max(var_8, 31)) != (!2002645974855737803)))) : var_5)))));
    #pragma endscop
}

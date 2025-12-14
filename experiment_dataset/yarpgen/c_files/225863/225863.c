/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((+((((!var_2) || var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2 + 2] [i_1] [i_0] = (((((min(3383884711495167106, (arr_4 [13] [13] [13]))) <= var_8)) ? (((arr_5 [i_0]) ? (((((arr_3 [5] [5]) > (arr_0 [i_0]))))) : ((var_3 ? (arr_6 [i_0] [i_1] [i_1] [i_2]) : var_11)))) : (((min(150, 124))))));
                    arr_9 [i_2] [i_0] [i_0] = (((((var_8 ? var_12 : (arr_5 [i_0])))) ? ((max(var_0, var_10))) : (~1)));
                    var_17 = (arr_0 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}

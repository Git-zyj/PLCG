/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = (14910 >> 1);
                var_13 *= ((((var_11 / (arr_2 [i_0] [i_1] [1]))) << ((32763 ? ((1 >> (((arr_0 [i_1]) - 208343679128650569)))) : -19818))));
                arr_6 [i_0] [i_1] [1] = (!32758);
            }
        }
    }
    #pragma endscop
}

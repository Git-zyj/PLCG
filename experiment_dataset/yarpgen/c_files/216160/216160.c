/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (max((arr_1 [i_0 - 1]), (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2])))));
                arr_6 [i_1] = (arr_3 [i_1] [i_1]);
                arr_7 [i_1] [i_1] [i_1] = 2221250125;
            }
        }
    }
    var_18 = ((((((252 != 3) >> (((~var_2) + 33))))) ? (~var_12) : var_14));
    var_19 += var_10;
    var_20 = (min(var_9, ((max(var_3, (max(124, var_3)))))));
    #pragma endscop
}

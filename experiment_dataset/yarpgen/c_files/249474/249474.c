/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((848 % ((0 ? -1317716703087365364 : var_4))))) ? 15972067737779495644 : -49));
    var_13 &= ((+(((var_2 % 1) ? var_7 : ((min(18436, 255)))))));
    var_14 |= 65530;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((min((arr_3 [4]), (arr_3 [i_0])))) ? (~-18422) : (arr_3 [i_0])));
                arr_7 [i_0] [i_1] [i_1] &= ((((arr_4 [i_0] [i_1] [i_1]) - (arr_4 [i_0] [i_1] [i_0]))));
                var_15 = (arr_4 [7] [i_0] [i_1]);
                arr_8 [i_0] [i_0] [i_0] = 24;
            }
        }
    }
    #pragma endscop
}

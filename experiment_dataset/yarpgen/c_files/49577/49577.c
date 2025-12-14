/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((max(3245899523, -109)))))));
                arr_5 [i_0] = -111;
                var_16 = ((((-118 ? 92 : 69))));
                arr_6 [i_0] [i_1] = -1;
            }
        }
    }
    var_17 = (min(var_17, var_8));
    var_18 = ((!(-115 | 161)));
    var_19 += var_0;
    var_20 = (min(var_20, ((3817830308 ? 24486 : 10485558604678890543))));
    #pragma endscop
}

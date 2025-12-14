/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((var_2 | (max(var_14, var_6)))) ^ var_2)))));
    var_17 = (max(var_17, var_9));
    var_18 = ((max((((var_14 ? var_3 : 1))), var_0)) <= (((((min(-1, 255))) ? var_7 : ((max(var_3, 80)))))));
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((24 ? 2047 : var_7))) / (~18446744073709551611)));
                var_20 = (max(var_20, var_2));
            }
        }
    }
    #pragma endscop
}

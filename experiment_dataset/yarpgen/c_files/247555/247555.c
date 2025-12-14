/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((1 > 37308) ? ((96 ? var_3 : -9223372036854775796)) : -var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(((max(-11, -2396))), ((-((max(2380, -2404)))))));
                arr_5 [i_0] [i_0] = ((((min(((2395 ? var_2 : var_6)), -1262439143834385129))) ? var_6 : ((((~var_1) ? -2398 : ((var_10 ? (arr_1 [i_0]) : -252)))))));
            }
        }
    }
    var_16 = 6;
    var_17 += (((var_10 ? (!var_7) : 70)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(((((max(-1, var_8))) ? -var_13 : ((842158949 >> (var_15 - 1695786148))))), (((!(((10849 ? var_2 : var_8)))))));
    var_20 ^= (((((min(15982, 0))) ? (-2147483647 - 1) : var_2)));
    var_21 = (max(var_21, var_14));
    var_22 = -65113689;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_23 = var_14;
                    var_24 = (max(var_24, (arr_5 [i_1])));
                    var_25 = 531102400;
                }
            }
        }
    }
    #pragma endscop
}

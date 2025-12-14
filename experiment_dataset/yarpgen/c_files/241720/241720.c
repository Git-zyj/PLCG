/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((((((2837043010 ? 0 : -486732227))) ? var_6 : 46023))) ? var_16 : -73));
                var_20 = (min(var_20, (((var_15 ? (((!-79) ? ((52565 ? -7421269557679476708 : var_13)) : 219395773)) : (((var_17 ? ((7421269557679476729 ? -432915871 : var_13)) : ((8825740136326695049 ? 1185357243 : var_17))))))))));
                arr_7 [i_1 - 1] [i_1 - 1] [i_0] = 7511449561236574510;
                var_21 = (min(var_21, 3));
            }
        }
    }
    var_22 = (max(var_22, 63283));
    #pragma endscop
}

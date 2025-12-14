/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = 42;
                    arr_8 [i_1] [i_2] = (max(-var_4, var_1));
                    var_18 = (min(var_18, (((min(var_2, ((((arr_2 [i_2]) ? -2013265045 : 2013265045)))))))));
                    var_19 = (max((((arr_2 [i_0 + 1]) ? var_1 : (max(-2013265023, var_16)))), var_11));
                    var_20 = -2013265023;
                }
            }
        }
    }
    var_21 |= 2013265023;
    #pragma endscop
}

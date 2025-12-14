/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1584681862;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 *= ((((((((3448860370 ? var_17 : 846106912))) ? var_17 : 179))) ? 4294967295 : 88));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = max(var_12, ((7 ? (~-1584681857) : -1584681872)));
                            var_20 -= var_10;
                            var_21 = ((((0 ? var_1 : 1)) + (10206 < var_14)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

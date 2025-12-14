/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_15 *= var_3;
                        var_16 = ((var_14 >= ((1000519419514631369 - ((min((arr_8 [i_2] [i_3]), var_9)))))));
                        var_17 = ((min((((arr_3 [11] [i_0 - 2]) ? 65535 : 1000519419514631392)), ((((arr_2 [i_1] [i_2]) == (arr_2 [11] [i_2])))))));
                    }
                    var_18 |= (((((((arr_3 [i_1] [i_2]) ? 1000519419514631408 : var_0)))) ? ((~(~17446224654194920207))) : ((((var_7 ? 1000519419514631406 : var_0)) - 2047))));
                    var_19 = (((arr_5 [i_2] [i_1] [i_1] [i_2]) & 17446224654194920207));
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] &= ((!((((max(64, 19))) || (((arr_2 [i_0]) || (arr_1 [i_0 - 1])))))));
        arr_4 [i_0] = (((((((min(var_9, 0))) % ((var_8 ? var_8 : 2157244824))))) * -7204833016347187280));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    var_16 = (max(var_16, 13));

                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_16 [i_1] [i_2] [i_2] [i_4 + 2] [i_3 + 3] = (((-8 + 9223372036854775807) << (((max((arr_5 [i_4 + 4] [i_4]), (arr_1 [i_3 - 1]))) - 3778192873488066416))));
                        var_17 = ((!(((arr_11 [i_3] [i_2 - 2] [i_2 - 1] [i_2]) <= 242))));
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, -var_1));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 28469;
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_15 = (min(var_15, (arr_0 [i_0])));
                    arr_9 [i_0] [i_2] [i_2] [i_1] = ((~((55720 >> (21383 - 21353)))));
                    var_16 = ((48941 ? 44153 : 44152));
                    arr_10 [i_0] [i_1] [i_2] = ((((((var_4 ? -1008405447 : var_3)))) ? var_8 : (~-26511)));
                }
                var_17 = ((~((~(max(16127036454638488269, 66))))));
                var_18 ^= (max((max(62914560, 2319707619071063361)), 8257536));
                var_19 = ((-(arr_4 [i_0] [i_1] [i_1])));
            }
        }
    }
    var_20 = (max(26511, ((var_8 ? ((9386 ? var_8 : 44153)) : var_10))));
    var_21 = (((!4294967295) >> (127 - 111)));
    #pragma endscop
}

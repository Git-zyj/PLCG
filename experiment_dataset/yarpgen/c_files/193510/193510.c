/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((var_10 ? ((54029 ? 2147483647 : 53878)) : (!var_2)))));
    var_21 = (max(var_21, (((!4294967277) ? (min(var_4, (53878 / var_5))) : ((min(((53873 ? var_13 : 192)), var_15)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [1] [i_0 + 2] = ((!(((((((arr_3 [i_0 - 2]) ? 14 : var_7))) ? (min(2376932802, (arr_1 [i_1]))) : (0 & 15473))))));
                arr_7 [i_1] [i_0] = ((~((80 & (arr_5 [i_0] [i_0 - 1] [i_1])))));
                arr_8 [9] [i_0 + 2] [7] = (4294967292 && 2045485980);
                var_22 = (min(((((802513742 ^ 40) == ((var_19 ? 13711100447563671276 : 2084033977))))), (-103 | 11660)));
            }
        }
    }
    #pragma endscop
}

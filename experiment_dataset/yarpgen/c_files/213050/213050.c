/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((min((~var_5), (min(var_4, -2237)))), var_7));
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [2] = (+((+((((arr_3 [i_0] [i_0]) >= var_1))))));
                arr_6 [11] [i_1] = 1864057518;
                var_13 = (min((((((max(var_2, var_4))) ? ((((arr_0 [7] [i_1]) * 1388608185))) : (min(5765550715035468983, -2238))))), (min(7103723994564357491, (arr_3 [i_1] [i_0])))));
            }
        }
    }
    var_14 = ((min((-1 || 2237), 3877610117342796502)));
    #pragma endscop
}

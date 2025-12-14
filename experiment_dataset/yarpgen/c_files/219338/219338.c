/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (arr_2 [12] [i_0])));
                var_12 -= (32705 || 8406340654360398253);
                var_13 = 32714;
            }
        }
    }
    var_14 = (max((!36962), (min(((12 ? 18446744073709551609 : 208)), 1))));
    var_15 -= ((1709497595 ? var_9 : ((var_7 ? -1024 : ((var_10 ? 2005176737 : var_1))))));
    #pragma endscop
}

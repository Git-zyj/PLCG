/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(-107891144, (max(5235791121875107743, var_3)));
    var_15 *= ((var_13 / (((!-850592229401920286) ? (!255) : (min(6931380377739488417, var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [10] = ((max(5107470413990746044, 4004775484)));
                var_16 = (min(var_16, (arr_0 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}

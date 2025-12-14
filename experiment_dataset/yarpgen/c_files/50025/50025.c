/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_0, (((((15793177919759829480 ? 15793177919759829480 : 16777216)) > 2653566153949722136)))));
    var_13 = 65535;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = 7961134190872059983;
                    arr_9 [i_0] [i_1] [i_1] [i_2] = 27618;
                    var_14 = (max(var_14, 36846485));
                    arr_10 [i_0] [i_0] = (((36846485 <= 16777231) != ((var_2 ? ((min((arr_1 [i_1] [5]), 0))) : 1))));
                }
            }
        }
    }
    var_15 = var_5;
    var_16 &= (~1);
    #pragma endscop
}

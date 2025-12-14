/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max(15094901162343922328, 31744)))));
    var_19 *= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (((((3351842911365629287 ? 140 : var_0))) || ((max((arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 3]), (arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_2]))))));
                    var_21 = var_17;
                }
            }
        }
    }
    var_22 = ((0 ? -1 : 115));
    var_23 = var_13;
    #pragma endscop
}

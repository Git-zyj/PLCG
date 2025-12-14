/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_9 ? (!-26) : (~var_1)))) & 15248565162880699661));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((((((arr_4 [i_0 - 1]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 2])))) ? (arr_4 [i_0 - 1]) : (min((arr_4 [i_0 + 1]), (arr_4 [i_0 + 2]))))))));
                    var_17 -= ((var_8 ? 18202 : (((arr_5 [1] [i_1] [i_2]) ? (min((arr_2 [15]), var_5)) : (arr_1 [i_2] [i_1])))));
                    var_18 = ((!(((var_3 * var_13) < 5339902816499876613))));
                    var_19 = (((((((16805 ? (arr_6 [i_0 + 2] [i_1] [i_2] [i_1]) : 42726))) ? ((((arr_2 [1]) == var_4))) : (((arr_5 [i_0] [i_1] [i_2]) >> (var_10 - 2547820398)))))) ? ((((11604113247885810389 || (arr_2 [i_0 + 2]))))) : -6573545347011108962);
                    var_20 = ((-((min((arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 2]))))));
                }
            }
        }
    }
    var_21 = (max(var_21, ((max(var_11, var_9)))));
    #pragma endscop
}

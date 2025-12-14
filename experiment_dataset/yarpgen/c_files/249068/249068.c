/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 += (((((2147483647 ? (arr_0 [i_1]) : 1))) ? (arr_3 [i_1]) : (arr_0 [i_0])));
                arr_6 [i_0] [i_0] [i_1] = (((max(1366342841, (arr_1 [i_1])))));
                arr_7 [i_0] = ((((min(-96, (-29980 * var_8)))) / (arr_0 [i_0])));
                var_13 = ((~(((min((arr_0 [1]), var_1))))));
                var_14 = (((((-(arr_3 [i_0])))) / (max(var_5, (arr_0 [i_0])))));
            }
        }
    }
    var_15 = (((~0) ? ((((var_3 + 0) ? (-29984 - 141) : ((var_7 ? 625456934464638677 : var_2))))) : (min(var_10, ((min(110, 57344)))))));
    var_16 = var_5;
    #pragma endscop
}

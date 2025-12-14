/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 &= var_4;
                var_15 = ((+((min((arr_1 [i_0]), (arr_2 [i_0] [11] [i_1]))))));
                var_16 -= 12479162296407513803;
                var_17 *= ((~((~(((arr_1 [2]) | (arr_2 [8] [8] [8])))))));
            }
        }
    }
    var_18 = var_5;
    var_19 = (min(var_19, (((!((max(0, 24))))))));
    var_20 = ((~(((((var_1 + 9223372036854775807) >> var_0)) ^ var_11))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (min((min(117, 949501628)), (((((var_2 ? -313813171 : 90)) ^ (arr_0 [i_0]))))));
                arr_5 [i_0] [5] [5] = ((949501628 >> (((~3345465668) - 949501621))));
                var_15 *= var_13;
                arr_6 [i_0] [i_0] = ((!((((~46046577) ? (min((arr_0 [i_1]), 1956219476778958694)) : ((min(3345465668, 308325860))))))));
            }
        }
    }
    var_16 &= ((((1129199169 ? 3345465668 : 949501629))));
    var_17 += var_3;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(var_8, ((~(((arr_2 [i_0] [i_1]) ? (arr_2 [i_1] [i_0]) : var_8))))));
                arr_6 [i_0] [i_0] = (((((((arr_1 [i_0]) < (arr_1 [i_0]))))) >= (((arr_1 [i_0]) ? var_1 : (arr_1 [i_0])))));
                var_22 = (((~2068952585) ? (min(var_5, (!290948445))) : (((((290948444 ? var_13 : var_10))) ? (((-19007 ? var_13 : (arr_3 [i_1])))) : ((290948424 ? var_17 : (arr_4 [i_0] [i_1] [i_0])))))));
            }
        }
    }
    #pragma endscop
}

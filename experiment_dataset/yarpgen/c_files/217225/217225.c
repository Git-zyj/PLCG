/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((!(arr_2 [i_0])));
        arr_4 [i_0] = (min((max(4748850195157163157, (arr_1 [i_0]))), (arr_1 [2])));
        var_13 = (min(var_13, (arr_2 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_14 = (max(4890435423119219668, (arr_0 [i_2])));
                var_15 = ((((((max((arr_2 [i_1]), var_10))) ? (arr_0 [i_1]) : (min((arr_9 [i_2] [i_2] [i_2]), 9816165628413019638)))) & ((((240574731 <= (((arr_8 [i_1] [i_2] [5]) ? var_1 : 65521))))))));
            }
        }
    }
    #pragma endscop
}

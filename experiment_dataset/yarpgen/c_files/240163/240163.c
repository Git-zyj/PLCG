/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (min(var_19, (((-((var_7 ? (((max(var_4, (arr_2 [i_0] [i_0]))))) : (max(var_9, 12538732226930456479)))))))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            {
                arr_11 [i_1 + 1] [i_1 - 1] [i_1 - 1] = ((66 ? (((((127 << (var_10 - 875646716)))) - (max(5908011846779095136, 312587036036016658)))) : (max((27953 == 62), (max(12538732226930456479, (arr_4 [i_1 + 2] [i_2 + 1])))))));
                var_20 *= max(var_15, (min((arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]), ((var_15 ? var_3 : (arr_9 [i_1 - 1] [i_1 - 1] [i_2 - 2]))))));
            }
        }
    }
    var_21 = (min(var_21, -var_10));
    #pragma endscop
}

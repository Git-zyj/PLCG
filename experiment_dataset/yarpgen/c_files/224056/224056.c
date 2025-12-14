/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((-(min((arr_7 [i_0] [14] [14]), ((((arr_1 [16] [i_1]) <= (arr_6 [14])))))))))));
                arr_8 [i_0] [i_1] [i_1] = (1 ? 0 : 1796142437);
            }
        }
    }
    var_12 = (min(var_12, (((((var_1 ? ((var_2 << (var_7 - 372990521))) : 1796142437)) <= ((min((0 - -1796142450), var_1))))))));
    #pragma endscop
}

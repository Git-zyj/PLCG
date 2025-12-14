/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_19 ? var_4 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (9830 && ((max(((27829 ? 27829 : 37708)), (arr_2 [i_0] [i_1])))));
                var_21 = ((arr_1 [i_0]) ? var_8 : (~119));
                var_22 = (((max((arr_1 [i_0]), (((25385 << (1180869478 - 1180869476))))))) ? ((((arr_0 [i_0]) >= var_12))) : (((113 ? var_13 : (arr_0 [i_0])))));
            }
        }
    }
    var_23 = (min(var_23, (((~(min(var_10, var_12)))))));
    #pragma endscop
}

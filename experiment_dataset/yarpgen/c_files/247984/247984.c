/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -18004001108084519100;
    var_19 = (((((((127 ? 467438377 : var_12))) && -var_6))) >= (((!((min(117, var_3)))))));
    var_20 = ((((467438377 ? var_3 : 467438359)) - (((25200 ? var_15 : (!-25211))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 -= ((var_8 ? ((max((arr_1 [i_0]), (arr_1 [i_1])))) : ((((min(26, 28))) & -16575))));
                var_22 = (min(((((max(-26787, 25204))) ? (var_14 % var_13) : ((var_1 << (var_7 - 41673))))), 32767));
                var_23 += (max(((min((var_6 - 467438370), ((min(255, 0)))))), (((7 + 0) ? 27101 : (var_5 / var_16)))));
            }
        }
    }
    #pragma endscop
}

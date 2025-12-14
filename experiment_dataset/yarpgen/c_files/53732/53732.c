/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 += ((var_8 * (((!var_3) ? 1486263218 : -1486263218))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (min((arr_1 [i_0]), -2607410378308670018));
                arr_5 [i_1] = var_9;
            }
        }
    }
    var_14 = ((var_7 ? (max((13727297941250886415 / var_0), var_6)) : ((((!(-1486263232 / var_2)))))));
    var_15 -= (((!var_10) ? (((max(var_5, var_4)))) : (min((~6868893669018924572), ((max(var_8, var_7)))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(1847836250, 905476194));
    var_13 = min((((((29687 ? var_4 : var_6))) ? var_0 : (2447131030 && var_5))), ((((((4080252092 << (var_7 - 16858)))) && 1847836265))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (max(((max(56179, ((1847836265 ? 127 : 12210))))), (min((max((arr_3 [i_0]), var_2)), ((2447131031 ? 1847836252 : 2624999367))))));
                    arr_8 [i_2] [i_1] [i_0] = ((((3598746084 ? var_11 : (min(98304, var_7)))) & ((-((1910910014 << (((var_5 + 18448) - 15))))))));
                    var_15 = (max((max((arr_0 [i_1 - 1]), -128)), (var_2 && 1847836252)));
                    arr_9 [i_0] [i_0] = (((((1059348499 ? 1910910014 : 53075))) & -128));
                }
            }
        }
    }
    var_16 = (((((((0 ? 8191 : var_6))) ? (((var_7 ? -574034775 : var_11))) : (var_6 | var_9))) & var_2));
    #pragma endscop
}

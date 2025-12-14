/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_18 = ((((min((arr_0 [i_2]), var_12)) == 8715743700008693425)) && (((-1524247775 ? (255 == 0) : var_4))));
                        var_19 += ((!(((var_7 ? (~12243746285915126347) : -7350183554946002809)))));
                    }
                    var_20 = (((max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (-7350183554946002796 < var_4))) * (arr_7 [i_0] [i_1] [i_2])));
                    var_21 = (-48 < 8715743700008693425);
                }
            }
        }
    }
    var_22 = (min(var_22, (!var_15)));
    var_23 = (min(var_23, var_0));
    var_24 = (var_16 + var_1);
    #pragma endscop
}

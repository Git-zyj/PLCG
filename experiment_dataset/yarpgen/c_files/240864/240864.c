/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min(((((min(var_12, 3286))) ? 3286 : (max(1, 759161599287799920)))), (62914560 / 891932812)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, 130));
                            arr_11 [i_0] [i_0] [1] [i_2] [i_2 + 1] [i_3] = 1;
                            arr_12 [i_0] [i_1] [i_3] [i_0] = (arr_6 [i_0]);
                            var_14 = (max((arr_2 [i_2 + 1]), ((((1 == 0) % ((min((arr_3 [13] [i_1 - 1]), var_5))))))));
                        }
                    }
                }
                arr_13 [i_0] = (min(-var_2, (min((65535 <= 1067131611780507352), ((var_4 & (arr_10 [19] [i_0] [i_1] [i_1])))))));
                var_15 = 1;
            }
        }
    }
    var_16 = ((10418 ? (((((var_8 ? 855069677 : var_8))) + 918595244513936912)) : ((((((759161599287799948 ? 845650968 : var_6))) ? ((var_5 << (var_10 - 13514913381903964676))) : var_2)))));
    var_17 = (((((var_8 ? ((0 >> (var_2 - 25201))) : 65534))) ? ((232 ? 9223372036854775807 : (min(var_11, var_10)))) : ((var_6 / ((var_3 ? 11078039032306940589 : var_10))))));
    var_18 = ((17687582474421751695 ? var_9 : (min(((var_1 ? 759161599287799931 : var_12)), (((164 ? var_3 : 3103005704)))))));
    var_19 = (max(((min(-1, var_1))), ((-832176678270848745 ? 23 : 832176678270848748))));
    #pragma endscop
}

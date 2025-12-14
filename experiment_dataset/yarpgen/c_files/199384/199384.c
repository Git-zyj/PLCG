/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_3] = ((((26481 ? 109 : 130)) << (4803852426558970899 - 4803852426558970891)));
                            var_10 ^= (min((((var_7 >> ((((-24769 ? 3118213173759164726 : 8064)) - 3118213173759164722))))), ((179824098 ? 3118213173759164717 : -36))));
                            var_11 = (min(var_11, 1143197919));

                            for (int i_4 = 1; i_4 < 15;i_4 += 1)
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3 - 1] = (!15328530899950386889);
                                var_12 = (max(var_12, (((15328530899950386889 ? 3118213173759164707 : -98)))));
                            }

                            for (int i_5 = 2; i_5 < 15;i_5 += 1)
                            {
                                var_13 = (max((var_6 - var_2), (15328530899950386889 != -1345271918)));
                                var_14 *= ((~((24 ? -1059821289 : -93))));
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_2] [i_3 - 1] [i_5 + 2] = ((((0 ? -18386 : 92)) - ((max(-117, 93)))));
                                var_15 += (-200798505 >= -24);
                            }
                        }
                    }
                }
                arr_23 [i_1] = (max((max((!127), 2030358685)), (~-254485303)));
                var_16 = (min(var_16, ((((!15920) ? ((((15 ? -9491 : 3197079690341339561)) >> (((-127 - 1) + 134)))) : ((((14938372540049630076 && 9) ? 181 : -3994))))))));
                var_17 = -34;
            }
        }
    }
    var_18 = (min(var_18, (var_3 <= var_4)));
    #pragma endscop
}

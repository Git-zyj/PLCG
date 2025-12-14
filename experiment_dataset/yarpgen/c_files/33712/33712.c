/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            var_11 = (min(var_11, -21));
                            arr_12 [i_4] [i_1] [i_1] [i_1] [i_0] = (((arr_7 [i_3] [i_3 - 3] [i_1]) ? (arr_9 [i_1 - 3]) : 5578528064152219980));
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_12 = ((((((arr_9 [8]) ? 12021679695345023272 : var_4))) ? (!var_9) : 15268014094497142550));
                            var_13 = arr_9 [3];
                            arr_17 [i_0] [i_1] [i_1] [i_2] [i_0] [i_0] [i_0] &= (var_8 % var_8);
                        }
                        arr_18 [i_0] [i_1] [i_0] [1] = (((((arr_15 [i_1] [1] [i_2] [i_2] [1] [i_3 - 2]) ? (arr_3 [2]) : 52142)) / -4));
                    }
                }
            }
        }
        var_14 = (((arr_7 [i_0] [i_0] [i_0]) ? var_4 : ((var_9 & (arr_0 [i_0])))));
        var_15 = (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_16 |= (((7404961603268248828 ? var_3 : var_4)) * 13393);
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_17 = var_8;
        arr_21 [i_6] |= (max((((arr_11 [i_6]) | (arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))), ((((arr_5 [i_6]) <= (arr_6 [i_6] [i_6] [i_6] [20]))))));
    }
    var_18 = (min(var_18, ((((((((var_3 ? var_5 : var_1))))) - (max(((max(255, var_8))), var_1)))))));
    var_19 |= var_0;
    var_20 = ((((((var_2 ? var_5 : 21)) | (var_5 > var_3))) % (((min(var_8, var_8))))));
    #pragma endscop
}

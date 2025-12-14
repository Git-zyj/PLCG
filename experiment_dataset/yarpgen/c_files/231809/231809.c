/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, ((min(((-((var_19 - (arr_4 [4] [4] [i_2]))))), (((!(arr_6 [i_0] [i_0] [i_2] [i_2 - 1] [i_0] [i_0])))))))));
                        arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = arr_0 [i_0] [i_0];

                        for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            var_21 &= -1799906962;
                            var_22 = (+(min((((arr_4 [i_3] [i_3] [i_1]) | var_10)), ((((arr_6 [i_0] [i_1] [i_2] [i_2] [7] [i_2]) != var_16))))));
                            var_23 = (((((((min(var_17, -24262))) && ((max(var_7, var_19)))))) > (min((arr_7 [i_1] [1] [i_2 + 1] [i_2 + 1] [i_3] [i_3]), var_12))));
                            var_24 = (min(var_24, ((min(var_3, -107)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, var_0));
                            var_26 = (arr_7 [i_1] [i_5 + 2] [9] [6] [i_2 - 1] [i_1]);
                        }
                        arr_15 [i_1] = ((-(max((max((arr_1 [7]), var_2)), (arr_8 [i_3] [i_0] [i_0] [i_0])))));
                    }
                }
            }
        }
        var_27 = (min(var_27, (arr_0 [i_0] [i_0])));
    }
    var_28 = (min(((((min(-24284, -24262))) ? (-107 + -24262) : var_19)), var_19));
    var_29 = var_7;
    #pragma endscop
}

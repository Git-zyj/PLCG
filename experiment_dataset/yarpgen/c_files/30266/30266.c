/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((!(((var_4 ? var_11 : -15108)))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_14 = (max(var_14, (arr_4 [i_1 + 2])));
                        var_15 = var_8;
                        var_16 = (((((1 ? 1 : var_12))) ? (2859138069988671696 > 12008430431731858237) : 13873));
                        arr_14 [i_0] = (((((var_13 ? var_0 : (arr_7 [i_0] [i_0] [i_2] [i_2])))) ? (arr_8 [i_1 + 2] [i_3 - 1] [i_3] [i_3 + 1]) : ((1 ? (arr_12 [i_0]) : (arr_11 [i_0] [i_1])))));
                        var_17 += (((arr_1 [i_1 - 1] [i_3]) > (arr_10 [i_1 + 2] [i_3] [i_3] [i_3 - 1] [i_3] [i_3])));
                    }

                    for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_0] = -var_6;
                        var_18 += var_10;
                    }
                    for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] = (max(var_2, (((~7883133799976359085) ^ (arr_19 [i_0] [i_0] [i_5] [i_2] [i_0])))));
                            var_19 = 2195;
                        }
                        var_20 = (max(var_20, ((min((arr_15 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5]), (max((arr_22 [i_1 - 1] [i_1 + 2] [i_5 + 3] [i_5] [i_5]), ((max(var_4, var_4))))))))));
                        arr_24 [i_2] [i_1] [i_0] [i_5] [i_0] = var_6;
                    }
                }
            }
        }
    }
    var_21 = var_2;
    var_22 = ((var_6 ? (max(((var_12 ? var_7 : -13874)), var_0)) : 1));
    var_23 = ((((max(var_1, var_0))) ? (~var_11) : (~var_2)));
    var_24 = var_10;
    #pragma endscop
}

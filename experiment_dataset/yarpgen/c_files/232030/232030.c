/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(min(((var_16 ? var_14 : var_14)), var_9))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 -= min((max(((max(32767, -113))), ((-(arr_0 [i_0] [i_0]))))), ((min((arr_1 [i_0]), -var_11))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [14] = (((((-(arr_4 [i_0] [i_0])))) ? ((~(!var_7))) : ((-((18165595561089389804 ? 112 : 62558))))));
                    arr_9 [5] = ((arr_3 [i_0] [i_1] [3]) ? (max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_1]))) : (((arr_4 [i_2] [i_1]) ? (arr_4 [i_0] [i_1]) : var_7)));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_19 = (min(var_19, ((min((((~(((arr_0 [i_2] [1]) ? var_12 : 43))))), (((((688792639 ? (arr_2 [i_0] [i_0]) : var_15))) ? var_15 : (arr_5 [i_3] [i_2] [i_1] [i_0]))))))));
                        var_20 = min(3, ((1895558217 / (arr_3 [i_0] [i_0] [i_0]))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] = (!var_0);
                        var_21 = var_15;
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_1] [i_0] = ((!(arr_18 [i_0] [i_1] [11])));
                        var_22 *= 18;
                    }
                    var_23 = ((((((min((arr_1 [i_1]), (arr_1 [i_2])))) && ((min((arr_3 [i_0] [i_0] [i_2]), (arr_6 [i_0] [i_0] [i_2])))))) ? 4294967288 : (!var_11)));
                }
            }
        }
    }
    var_24 = (!var_2);
    var_25 |= (((((~(65493 && var_6)))) ? (min(16618034757344953191, -10)) : var_1));
    #pragma endscop
}

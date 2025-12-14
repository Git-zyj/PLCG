/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(190, (~var_13));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_19 |= (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
        var_20 = ((~(((min(var_6, 4294967295))))));
        var_21 = ((-1 ? (min((arr_1 [i_0] [i_0]), var_7)) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_22 = (((((var_9 - ((((arr_2 [i_1] [i_1]) > 524287)))))) ? ((((((524277 ? 0 : var_2))) ? (((min((arr_0 [8]), (arr_4 [i_1] [i_1]))))) : (min((arr_0 [i_1]), 0))))) : ((var_3 + (((4294443032 ? 524263 : (arr_4 [i_1] [i_1]))))))));
        var_23 = -9114127084612566783;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_24 = (min(var_24, ((min(((524272 ? 0 : (arr_6 [i_2]))), (min((arr_6 [i_2]), var_5)))))));
        var_25 = ((-((~(arr_6 [i_2])))));
        arr_8 [i_2] = ((min(((32765 / (arr_2 [i_2] [i_2])), (arr_4 [i_2] [i_2])))));
        var_26 = (min(var_26, (arr_6 [i_2])));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_11 [i_3] = (min(((var_7 ? var_1 : var_7)), ((max((arr_2 [i_3] [i_3]), (arr_2 [i_3] [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_27 = (arr_1 [17] [i_4]);
                    var_28 = (max((min(var_3, 1)), (((!(!var_2))))));
                    var_29 = (max((arr_3 [i_5]), (((-15511 ? (~4294443033) : 29)))));
                }
            }
        }
    }
    #pragma endscop
}

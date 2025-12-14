/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(184, ((((min(var_13, 1))) ? (((1 ? var_1 : var_13))) : var_14))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = ((min((((arr_1 [i_0]) && (arr_1 [i_0]))), ((!(arr_0 [i_0]))))) ? ((min(((-(arr_0 [i_0]))), ((254 ? 55602 : var_15))))) : (arr_1 [i_0]));
        arr_2 [i_0] [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_18 = (min(-var_15, (37081 & 907083536)));
                        var_19 = (min(var_19, (((((((var_10 / (arr_12 [i_4] [i_3] [0] [i_1])))) ? (arr_10 [i_1] [i_1]) : (min(4294967294, var_15))))))));
                        arr_15 [i_4] [i_4] [i_4] [i_1] = (min((arr_13 [i_1] [i_2] [i_3] [9]), ((min((((arr_11 [i_1] [i_1] [i_1]) ? (arr_11 [i_1] [i_1] [i_1]) : var_10)), (arr_3 [i_1]))))));
                    }
                }
            }
        }
        var_20 = (-76 == 127);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] [i_5] = ((((min(-1426290319, ((-(arr_14 [14])))))) ? ((((!(((4294967294 ? var_12 : (arr_12 [i_5] [i_5] [i_5] [i_5])))))))) : (((arr_4 [i_5] [i_5]) ? var_10 : ((~(arr_4 [i_5] [i_5])))))));
        arr_19 [i_5] = (~1);
    }
    var_21 += ((-3442054392785651821 ? 4 : 161));
    var_22 = var_3;
    #pragma endscop
}

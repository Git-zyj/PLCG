/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_0));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = var_3;
        var_15 = ((!(arr_0 [i_0])));
        var_16 = (max(var_16, (((((((((var_0 ? var_0 : var_8))) ? var_5 : (((var_5 && (arr_0 [i_0]))))))) || (arr_2 [i_0]))))));
        var_17 = ((var_0 ? (((min((!var_10), (!var_0))))) : (min(1, ((var_8 ? (arr_1 [12] [i_0]) : var_1))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_18 = (var_6 - 1);
            var_19 = ((-563062524102022046 ? (arr_6 [i_1 + 1] [14] [i_1]) : var_1));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_20 &= ((((arr_10 [i_0] [i_1 + 1] [i_2] [i_3] [i_4 + 1] [i_3]) ? var_7 : var_3)));
                            var_21 = ((1 ? 9316118739367983634 : 0));
                            var_22 = (min(var_22, (((7836293 ? var_5 : var_3)))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_23 = (max(var_23, (arr_10 [i_0] [9] [i_5] [i_5] [i_5] [1])));
            arr_18 [i_0] [i_0] = ((((((((~(arr_3 [i_5])))) ? (min((arr_9 [i_0] [i_5] [i_5] [i_5]), var_11)) : (((1958805986 ? 3256301160 : 35184372088831)))))) ? (min(var_6, -var_8)) : (((((var_12 ? var_3 : var_8))) ? (~var_4) : (arr_2 [i_5])))));
        }
    }
    #pragma endscop
}

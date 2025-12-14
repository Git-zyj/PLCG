/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_11 = (max(var_11, ((((((((var_2 ? var_2 : 8512760411186976968))) || (((240 ? var_2 : var_5))))) || var_4)))));
                        arr_12 [i_0] = var_6;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_4] [i_2] [i_1] [i_0] = var_10;
                        arr_16 [i_0] = ((((arr_6 [i_0] [i_0 + 1]) ? var_3 : (arr_6 [i_0] [i_0 + 1]))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_12 = (min(var_12, ((((((-((9933983662522574632 ? 1 : 2))))) ? var_0 : 49)))));
                        var_13 = (min(var_13, (((((min(var_10, var_5))) ? (((((((arr_5 [i_0] [i_0] [20]) - var_3))) ? ((var_10 ? var_9 : var_6)) : 207))) : (((1688448975078694283 || var_0) ? 1529657417041136203 : var_0)))))));
                        var_14 += (((((-((min(var_3, 1)))))) || (max((!var_9), (var_3 == 8144)))));
                    }
                    var_15 = (min(var_15, ((max(((((((var_9 ? var_1 : var_1))) == (((arr_1 [0] [i_1]) ? var_2 : var_5))))), ((-(arr_6 [i_1] [i_0 + 1]))))))));
                }
            }
        }
    }
    var_16 = (((var_8 || var_8) ? var_10 : (max(var_6, ((var_7 ? var_6 : var_0))))));
    var_17 = (((!var_1) ? ((min(var_0, var_9))) : var_10));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                var_18 = var_4;
                arr_26 [i_6] [i_7] [i_7] = var_3;
                arr_27 [i_6] [12] [12] = 9933983662522574632;
                var_19 = (((var_10 || var_7) ? var_3 : (((var_2 - var_1) ? ((var_9 ? var_9 : var_2)) : var_8))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_2;
    var_16 = ((var_9 | ((var_1 ? ((var_3 ? var_10 : var_11)) : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_17 -= 27;
                    var_18 = (((min((arr_6 [i_2] [i_0] [i_0]), (((-(arr_3 [i_0] [i_0] [i_1])))))) * (min((((arr_0 [i_0]) ? (arr_6 [i_2] [13] [i_2]) : 23971)), (arr_4 [i_0] [i_1] [i_1] [i_2])))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_19 = (max(var_19, ((max((arr_0 [6]), var_10)))));
                    var_20 = ((((min(-28, (max(1, 8786))))) ? (((((arr_7 [i_0] [i_1] [i_3]) <= var_5)))) : (arr_7 [i_0] [i_1] [14])));
                    var_21 += var_12;
                }
                var_22 = (~8786);
            }
        }
    }
    var_23 = (min(var_23, (56749 & var_11)));
    var_24 &= (!var_4);
    #pragma endscop
}

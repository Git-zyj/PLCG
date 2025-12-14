/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((arr_3 [i_0 - 1]) ? (((((arr_3 [i_1 + 2]) ? var_1 : 7936)))) : ((min((arr_1 [i_0 + 1]), var_1)))));
                arr_5 [i_1] [i_0] = (((min((arr_2 [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 + 1] [i_1 + 1]))) ? var_12 : ((0 ? 0 : 1537))));
                var_18 = ((((((min(1263790089, var_9)) >= ((max((arr_2 [i_0 + 1] [i_0]), (arr_1 [i_1]))))))) <= var_9));
                arr_6 [i_0] [i_0] [i_0] = (min(((+(((arr_0 [i_0] [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))))), (arr_1 [i_0 + 1])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_19 = ((max(1, 1)));
        arr_10 [i_2] = min(var_2, 1);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_20 = (((arr_7 [i_3]) ? ((min(1, (arr_8 [8])))) : ((min(0, 1)))));
        var_21 = ((arr_12 [i_3] [i_3]) ? 0 : ((241 ? ((((arr_7 [1]) >= (arr_1 [i_3])))) : (arr_9 [i_3]))));
    }
    #pragma endscop
}

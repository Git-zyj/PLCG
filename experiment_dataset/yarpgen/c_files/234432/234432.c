/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 4579480831552108284;
    var_15 = ((var_0 ? (((((max(var_11, var_2)))) / ((var_2 ? var_3 : var_9)))) : (((((min(var_7, var_5)) < (((min(var_5, var_11))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((-((((~(arr_7 [i_0] [i_0] [i_2] [i_2])))))));
                    var_17 = (min(var_17, ((((((((arr_8 [i_0]) >= (arr_7 [12] [i_1] [6] [i_0]))) ? (arr_3 [i_0] [i_1] [i_0]) : (((max((arr_1 [12] [i_2]), (arr_0 [i_2]))))))) < (((((arr_8 [i_0]) != ((min((arr_8 [7]), (arr_0 [i_0])))))))))))));
                }
            }
        }
    }
    var_18 = (var_5 ? (((((min(var_6, var_3))) ? ((var_4 ? var_3 : var_3)) : var_13))) : (((((var_5 ? var_3 : var_9))) ? var_4 : (var_5 * var_11))));
    var_19 = ((var_4 ? (var_0 - var_13) : -var_0));
    #pragma endscop
}

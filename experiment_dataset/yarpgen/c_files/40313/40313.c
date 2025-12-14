/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_7 ? (((var_12 ? 2989806290 : var_3))) : ((57107 ? 14105669730990927172 : -4318))))) ? (min((min(14105669730990927172, 31525197391593472)), (14105669730990927172 == 14105669730990927172))) : 0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [9] [i_2] = ((var_9 ? ((~(~4341074342718624444))) : 14105669730990927172));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((((min((arr_5 [i_2] [i_1] [i_0 + 1] [i_0 + 2]), var_13))) ? 18 : (arr_0 [i_2])));
                }
                arr_9 [i_1] = (((((~((var_0 ? 127 : (arr_5 [i_0] [3] [2] [i_0])))))) ? (arr_2 [1] [i_0]) : (((-52 - (((arr_6 [i_0] [i_0] [i_1] [i_0]) ? 238 : (arr_4 [2] [i_1]))))))));
                arr_10 [i_0] [7] = (max((arr_1 [i_0 - 1]), ((max(var_2, 20)))));
                arr_11 [i_0] = ((((+(min((arr_1 [7]), (arr_4 [i_0] [8]))))) - (((((((arr_3 [i_1] [i_1]) ? var_8 : var_6))) ? 170 : ((-(-127 - 1))))))));
            }
        }
    }
    var_17 = (max((~868475927), var_2));
    var_18 = (min((((((var_15 ? var_7 : var_2))) ? (89 ^ 237) : var_10)), var_4));
    #pragma endscop
}

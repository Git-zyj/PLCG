/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] = (((arr_0 [i_0]) ? ((min((var_5 < var_8), ((var_3 ? var_0 : (arr_8 [i_1] [i_2])))))) : (arr_10 [8] [i_0] [9] [i_3])));
                            var_13 -= ((((!((max(var_6, var_1)))))));
                            arr_13 [i_0] [i_3] = (((((((min((arr_0 [4]), var_2))) ? var_0 : ((max((arr_6 [i_0] [i_0] [i_2]), var_0)))))) ? (((var_3 != ((min(var_7, (arr_10 [i_1] [i_1 - 1] [i_1] [i_1 + 1]))))))) : ((~((max(var_6, (arr_0 [i_0]))))))));
                        }
                    }
                }
                var_14 ^= (max(((((arr_1 [i_1]) <= (max(var_5, var_0))))), var_6));
                var_15 = arr_7 [i_1 - 3];
                arr_14 [i_0] [i_0] |= var_5;
            }
        }
    }
    var_16 = (max(var_16, (((((((max(var_0, var_8))) <= var_11)) ? (min(((var_8 ? var_12 : var_8)), ((max(var_8, var_8))))) : (((((var_2 ? var_5 : var_6))) ? var_8 : ((max(var_2, var_2))))))))));
    #pragma endscop
}

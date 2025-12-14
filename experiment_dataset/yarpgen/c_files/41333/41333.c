/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((-((var_2 + ((7074243019777010765 ? var_6 : var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_19 ^= (((((max(var_11, var_13)) >> (((arr_5 [i_2 + 1] [i_2 + 2] [i_2]) - 1282149297))))) ? (max((max(var_0, (arr_8 [i_3] [i_2] [i_1]))), (arr_6 [i_2]))) : (((min((min(var_16, (arr_3 [i_0] [i_2] [i_0]))), (arr_10 [i_2] [22]))))));
                            var_20 = (min(var_20, (((((!(arr_8 [24] [i_2] [i_3]))))))));
                        }
                    }
                }
                var_21 = (max((max((((-(arr_6 [i_0])))), (max((arr_7 [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))))), var_1));
                arr_12 [i_0] [i_1] = var_4;
            }
        }
    }
    var_22 *= (max(((min(var_0, (min(var_1, var_4))))), (max(var_15, ((min(var_16, -46663508)))))));
    #pragma endscop
}

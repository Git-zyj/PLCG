/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_19 | (((min(27772, var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    arr_7 [i_0 - 2] [i_2] [i_2 - 1] = ((((((arr_1 [i_0 - 1]) ? var_16 : var_0))) ? ((-(max((arr_0 [i_0 + 2] [1]), var_18)))) : (arr_6 [11])));
                    arr_8 [i_2] [i_1] [i_2] [i_2] = (1 - -1437082732);
                    arr_9 [i_2] = max(((15048664546297610341 * ((((-3879353179444501554 + 9223372036854775807) << (1 - 1)))))), (min((15048664546297610351 < 0), (arr_4 [i_0 + 2] [i_2 - 1] [i_2 - 1]))));
                    arr_10 [1] [i_2] = (min(1230108636351303114, (((((3073910700 ? var_5 : 15048664546297610357))) ? 26476 : 16131559036915002954))));
                }
                var_21 *= (((((((var_6 ? var_10 : var_12)) - (var_17 | var_14)))) ? (((((((var_12 + (arr_4 [i_1] [3] [i_0])))) || var_2)))) : (((((var_15 ? var_14 : var_16))) ? var_6 : (var_8 == var_3)))));
                var_22 = min((((24 ? (arr_2 [i_0 - 1] [i_0]) : var_13))), (min((arr_3 [i_0 - 1] [i_0 - 2]), (arr_2 [i_0 - 1] [i_0 - 1]))));
                arr_11 [i_0] &= (min(var_12, ((min(var_11, var_4)))));

                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    var_23 = ((((((arr_4 [i_0 - 1] [i_0 + 2] [i_0 + 2]) ? (arr_4 [i_0 - 2] [i_0 - 2] [i_0 + 2]) : (arr_4 [i_0 - 1] [i_0 - 2] [i_0 - 1])))) ? ((max(-1, (arr_12 [i_0 + 2] [i_1])))) : -16216785814978489533));
                    var_24 = (min(var_24, (((((((arr_0 [i_3 - 1] [i_0 + 1]) ? (arr_3 [i_0 - 1] [i_0 - 2]) : -118673899720429709))) ? (arr_3 [i_0 - 2] [i_0 - 1]) : (var_0 != var_12))))));
                }
            }
        }
    }
    var_25 = (((((1 < (max(var_8, var_5))))) * var_17));
    #pragma endscop
}

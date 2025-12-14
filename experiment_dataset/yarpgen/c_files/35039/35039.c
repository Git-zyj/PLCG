/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((1633244648 != ((((!(0 * var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((max((arr_1 [i_2 + 1]), (((arr_5 [i_0] [i_0] [i_2 + 2]) ? (arr_6 [i_0] [i_1]) : 0))))) ? (max(((((arr_0 [i_0] [i_1]) - var_6))), (arr_5 [i_0] [i_1] [i_2]))) : (arr_4 [i_2] [7] [i_0]))))));
                    var_19 -= -7600400802859565023;
                    var_20 = (max(var_20, ((((arr_0 [i_0] [i_2]) ? ((var_14 | (arr_2 [i_2 + 2] [i_2 + 4]))) : 0)))));
                    var_21 = (min(var_21, ((((max(2251799813683200, 18)) - ((var_3 ? var_6 : 1152921504606322688)))))));
                    var_22 = (min(var_22, (((((max(((~(arr_4 [i_0] [i_0] [i_0]))), (~122)))) + (((arr_0 [i_2 + 3] [i_2 - 1]) ? (arr_0 [i_2 + 4] [i_2 + 2]) : 1280851410)))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_11 [i_3] = (((~0) ? ((3974552625270297075 ? 0 : (arr_5 [i_3] [4] [4]))) : ((((arr_4 [1] [i_3] [i_3]) ? var_1 : -4)))));
        var_23 |= (arr_8 [i_3 + 3]);
    }
    #pragma endscop
}

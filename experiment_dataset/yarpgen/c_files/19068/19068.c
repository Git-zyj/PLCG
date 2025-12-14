/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (~(min(var_3, (arr_0 [i_0 - 1]))));
        arr_4 [i_0] = (arr_1 [i_0]);
        var_18 *= (min((((var_16 ? (arr_2 [i_0 - 1]) : 1887524289))), ((max(var_13, (arr_0 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((-var_12 ? var_4 : 4294967277)) << ((var_1 * ((4294967282 % (arr_6 [i_1 - 2])))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_12 [i_3] [i_3] [i_3] [i_3] = (max((max(var_0, var_8)), var_1));
                    arr_13 [i_3] [i_2] [i_3] [1] = (max(-var_8, var_7));
                    arr_14 [10] [i_2] [i_3] = ((arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (!var_3) : -2572301121289860295);
                }
            }
        }
        arr_15 [i_1] = 34118;
        var_19 *= ((((max((var_7 != 977079095), (max((arr_6 [i_1]), var_15))))) ? (max((arr_2 [9]), ((max(-128, 2407443006))))) : (var_9 < 34406)));
    }
    var_20 = 6446108550210081646;
    var_21 = (max(var_21, var_8));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_22 -= (((min((arr_18 [i_4]), var_0)) >> (((arr_18 [i_5]) >> (arr_18 [i_4])))));
                arr_23 [1] = 214;
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (max((max((max(var_5, 9045502953836730383)), (119 || 120))), 4095));
    var_20 = ((-(min((var_13 & var_2), (((119 ? -120 : -120)))))));
    var_21 ^= (max(((((max(-1, var_10))) ? var_1 : ((119 ? -120 : 119)))), (((((var_15 ? var_14 : -119))) ? ((119 >> (-1 + 29))) : (max(-120, -76650052))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((max(-8, (min(119, -120)))));
        var_22 ^= (((((119 ? 0 : (arr_1 [1])))) ? (((!((min(-120, (arr_1 [1]))))))) : (-2147483647 - 1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 ^= ((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [8]) : 0);
        var_24 ^= (((arr_6 [i_1] [i_1]) / (arr_6 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_25 ^= (((arr_5 [i_1]) && -8));
            var_26 = (((arr_6 [i_1] [i_2]) / (arr_8 [i_1] [1])));
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        arr_13 [3] = 127;
        arr_14 [i_3] = (82 ? ((0 ? -8 : 1)) : (-1 >= -120));
        arr_15 [i_3] = ((-(!1)));
    }
    #pragma endscop
}

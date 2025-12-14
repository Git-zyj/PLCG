/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((-var_3 ? 1 : (max(var_5, ((var_5 ? 1 : var_10))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (((max((3335490482 > var_6), 12439516018696865541))) ? ((4557774145712092365 ? ((var_3 ? var_8 : (arr_2 [i_0]))) : (((((arr_1 [i_0]) || (arr_2 [i_0]))))))) : ((var_9 ? (arr_0 [i_0]) : (arr_2 [i_0]))));
        arr_3 [11] [i_0] = (((max((arr_1 [i_0]), 1))) ? ((91 ? 1 : (arr_1 [i_0]))) : (arr_1 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            var_13 *= (1 < 9266173957215283017);
                            var_14 -= (arr_15 [i_5] [i_5] [i_5] [i_5 + 2] [i_5] [9]);
                            arr_18 [i_3] [i_2] [i_3] [i_2] [i_1] |= -4557774145712092365;
                        }
                        var_15 = 6760027018682609452;
                        arr_19 [i_1] [i_1] [i_3] [i_1] = ((arr_5 [i_3]) ? ((var_10 / (arr_1 [i_3]))) : (arr_17 [i_1] [i_1] [i_3] [i_4] [i_4 + 3] [i_4] [i_1]));
                    }
                }
            }
        }

        for (int i_6 = 4; i_6 < 13;i_6 += 1)
        {
            var_16 ^= ((59 || (arr_5 [i_1])));
            arr_22 [i_1] [i_1] = ((~(arr_10 [i_1] [i_1] [i_6])));
        }
    }
    var_17 = (((((var_2 ? -var_7 : (!881341443)))) ? (var_9 & 255) : (max(((var_0 ? var_6 : 2)), var_3))));
    #pragma endscop
}

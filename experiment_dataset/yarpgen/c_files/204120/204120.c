/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((((((50644 ? 1916443426 : var_12))) || (((-119 ? var_11 : 2378523886))))) && var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((2378523873 | (((max(var_9, var_3)) >> (21052 - 21025)))));
                arr_6 [7] [i_1] [i_0] = (max((((21052 / (arr_0 [i_1])))), (min(2378523886, 44483))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = (((var_10 && ((max(2378523886, 59))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    var_17 = ((5 ? ((16 ? 255 : (arr_14 [i_2] [i_3] [i_4 + 4]))) : ((((2378523882 && ((((arr_8 [i_2] [1]) ^ (arr_15 [i_3] [i_3]))))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_18 = (((-(arr_7 [i_4 + 4]))));
                                var_19 = ((4 < (min(2378523870, (max(-5, var_0))))));
                                var_20 ^= ((-(max((arr_15 [i_6] [i_4 - 1]), (arr_16 [i_2] [i_4 + 3] [4])))));
                            }
                        }
                    }
                    var_21 = 8725996553226443351;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_25 [i_7] = (max(((2378523865 ? 1916443426 : 2378523865)), (((((max(1916443413, var_1))) || 21052)))));
        var_22 = ((min((max(var_4, -8725996553226443352)), (((32097 ? var_12 : var_7))))));
    }
    #pragma endscop
}

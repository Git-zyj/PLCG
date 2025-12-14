/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 |= ((~((((var_12 << (12708 - 12683)))))));
                    arr_7 [i_1] = ((((((arr_2 [i_2 - 1] [i_1] [i_0]) ^ ((650159250 ? 164359736 : (-2147483647 - 1)))))) ? 21729 : (((max(1, var_3))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_21 [i_4] [i_4] [i_4] [i_4] = var_15;
                            var_19 = (max(var_19, (((+((((((arr_17 [i_4]) ? 159 : (arr_16 [i_6])))) ? ((63 >> (var_13 - 410759243))) : (!126))))))));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_26 [i_7] [0] [i_3] &= (min(((-12718 ? (arr_24 [1] [i_4]) : 1)), (arr_24 [14] [i_7])));
                    var_20 = (((arr_13 [i_4] [i_3] [i_4]) * ((((var_10 == (arr_22 [i_3] [i_4])))))));
                    var_21 = (max(var_21, 207));
                }
                var_22 = ((~(((arr_15 [i_3] [i_3] [i_3] [i_4]) ? -13287 : 207))));
            }
        }
    }
    #pragma endscop
}

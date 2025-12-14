/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] = 59343;
                            arr_10 [i_0] [i_0] [i_0] [1] = 17952;
                        }
                    }
                }
                var_13 = (min(var_13, ((((var_8 >= var_4) ? ((var_12 ? (arr_5 [i_1] [i_0] [i_0]) : (arr_3 [i_0] [i_0]))) : 24)))));
                var_14 = 17965;
                var_15 = (max(var_15, 2355312985));

                /* vectorizable */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    arr_13 [i_0] [i_0] = (((arr_4 [i_0] [i_1] [i_4 + 1]) ? (var_2 - 3331336976) : 62862));
                    var_16 = (((arr_12 [i_0] [i_1] [0] [i_4 - 1]) ? -17988 : 47586));
                    var_17 = var_10;
                    arr_14 [i_0] [i_1] [i_0] [i_4] = (arr_8 [7] [i_4 + 1] [i_4] [i_4 + 1]);
                }
            }
        }
    }
    var_18 = 47593;
    var_19 = (47603 != var_5);
    var_20 = ((var_1 - ((((var_12 >> (var_1 - 16215876600916626956))) - (~2355312985)))));
    var_21 = (max(var_21, 1970124420111272437));
    #pragma endscop
}

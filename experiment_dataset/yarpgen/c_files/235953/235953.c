/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 2347437632718678593;
    var_12 -= (max(1919031426, var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (min(((-(5282807499012951290 || -727865942))), 5304));
                var_13 = (max(var_13, ((((!(arr_1 [i_0] [i_1])))))));

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] = (-5282807499012951291 >= 5147981789654371662);
                    var_14 = -1919031426;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_12 [i_0] [i_3] [i_1] [i_3] = ((((-5282807499012951266 < (arr_7 [i_3])))) - ((min((arr_5 [i_0 - 2] [i_0]), -5322))));
                    arr_13 [i_3] = (arr_5 [i_0] [i_1]);
                    var_15 ^= (arr_11 [i_1] [i_1] [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            {
                var_16 = -727865942;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_17 -= ((((arr_14 [i_5 - 2] [i_5 - 2]) ? (arr_14 [i_5 - 2] [i_5 - 2]) : (arr_14 [i_5 - 2] [i_5 - 2]))));
                            arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] = (min(5282807499012951266, 96));
                            arr_24 [i_6] [i_5] = (arr_11 [i_5] [i_5 - 1] [i_5 - 2]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

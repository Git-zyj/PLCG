/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 -= (arr_9 [i_0]);
                                var_15 = (((((arr_15 [i_4] [i_3] [i_2] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_0] [i_3] [i_4]) : (arr_15 [i_0] [i_1] [i_1] [i_0] [i_4]))) == (arr_15 [i_0] [i_1] [2] [0] [i_4])));
                                arr_16 [i_0] [i_2] = ((((max((arr_3 [i_3] [2]), 22))) % ((((arr_11 [i_0] [i_1] [i_2] [i_2]) || -73)))));
                            }
                        }
                    }
                }
                var_16 += (max(22, ((min((arr_3 [i_0] [i_1]), (arr_3 [i_1] [i_0]))))));
                var_17 ^= ((((((22 ? (arr_3 [i_0] [i_1]) : (arr_0 [i_0]))) >= 0)) ? (!-185705195) : (max((((!(arr_1 [i_0])))), ((-37 ? (arr_11 [i_0] [i_1] [6] [i_1]) : 18644))))));
                var_18 = ((max(-50, (arr_13 [8] [i_1] [i_1] [i_1] [i_1]))));
            }
        }
    }
    var_19 = ((var_5 ? (((var_6 == (var_7 | var_8)))) : ((((max(4468851531520727754, 198307198))) ? (9265 % var_12) : (var_11 ^ var_13)))));
    var_20 = (1 >= -51);
    #pragma endscop
}

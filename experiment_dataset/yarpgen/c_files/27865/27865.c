/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [9] = ((max(((-4438 ? 3096321443 : 15), var_11))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [1] [i_2] [i_2] [i_3] [i_3] = max(((((min(4421, -1))) ? var_11 : (((arr_7 [i_4]) ? (arr_7 [i_2]) : (arr_3 [i_0]))))), ((max(31174, var_6))));
                                arr_16 [i_3] = ((var_8 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0]) : (arr_9 [5] [i_3] [i_2] [8])));
                                var_14 ^= ((-4438 ? ((((((14 == (arr_7 [i_4]))))) + ((0 ? var_13 : (arr_9 [i_0] [i_1] [i_0] [i_0]))))) : (((255 ? ((6194362627488346039 ? (arr_0 [i_1] [i_1]) : 0)) : (arr_7 [i_0]))))));
                            }
                        }
                    }
                    var_15 = ((~var_13) % ((79 - (((arr_7 [i_2]) ? (arr_12 [i_1] [i_1] [i_1] [i_2]) : (arr_3 [i_2]))))));
                    var_16 = (~101);
                }
                var_17 = (var_2 ? (((((min(255, var_5))) ? (arr_1 [i_0] [i_0]) : 1208493330))) : (((arr_13 [i_1] [i_0] [16] [i_0] [i_0] [i_0]) ? ((min((arr_14 [i_0] [i_1] [i_0] [i_0]), 4032))) : 4294967295)));
                arr_17 [3] = var_6;
            }
        }
    }
    var_18 = var_10;
    #pragma endscop
}

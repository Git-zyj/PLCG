/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] = (((((-(((var_9 == (arr_0 [i_2] [i_3]))))))) ? ((max(var_6, var_5))) : (arr_1 [i_0])));
                        var_15 |= ((max((max(var_10, (arr_3 [i_1]))), ((((arr_8 [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_1] [i_1]) : (arr_4 [i_3])))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((4225401170 ? 275 : (arr_5 [i_0] [i_2])));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] = ((((-(arr_14 [i_0] [i_2] [i_4]))) == (min((arr_14 [14] [i_1] [i_1]), (arr_14 [i_0] [i_1] [i_2])))));
                        arr_16 [i_4] &= var_1;
                        arr_17 [i_4] [i_0] [i_1] [i_0] [i_0] = 50828;
                    }
                    var_16 = min((~104), (min((((-2147483647 - 1) ? var_14 : (arr_2 [i_1]))), 225)));
                }
            }
        }
    }
    var_17 = (max(var_4, (~3310738265)));
    #pragma endscop
}

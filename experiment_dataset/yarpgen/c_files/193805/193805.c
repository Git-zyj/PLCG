/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!(max(1, 1)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 += (min(((((((var_0 ? 2910226616738741690 : 1))) ? ((min(0, (arr_1 [i_0])))) : ((min((arr_5 [i_0] [i_1] [i_2]), var_1)))))), (max((((18446744073709551596 ? var_1 : 1))), (min(7375984503151593393, (arr_2 [i_2])))))));
                    var_13 = ((((((((1 ? (arr_1 [i_0]) : var_9))) && ((((arr_0 [i_1] [i_2]) ^ 14040763376988578513)))))) << ((1 ? 1 : 1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_4] = (((((var_8 && var_7) ? (((14040763376988578513 || (arr_8 [i_4])))) : (var_7 && 1)))) && (((((max(var_10, var_1))) ? ((max(0, var_5))) : ((var_2 ? (arr_5 [i_2] [i_3] [i_2]) : (arr_0 [i_0] [i_1])))))));
                                var_14 += (((((min((arr_0 [i_0] [i_0]), var_5)) ? (((min(1, 1)))) : (min((arr_5 [i_3] [i_3] [1]), var_8)))) >> (min((((1 ? 1 : 1))), (max((arr_9 [i_0] [i_1] [i_2] [i_1]), var_10))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(var_15, ((max(1, 1)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_1 ? var_6 : (((var_0 & 6066908277147321737) % (((4294967295 ? var_8 : -16))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_4] = ((((((arr_8 [i_4 - 1] [8] [i_2] [i_3 + 2]) + var_0))) ? ((((arr_4 [i_1 - 2] [i_3 + 1]) != 28153))) : (((arr_8 [i_4 + 1] [i_2] [i_2] [i_3 - 1]) + (arr_10 [i_3 + 2])))));
                                arr_17 [i_3 - 1] [i_0] = (arr_6 [i_4 + 2]);
                            }
                        }
                    }
                    var_14 = ((~((27315 ? ((12379835796562229878 ? (arr_15 [i_0] [6] [6] [6]) : 6066908277147321737)) : ((((arr_9 [i_0] [i_0]) | (arr_1 [i_0]))))))));
                }
                var_15 += -31671;
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_12 = (((max(182, 2419968926)) | ((((!(arr_1 [i_2 - 3])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [13] [i_2] = (((arr_1 [i_0]) & ((((((arr_11 [i_0] [i_2] [1] [i_1] [i_4]) >= (arr_4 [i_4] [i_2] [6]))) ? var_8 : (((arr_4 [14] [i_2] [i_4]) ? -107 : 1351610288)))))));
                                var_13 = (min(((((((9 ? 7570761210039367200 : 2419968926))) || 74))), (((((3719540059 ? var_10 : var_5))) ? 2419968932 : (((((arr_0 [i_2]) < (arr_0 [i_0])))))))));
                            }
                        }
                    }
                    var_14 = (min(var_14, ((max(((+(((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_9 [16] [4] [i_0] [i_1] [4]))))), (arr_3 [i_1 - 2] [i_1 + 3]))))));
                }
                arr_14 [2] = 0;
            }
        }
    }
    #pragma endscop
}

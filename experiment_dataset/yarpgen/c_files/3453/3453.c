/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 5081990782532699281;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((-23353 ? (~-23353) : (((var_9 == (((var_5 ? (arr_3 [i_0]) : (arr_3 [i_0])))))))));
                    var_16 = min((((!((min(762986134, 3526548874501410592)))))), (max((arr_5 [i_0] [6] [i_0]), -108)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_1] [i_1] [6] [i_0] [i_1] [6] [i_1]);
                                arr_12 [21] [i_1] [i_2] [i_0] [i_4] = (arr_0 [i_0]);
                            }
                        }
                    }
                }
            }
        }
        arr_13 [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0] [0] [7]);
    }
    var_17 = ((max(((149 ? var_7 : 141)), (!var_6))));
    var_18 = (min(var_4, var_5));
    #pragma endscop
}

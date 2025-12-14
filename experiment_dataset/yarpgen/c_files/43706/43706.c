/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_10 = ((-(!16)));
                    arr_7 [i_1] = ((-((-(max(var_1, -61))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [3] [i_2] [i_1] [i_3] = (((((max(var_0, 122)))) || ((((((78 ? 2 : var_6))) ? ((min(-12, (arr_3 [i_0])))) : var_0)))));
                        var_11 += ((~(arr_3 [i_3])));
                        arr_12 [i_3] [i_1] [1] [1] |= (min(((min(0, (arr_0 [i_1])))), (min(((var_1 ? 13152 : 549621596160)), -113))));
                        var_12 = ((!((max(-var_4, ((-(arr_8 [i_1]))))))));
                    }
                    arr_13 [i_2] [i_1] [i_0] = (var_6 - 2490);
                }
            }
        }
    }
    var_13 = (max(var_13, ((((((var_3 ? 0 : 2))) ? (((((min(1862, var_2))) || var_9))) : var_7)))));
    #pragma endscop
}

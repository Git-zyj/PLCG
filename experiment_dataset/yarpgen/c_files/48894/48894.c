/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((23 * (1991175108 / -22800)))) ? (min(var_10, (min(var_11, var_11)))) : ((((!((max(var_10, var_11)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_14 = (arr_4 [4] [i_1]);
                        arr_11 [i_0] [i_2] = (min(((((((!(arr_6 [i_2] [i_1] [i_1])))) < 77))), (min(11, (((arr_1 [i_0] [i_3]) + var_3))))));
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((((max(((((arr_5 [i_2]) ? var_9 : var_6))), (((arr_10 [6] [i_1] [6] [i_2] [i_2] [i_3]) ? var_0 : 23))))) ? var_7 : var_8));
                        arr_13 [i_0] [i_0] [2] [i_2] [i_2] = ((!((((arr_5 [i_2]) ? var_5 : (arr_5 [i_2]))))));
                    }
                    var_15 = (((arr_6 [i_2] [i_2] [i_2]) ? (min(((max((arr_9 [i_2] [i_2] [i_2] [i_2]), var_2))), (~var_5))) : ((min(var_6, (arr_4 [i_0] [i_0]))))));
                }
                var_16 -= ((max(23, 5449)));
                arr_14 [i_0] = ((!((((var_8 < var_3) - var_9)))));
            }
        }
    }
    #pragma endscop
}

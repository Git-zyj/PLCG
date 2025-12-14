/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((max(-4832274634570779382, (max(var_9, var_7)))), var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] [16] = ((((!(((250 ? var_9 : var_1))))) ? (((((var_0 <= (arr_0 [i_0])))) + var_5)) : (((var_1 >= (max(var_4, var_10)))))));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_1] = (max(((var_10 ? ((max(52420, (arr_11 [i_1] [i_2] [i_2] [i_2] [i_1] [i_1])))) : ((((arr_10 [i_0] [i_0] [i_2] [i_2] [i_2] [i_1]) <= var_10))))), (!1520805632)));
                        arr_14 [i_1] [i_1] = var_8;
                        arr_15 [i_0] [i_1] [i_0] [i_0] = (~-4832274634570779397);
                    }
                    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_19 [10] [i_1 - 1] [i_2] = var_2;
                        arr_20 [i_0] [i_1] [i_1] = var_2;
                        arr_21 [4] = (max(var_7, (!var_2)));
                        arr_22 [2] [2] = (((((var_6 | 4649039202040358318) - (((var_2 ^ (arr_11 [12] [12] [12] [i_4] [i_4] [i_2])))))) ^ (var_2 - 166088378)));
                    }
                }
            }
        }
    }
    var_12 |= (((((var_9 - -4832274634570779382) - 200)) / var_10));
    #pragma endscop
}

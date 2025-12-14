/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [4] [4] = (min(-20920, 1));
                arr_6 [4] [i_1] [4] = ((var_10 + (+-1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_0] = 17822416656441231657;
                            arr_13 [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_1] [i_2] [i_0]);
                        }
                    }
                }
                arr_14 [i_0] [i_0] [0] = ((((!((995335142 && (arr_4 [i_0] [i_0] [i_1]))))) ? (((((!(arr_3 [i_0] [i_1]))) && ((max(var_3, var_11)))))) : ((-20929 * (((1 == (arr_10 [i_0] [i_0] [i_0] [i_0]))))))));
                arr_15 [i_0] [i_1 - 1] [i_0] = ((((max(1, (arr_0 [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}

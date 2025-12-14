/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_0 + 1] [i_0] [i_0 + 1] = (arr_4 [i_0 - 2] [i_1 + 1]);
                        var_15 = (arr_4 [i_1] [i_2]);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [i_3] = ((16087 ? 15256 : 49448));
                            arr_14 [i_0 + 1] [i_1 - 1] [13] [1] [i_4] = var_1;
                            arr_15 [i_0 - 2] [1] [0] [i_3] [1] = (min((max((max(var_6, var_9)), var_4)), ((((((-(arr_12 [7] [i_4] [i_4] [1] [i_4])))) > ((var_12 ? -5130692070725688491 : 49448)))))));
                        }
                        arr_16 [i_0 + 1] [1] [i_1 + 1] [i_2] [i_3] = (min(((var_7 ? (arr_12 [i_0] [i_0 - 1] [i_0 - 2] [i_1 - 1] [i_3]) : ((-8388608 ? 5491086126187433545 : 6019)))), (((min(1331409743, 22))))));
                    }
                    var_16 = -1331409744;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                arr_22 [i_5] = ((!((max(((max(var_13, (arr_19 [4])))), (max(var_11, (arr_18 [i_5]))))))));
                var_17 = (((arr_20 [i_5] [11]) ? ((-1331409744 ? 0 : 5823275779690793035)) : (arr_18 [i_5])));
            }
        }
    }
    var_18 = (var_11 & var_6);
    #pragma endscop
}

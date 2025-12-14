/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [i_0] [i_3] [i_2] [i_3] = ((~(((((128 - (arr_3 [i_0] [i_1] [i_3])))) ? 66 : var_1))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = (arr_8 [i_2] [i_2] [i_2] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 = (max(var_16, 14068345246811693717));
                        var_17 ^= (~(((((var_13 ? var_1 : 2556166894))) ? (arr_3 [i_0 - 3] [i_0 + 3] [4]) : (arr_12 [i_0] [i_1]))));
                    }
                    var_18 = var_13;
                    arr_14 [i_0] [i_2] = (((~1738800394) ? (((arr_5 [i_0 + 3] [i_0] [i_0 + 3] [i_0 + 3]) ? (arr_5 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 3]) : 1738800394)) : ((((arr_5 [i_0 + 1] [i_0 + 3] [i_0 - 2] [i_0 + 2]) ? var_5 : (arr_7 [i_0 + 2] [i_0 + 1] [i_0 - 3] [i_0 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_5] [i_6] = ((~(min((arr_9 [19] [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 1] [i_5]), var_1))));
                                var_19 += ((+(((arr_15 [i_0 + 2] [i_0] [5] [i_0 - 3]) << (((arr_6 [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 3]) - 150775825))))));
                            }
                        }
                    }
                }
                var_20 = (arr_16 [8] [i_1] [i_1] [i_1]);
            }
        }
    }
    var_21 = (max((max((~var_8), ((1638459134 ? 837695992 : 1026802290)))), var_4));
    var_22 = -9092;
    var_23 = max((((min(1738800394, var_2)) | (!var_12))), var_13);
    #pragma endscop
}

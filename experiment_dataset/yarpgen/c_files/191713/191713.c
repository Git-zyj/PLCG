/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((min(var_7, -var_7)), (~var_6)));
    var_14 = (((((var_1 ? (var_6 | var_4) : ((min(var_5, var_5)))))) ? var_8 : (var_9 || var_1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = min((!var_10), (min((min(-658539354190069730, 2097151)), (!var_5))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4] = ((-(max((min(var_4, -8154787299548347193)), (~var_5)))));
                                var_16 = max((((-3946821308819728338 ? (arr_4 [i_0 - 1]) : var_2))), (((min(var_2, -8154787299548347193)) | (arr_3 [i_0 - 1]))));
                                var_17 = (min(((-((~(arr_2 [i_0] [i_3 - 3]))))), var_3));
                                var_18 = (min(var_8, (((var_11 - (min(var_2, var_4)))))));
                            }
                        }
                    }
                    var_19 -= (max((((~(((-1480560487 + 2147483647) << (((-3946821308819728338 + 3946821308819728344) - 6))))))), (max((((8692866219344811592 ? -1 : 10432))), (max(1, 12936268594536576916))))));
                }
                for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_5] [i_5] = (!3946821308819728345);
                    var_20 = (((arr_2 [i_0] [i_1]) | (max(((min(var_5, var_10))), -var_10))));
                    var_21 = (min(var_21, ((((max((min(var_12, -1)), (arr_2 [i_0 + 1] [i_0 - 1]))) & ((((43 >> var_6) ? 11201 : (arr_10 [i_0 + 1] [i_0 + 1])))))))));
                }
                var_22 = (min((((((max(var_12, 986848469))) ? var_10 : (arr_9 [i_1] [i_1] [i_1] [i_0] [i_0 - 1] [i_0])))), (min((min(112, -8154787299548347180)), 115))));
                var_23 = (max(var_23, (!490293366)));
                arr_19 [i_0] [i_1] = 52;
            }
        }
    }
    #pragma endscop
}

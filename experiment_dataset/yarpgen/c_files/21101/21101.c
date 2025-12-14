/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_2 >> (var_6 - 3712764529489330534)))) ? (max(var_1, (max(3583368581245106980, var_6)))) : (~15849880752086780676));
    var_12 = var_0;
    var_13 = (var_9 ? (!var_3) : (max(((var_1 ? var_6 : var_6)), ((1495169405279928280 ? 6635170602809978328 : var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [19] [i_2] [i_0] = ((((max(14863375492464444661, 5480427294709108542)) * ((0 >> (3207877797400125675 - 3207877797400125636))))) >> (!var_1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2] [i_0] = max((min(var_2, ((var_0 ? 12209269275799476283 : 14095801498943225488)))), ((var_0 ? var_1 : (arr_6 [19] [i_1] [19]))));
                                var_14 = (1 != 14863375492464444635);
                                var_15 = 15238866276309425928;
                                arr_16 [i_2] [i_1] [i_2] [i_3] [i_4] [i_4] [i_4] = (((min(var_4, ((var_5 ? var_3 : 16997650170239088468)))) != 3583368581245106954));
                            }
                        }
                    }
                    var_16 = var_5;
                }
            }
        }
    }
    var_17 = var_5;
    #pragma endscop
}

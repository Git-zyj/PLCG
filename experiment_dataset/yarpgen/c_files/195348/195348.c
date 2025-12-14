/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 *= (((min((arr_1 [i_0]), 1447811976631806750)) / 402509071614253137));
        arr_2 [i_0] [i_0] = ((!((min(-402509071614253137, 410846322190948678)))));
        var_15 = (min((+-166799636), var_7));
        arr_3 [i_0] = var_2;
        var_16 = (((-7037126209383161658 + 1447811976631806750) ? 1662502258386578670 : (max(2, var_8))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {

                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    var_17 = ((!((max((arr_4 [i_1] [i_3 - 2]), -var_5)))));
                    var_18 ^= ((((((((arr_6 [12] [i_3 - 2]) && 254))))) < ((((min(-806810817836183682, 59994))) | var_0))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_19 = (min(var_19, (arr_12 [i_1 + 1] [i_1 - 2] [i_2] [i_4])));
                    var_20 = (min(var_20, -var_10));
                    var_21 = (max(var_21, (((((((!var_8) && (var_8 && 9007199254740991)))) != ((((max(13265754840489374751, (arr_10 [i_1 + 1]))) >= var_4))))))));
                }
                arr_13 [i_1] [i_2] = (max(((((arr_5 [i_1 - 2] [i_1 - 2]) ? (arr_10 [i_1 + 1]) : (arr_10 [i_1 - 1])))), (min(824342126, (arr_8 [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}

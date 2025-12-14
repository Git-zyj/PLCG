/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((arr_0 [i_0] [i_0]), (((0 == 421356336) + 421356336))));
        var_20 = (((1 ? (-24224 && -8760874789675982215) : var_2)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [12] [i_1] = (max((-421356353 & -8760874789675982214), (max((arr_4 [i_1]), -8760874789675982215))));
        var_21 = ((((!17273) > (max(421356330, 5)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_22 = (min(var_22, (arr_1 [i_2])));
                    arr_11 [i_1] = ((~((min((arr_9 [i_1] [i_2] [i_2] [i_3]), 21)))));
                    var_23 = (((min((var_8 & -8760874789675982219), (arr_6 [i_1] [i_2])))) ? (((!(((21 ? 1914829277 : -1)))))) : ((~((min(83, var_9))))));
                    var_24 = (max((arr_0 [i_1] [i_2]), ((1 ? (arr_0 [i_1] [i_2]) : -8760874789675982235))));
                }
            }
        }
        var_25 = (((((((min((arr_8 [1] [i_1] [i_1] [4]), var_9))) && (((arr_1 [16]) || (arr_1 [1])))))) >= ((((min(10, 1))) ? (-127 - 1) : (arr_6 [3] [i_1])))));
    }
    var_26 = (min(var_26, var_19));

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = 19475;
        var_27 = (((-((-(arr_6 [i_4] [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_28 = (!(~-19476));
        var_29 = ((120 ? 15697306150152186704 : ((min((((4611686018427387903 ? 107 : -124))), (min(-19, -8760874789675982239)))))));
    }
    #pragma endscop
}

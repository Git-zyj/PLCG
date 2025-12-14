/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 -= ((var_7 | ((min(163, (min((arr_4 [i_0] [i_0] [i_0]), var_7)))))));
            var_21 *= (((min(var_3, ((var_7 ? 3280715818916806177 : 1310136589)))) | (((((arr_1 [i_0]) <= (arr_1 [i_0])))))));
            var_22 = (max(var_22, ((min(-77, (min((arr_3 [i_1]), (93 - var_4))))))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            arr_11 [i_0] = 155;
            var_23 = (arr_8 [11] [i_2]);
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_24 = (arr_13 [i_3] [i_4]);
                    arr_17 [i_3] = var_3;
                    arr_18 [i_0] [i_3] [i_3] = (min(var_2, (((var_3 <= 1247040500599793715) | (min((arr_5 [i_3] [i_3]), var_5))))));
                }
            }
        }
        var_25 = 9324392667659301336;
        var_26 = ((152 <= ((((((arr_5 [i_0] [i_0]) | var_3)) <= 92)))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            arr_23 [i_5] = (((arr_19 [i_5]) <= (arr_19 [i_5])));
            var_27 = 1247040500599793728;
        }
        var_28 = (((max((min((arr_20 [i_5] [i_5]), (arr_19 [i_5]))), (93 <= 92))) <= (((((min(8, 0)) <= (((((arr_20 [i_5] [i_5]) <= var_8))))))))));
    }
    var_29 = (min((max(2554034023901172957, ((min(var_9, var_17))))), (((1247040500599793712 | var_15) | var_1))));
    #pragma endscop
}

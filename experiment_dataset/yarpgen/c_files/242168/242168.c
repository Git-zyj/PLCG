/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_16 = ((var_11 < (((~230) ? 54880 : -747871656))));
        arr_3 [i_0] = (min((arr_2 [i_0 - 1]), (((!((min((arr_1 [i_0 + 1]), (arr_1 [i_0])))))))));
    }
    var_17 |= var_6;

    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_18 -= -2024;

        /* vectorizable */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_8 [i_1] = (((arr_7 [i_1] [i_1 - 3] [11]) > (arr_7 [i_1] [i_1] [i_2])));
            var_19 -= ((!(arr_5 [i_1])));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_20 |= (2861931791963032965 ? ((((max(0, 1374316628))))) : (((-58 <= 1) ? (arr_4 [i_1 - 2] [i_3]) : ((((3389541096105294201 && (arr_5 [i_3]))))))));
            var_21 = (arr_1 [i_3]);
            var_22 -= 0;
            arr_11 [9] [i_1] [15] = (((((3 ? (arr_6 [i_1 - 1]) : (arr_6 [i_1 - 1])))) ? (((((min(2055087734768634638, 6027335911626459241))) && 22307))) : (0 || -6088172766504093366)));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_23 = ((562949953420288 ? 8 : 255));
                var_24 = (min(var_24, 35));
            }
            var_25 = var_4;
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_22 [i_7] = var_6;
                        var_26 *= (((arr_18 [i_1 - 2] [i_4]) ^ ((min(-41, (-43 < var_6))))));
                        var_27 |= (min((arr_4 [1] [1]), (-9223372036854775795 == 91)));
                    }
                }
            }
        }
        arr_23 [i_1 - 1] = (min((~32), ((((arr_18 [i_1 - 1] [i_1 + 1]) != (((~(arr_10 [i_1 - 2])))))))));
    }
    #pragma endscop
}

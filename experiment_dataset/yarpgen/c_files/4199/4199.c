/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = (max((min(20717, -4886)), (!17395)));
    var_21 = ((var_10 ? 65535 : -2471707252507669789));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 ^= ((5127 ? ((max(255, -4886))) : ((13414026673272708020 ? (!15975036821201881831) : 5127))));
        var_23 += (+-1);
        var_24 = (~2471707252507669767);
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_25 = 18446744073709551615;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_1] = 37066;

            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                var_26 = (min(var_26, -5113));
                arr_11 [i_1] [i_1] [i_1] [i_1] = 19231;
                arr_12 [i_1] [i_1] [i_3] [i_3] = 8538612695790296420;
                var_27 = 14594984877185352154;
            }
            var_28 ^= 12534;
            var_29 ^= 7;
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_30 *= (min(((min(-19247, 240))), (min(65535, 19246))));
                arr_20 [9] [i_1] [i_1] = ((3 ? 6706186635301414474 : 5134));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_31 -= (max((!-3), ((14578435658734032886 ? (!27278) : 9531656546183355633))));
                arr_25 [3] [3] [i_6] [i_6] = ((min(65521, 140737488224256)));
            }
            var_32 -= (min(-1524, 509717578794391727));
            arr_26 [1] = ((-(min(6473607331932651363, 16))));
        }
    }
    #pragma endscop
}

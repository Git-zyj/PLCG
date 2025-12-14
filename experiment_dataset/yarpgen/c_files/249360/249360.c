/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((((((var_5 ? 2448776119 : 5606330661038997644)) ? ((215 ? (arr_3 [i_0] [i_0] [i_1]) : (arr_0 [14]))) : ((var_5 ? (arr_1 [i_1]) : var_12))))));
            var_13 = var_0;
            arr_6 [i_0] &= (~14);
        }
        arr_7 [i_0] = (((-(arr_1 [i_0]))));
        arr_8 [i_0] [6] = (arr_3 [i_0] [i_0] [i_0]);
        var_14 = (min(var_14, ((((((-(!4294967295)))) ? (arr_1 [i_0]) : (arr_3 [i_0] [3] [3]))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_12 [i_2] = (((((~(arr_11 [i_2] [i_2])))) ? (((~var_8) ? ((~(arr_2 [i_2] [i_2] [i_2]))) : var_3)) : (((!((((arr_10 [i_2] [i_2]) ? 32761 : (arr_1 [i_2])))))))));
        arr_13 [i_2] [2] = (1235 / 49114);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        var_15 *= ((-(((3855046884 ? 53340 : var_5)))));
                        arr_24 [i_3] [i_3] [i_4] [7] [i_5] [7] |= ((7780 << ((((((var_8 ? 3070953137 : var_9)) | (~var_5))) - 16181322220410990259))));
                    }
                }
            }
        }
        var_16 *= (var_3 + 255);
    }
    var_17 = (min(var_17, (((+(((var_8 + var_4) + -var_12)))))));
    #pragma endscop
}

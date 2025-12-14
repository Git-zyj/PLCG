/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_16));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 *= var_10;
        arr_2 [i_0] = var_5;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 &= (min((((arr_4 [i_0] [i_1]) - var_10)), (arr_4 [i_0] [i_1])));
            arr_6 [i_0] [i_0] [i_0] = (max((max(13497626033634604049, -98327646)), var_8));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_0] = var_0;

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_20 += ((!((!(arr_8 [i_3] [i_3])))));
                var_21 -= (min(((var_10 ? (~var_2) : var_3)), (min((arr_4 [i_0] [i_2 + 1]), (arr_4 [7] [i_2 - 1])))));
            }
            var_22 = (((((-var_6 ? (arr_8 [i_0] [i_2]) : (var_5 > var_11)))) ? (~var_16) : (((!((max(var_7, var_15))))))));
            var_23 += (((~var_15) ? ((var_10 ? (arr_9 [i_2 + 1] [i_2 - 1]) : (arr_7 [i_2 + 1] [i_2 + 1] [i_2 - 1]))) : ((var_5 & (arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 1])))));
            var_24 -= ((((((arr_8 [i_2] [i_2]) < (arr_8 [i_2] [i_2])))) > ((-(arr_8 [i_2] [i_2])))));
        }
    }
    #pragma endscop
}

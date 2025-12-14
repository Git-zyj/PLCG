/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= ((-2888151411453826606 ? -2888151411453826606 : (arr_2 [i_0])));
        var_13 = 65535;
        arr_4 [i_0] = ((3605467108 + (max((arr_0 [23] [23]), (arr_2 [i_0])))));
        var_14 = (max(var_14, (((112 && ((((arr_1 [i_0]) * (arr_0 [i_0] [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_15 *= (((arr_9 [i_1 + 1]) ? (arr_9 [i_1 + 1]) : var_8));
            var_16 += ((!((((arr_9 [i_1]) | (arr_9 [1]))))));
            var_17 = 4134085714330205247;
        }
        var_18 = (max(var_18, (((((((arr_6 [i_1]) < var_3))) != ((max(var_7, ((3605467108 ? 1965938546 : (-32767 - 1)))))))))));
        arr_10 [i_1] = (arr_6 [8]);
        var_19 = ((~((~(arr_7 [i_1 + 1])))));
    }

    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        var_20 = ((((min(((~(arr_12 [i_3]))), ((16384 | (arr_12 [i_3])))))) ? ((((var_1 >= (arr_1 [i_3]))))) : (arr_2 [6])));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_21 = ((~((63 ? -21512 : (arr_16 [13] [i_4])))));
            var_22 -= 3922139377500768373;
            arr_18 [i_3] [i_3] [i_3] = ((~(arr_1 [i_3 - 2])));
        }
        var_23 = ((-(arr_1 [i_3 - 3])));
        var_24 = (max(117440512, (((-21713 == -2888151411453826600) ? (((102 + (arr_1 [i_3])))) : (arr_15 [i_3] [i_3 + 2] [i_3 - 2])))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_25 *= (((max(689500187, (arr_1 [i_5]))) == 33467));
        arr_21 [i_5] [i_5] = (-(-127 - 1));
        var_26 = ((-((((max(36775, 232))) ? (min((arr_0 [i_5] [i_5]), (arr_2 [i_5]))) : (((arr_1 [11]) + var_2))))));
    }
    #pragma endscop
}

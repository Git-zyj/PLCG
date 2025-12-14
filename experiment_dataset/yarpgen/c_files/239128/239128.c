/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_4;
    var_13 = (var_9 | 4048415475);

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min(17592152489984, ((min(19, (((arr_1 [i_0] [i_0]) ? 1033588270 : 1077471513420880409)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = 7384356966871772780;
            var_14 += ((-(arr_6 [i_1] [i_1] [i_0])));
            arr_8 [i_0] = var_0;
            var_15 = (((7384356966871772780 ? 66 : 0)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = 164;
            arr_12 [i_0] [i_2] = (1077471513420880409 == 11);
            arr_13 [i_0] [i_2] [i_0] = -7384356966871772780;
            arr_14 [i_0] [i_0] [i_2] = ((+(((arr_10 [i_0] [i_0]) ? 11062387106837778854 : (arr_9 [i_0])))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_16 -= -4144674508;
            arr_18 [i_0] [i_0] [i_0] = 260046848;
            var_17 = (max(var_17, (arr_17 [i_0] [i_3])));
            var_18 += ((!((((arr_10 [i_0] [i_3]) ? ((min((arr_9 [i_0]), (arr_0 [i_0])))) : (2296178895 + 7384356966871772781))))));
            var_19 = ((max((((arr_1 [i_0] [i_3]) ? (arr_9 [i_3]) : (arr_1 [i_0] [i_0]))), (!10))));
        }
        arr_19 [i_0] = -9223372036854775805;
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        arr_22 [i_4] = min(((max(1343149334, 32767))), (((arr_16 [6]) ? (arr_1 [18] [18]) : 3)));
        var_20 = (~214);
        var_21 = (max(var_21, var_9));
    }
    #pragma endscop
}

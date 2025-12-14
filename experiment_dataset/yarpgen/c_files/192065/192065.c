/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_0 [i_0] [i_0]) << (var_5 + 6866664047791474151))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_10 *= (((((max(var_8, var_7)))) | (min(var_5, var_3))));
            arr_6 [i_1] [i_1] [i_1] = ((((min((var_3 - 1070380825), (arr_3 [i_0] [i_0] [i_0])))) == var_9));
            arr_7 [i_0] [i_0] [i_1] = ((var_5 / (max(var_2, (arr_3 [i_1] [i_1] [i_0])))));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] = ((3224586482 % (max(2995809410712582084, 1))));
            arr_12 [i_0] [i_2 - 2] [i_2] = (max(((3 << (27834 - 27806))), ((min((-28 == 100), (max(114, 1)))))));
        }
        for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_11 = ((max(33, 17)));
            arr_15 [i_0] = (arr_9 [i_0] [i_0]);
            var_12 = (max(2124839702, (max(var_5, (arr_13 [i_0] [i_0] [i_3 - 2])))));
            var_13 |= ((((min((var_3 % var_8), (23540 - var_8)))) == (max((arr_4 [i_3 + 2] [i_0]), var_3))));
        }
        for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
        {
            var_14 = (max(var_14, ((min((1 & var_7), 141)))));
            arr_18 [i_4 + 1] = (((((var_6 || (arr_8 [i_0] [i_4 - 1])))) % (1 & 1)));
            var_15 += (arr_13 [i_4 - 1] [i_4 + 2] [i_0]);
        }
        var_16 = (min(var_16, var_3));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        var_17 = ((!(0 / -1431550276)));
        var_18 = ((((183 & (arr_20 [i_5]))) << (!13865322555593162609)));
    }
    var_19 = var_4;
    var_20 = (var_3 / 212);
    #pragma endscop
}

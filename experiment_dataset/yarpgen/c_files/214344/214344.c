/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_19 += ((-(arr_1 [i_0 + 1])));
            var_20 = ((-var_10 >> (((arr_2 [1] [i_0]) - 1375691051))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_6 [i_0] = (((max((arr_5 [i_2] [i_0 + 1]), (arr_5 [i_0 - 2] [i_0 - 2])))) & var_16);
            var_21 *= (((arr_2 [i_0] [i_2]) <= (max(6272213598616228669, var_16))));
            var_22 = (min(var_22, (((~(min((arr_1 [i_0 - 2]), 3087137664939173888)))))));
            var_23 &= ((~(max((((arr_0 [1]) + var_2)), (max((arr_0 [i_0]), (arr_4 [0] [20] [i_0])))))));
        }
        var_24 = (18437 * 0);
        var_25 = arr_2 [i_0] [i_0];
        var_26 &= ((((((arr_1 [8]) > (((var_13 != (arr_4 [22] [18] [i_0]))))))) << ((((arr_4 [i_0 - 2] [2] [i_0]) <= 1)))));
    }
    var_27 = var_14;
    #pragma endscop
}

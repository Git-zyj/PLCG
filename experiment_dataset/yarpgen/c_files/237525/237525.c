/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = var_1;
    var_14 = (min(var_8, (min((var_8 / var_0), var_8))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_15 = (((arr_3 [14] [i_1 + 1]) || (arr_0 [i_0])));
            var_16 = (min(var_16, (arr_1 [i_1])));
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_17 = ((((((arr_1 [i_2 - 1]) != (arr_6 [i_0] [i_2 + 1] [i_0])))) != (arr_5 [i_0] [11])));
            var_18 |= ((((min((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_6 [i_2 + 1] [i_2] [20])))) && 25466));
            arr_8 [1] [i_0] |= (arr_1 [i_0]);
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_19 &= var_8;
            var_20 = (min(var_20, (arr_2 [20])));
        }
        var_21 = (((arr_9 [i_0] [i_0] [i_0]) << ((((min((arr_7 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0])))) - 18933))));
        var_22 |= (max(8101405066044747993, ((min((min((arr_6 [i_0] [i_0] [i_0]), var_2)), (arr_2 [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_23 = 9294;
        var_24 = (((((((arr_7 [1] [i_4] [i_4]) && (arr_7 [i_4] [i_4] [i_4]))))) <= (min(56242, (~var_3)))));
        var_25 = (max(var_1, (((((min((arr_5 [i_4] [i_4]), (arr_6 [i_4] [i_4] [i_4])))) || (arr_2 [i_4]))))));
    }
    #pragma endscop
}

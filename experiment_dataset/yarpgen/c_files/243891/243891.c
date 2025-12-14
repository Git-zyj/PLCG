/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((244 ? -2301166943688486165 : (-2301166943688486165 + 2301166943688486165)));
        var_13 &= 3959402435385731603;
        arr_4 [i_0] = 36783;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((-1163205260 ? 110 : ((27452 ? -2757249623023963759 : -3892))));
        arr_8 [i_1] [i_1 - 2] = 32767;
        arr_9 [i_1] = (((arr_6 [i_1 + 2]) ^ (arr_6 [i_1 + 1])));
        var_14 = var_9;
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] = var_8;
        arr_15 [i_2 + 1] = (min((((min(1163205260, var_6)) ^ -982585483)), ((max(2729612855, (((605458368 ? 11109 : 127))))))));
    }
    for (int i_3 = 4; i_3 < 11;i_3 += 1)
    {
        var_15 = 3817002301;
        var_16 = (((arr_2 [i_3 - 3]) == 18446744073709551615));
        arr_18 [i_3] [i_3] = (max((((arr_13 [i_3 - 4]) ? (arr_13 [i_3 - 2]) : (arr_13 [i_3 - 3]))), var_2));
    }
    var_17 = var_4;
    var_18 &= var_2;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            {
                arr_25 [i_4] = ((-1 - (((arr_24 [i_5 - 1] [i_5 + 1] [i_5 + 1]) ? ((var_4 ? (arr_20 [20]) : (arr_22 [i_4] [i_5]))) : -745574572))));
                arr_26 [i_4] [i_4] = var_4;
            }
        }
    }
    #pragma endscop
}

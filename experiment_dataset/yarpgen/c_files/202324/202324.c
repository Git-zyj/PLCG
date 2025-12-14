/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((10868 << (var_8 - 31290)));
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((-(min(7129663994468481927, ((max(var_7, var_2)))))));
        var_12 = ((-((+(((arr_1 [i_0]) ? 25870 : 14369300650078563645))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_13 = 14774;
            var_14 += ((0 ? 6343 : 14774));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_15 = (10868 ^ (arr_6 [5]));
            var_16 = (min((((((arr_0 [i_1]) + 2539582922)) / 3852)), 2391332273));
            var_17 = (-2147483647 - 1);
        }
        var_18 += (((((min((arr_6 [i_1]), 3852)))) | -var_1));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_19 = -var_9;
        var_20 = var_0;
    }
    #pragma endscop
}

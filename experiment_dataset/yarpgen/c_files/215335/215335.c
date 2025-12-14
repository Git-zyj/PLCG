/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (!var_3);
        var_15 = (min(12920806207652015697, -9));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = 7974;
        arr_5 [i_1] = (((((!((min(13628060165909853929, (arr_0 [i_1]))))))) < 83));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_2] [1] = 0;
                var_17 += (min((((arr_6 [i_3 + 1] [i_3 - 1]) ? (arr_6 [i_3 + 1] [i_3 - 1]) : (arr_1 [i_3 + 1] [i_3 - 1]))), ((-27510 ? (arr_6 [i_3 - 1] [i_2]) : (arr_6 [i_3 - 1] [i_3])))));
            }
        }
    }

    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = 18446744073709551615;
        var_18 *= ((max(-var_13, -0)));
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_19 *= (max(((((min(-75, var_11))) ? 1 : (arr_12 [i_5 - 1]))), (arr_11 [i_5])));
        var_20 = (min(var_20, var_11));
    }
    #pragma endscop
}

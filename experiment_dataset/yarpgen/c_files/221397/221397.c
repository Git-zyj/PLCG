/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_15 = 1;
                var_16 = (min((~65535), (((65535 * 0) / ((max((arr_0 [i_0 - 2] [i_0]), var_6)))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_17 = (var_1 & var_0);
            var_18 = (max(var_18, (arr_2 [14])));
        }
        for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_19 = (max(var_19, (((var_14 || (var_5 <= 89))))));
            var_20 = ((((((var_6 + 2147483647) >> (3515999996589727465 - 3515999996589727435)))) ? (arr_2 [i_2]) : var_1));
        }
        arr_12 [i_2] [i_2] = ((9 < (arr_6 [i_2])));
        arr_13 [i_2] [i_2] = 65532;

        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            var_21 = (var_7 != 9327);
            var_22 = (min(var_22, 14268));
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_23 = (max(var_23, ((((arr_3 [2] [i_6 - 1]) <= var_2)))));
            arr_20 [i_2] [i_6 - 1] = (arr_2 [i_2]);
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_23 [i_7] [i_7] = ((((14211381970806274743 ? (arr_21 [i_7] [11]) : (arr_21 [i_7] [i_7]))) << (-var_5 - 3385692704466694896)));
        var_24 = (max((arr_22 [i_7] [20]), (arr_21 [i_7] [i_7])));
    }
    #pragma endscop
}

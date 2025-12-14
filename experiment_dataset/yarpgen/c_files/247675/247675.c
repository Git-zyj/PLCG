/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((-(min((min(var_5, -1746510303827589463)), ((-4957294929354300733 ? -4957294929354300740 : 528168513)))))))));
    var_12 *= (var_1 ^ -var_10);
    var_13 = var_3;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 *= ((((max(var_5, (~var_2)))) || ((min((!var_7), (arr_0 [19]))))));
        var_15 = (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = (max(((((-19885 + 2147483647) << (((((arr_4 [i_1]) << (((arr_0 [i_1]) - 10728104625577077242)))) - 14516779938754854912))))), (((arr_1 [21]) ? (((min(17164, 17165)))) : (arr_3 [4])))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_1] [i_1] = (min((arr_5 [i_2]), (arr_2 [i_1])));
            var_16 = (!-4957294929354300752);
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_17 = (min(var_17, ((((min((max((-9223372036854775807 - 1), 9071677713825256363)), 5995258140015615756)) != (arr_7 [8]))))));
            arr_14 [2] = 0;
            var_18 = (arr_5 [i_1]);
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_19 = (min((arr_16 [i_1] [i_5 - 2] [i_1] [i_1]), (((-(((arr_19 [i_1] [i_1]) / (arr_11 [i_1] [i_1] [i_1]))))))));
                            var_20 = (arr_7 [i_1]);
                            arr_23 [i_4] [i_3] [i_4] = 4957294929354300740;
                            arr_24 [i_1] [i_1] [i_1] [i_4] [i_4] [i_1] [0] = (((arr_13 [i_1] [i_1]) ? (min((min((arr_2 [7]), var_1)), 11474)) : (((((-(arr_15 [i_4] [12]))))))));
                            var_21 = (max(var_21, ((((arr_11 [9] [9] [i_3]) << (((min(var_4, ((17164 ? (arr_3 [i_4]) : -4957294929354300742)))) - 65)))))));
                        }
                    }
                }
            }
            var_22 = (min(var_22, var_6));
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_27 [i_1] [i_1] = (min((arr_5 [9]), ((min(17165, -5995258140015615767)))));
            var_23 = (((((17173 || (((63147 ? 15270229132104852807 : 0)))))) * (((((var_8 ? var_2 : var_7))) ? var_10 : 32767))));
        }
        var_24 = (~(arr_15 [i_1] [i_1]));
    }
    #pragma endscop
}

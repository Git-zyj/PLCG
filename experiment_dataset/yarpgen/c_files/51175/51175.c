/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((((((!45669) == (0 + -47)))) != (((92 == ((~(arr_2 [i_0 + 1]))))))));
        var_12 = ((-(max(11249, (max(var_5, 4294967293))))));
        var_13 = (max(((((arr_0 [i_0 - 1]) || 7555323988898323826))), ((4294967295 ? (arr_0 [i_0 + 1]) : 114))));
        arr_4 [i_0] [i_0] = (min((max((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0])));
        var_14 *= var_0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_15 [i_3] [i_3] [i_2] [i_3] = (((arr_10 [i_1] [i_3] [i_3] [i_1]) ? (((arr_8 [i_4] [i_2] [i_2]) & 2)) : (arr_2 [i_4])));
                        var_15 ^= ((!(arr_10 [i_4] [i_1] [i_1] [i_3])));
                        arr_16 [8] [i_3] [i_3] [i_1] = (arr_5 [i_4 - 1]);
                    }
                }
            }

            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                var_16 = (min(var_16, (arr_17 [i_5 + 2] [i_5 + 1] [i_2])));
                var_17 *= -113;
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_22 [i_6] = (-4399897830784961739 != -112);
                var_18 += ((-var_9 ? ((-4399897830784961739 + (arr_19 [i_2]))) : -25));
            }

            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                arr_26 [i_7] [i_2] = (!2032);
                arr_27 [i_2] = (arr_12 [i_7] [i_7 - 2] [i_7] [i_7] [i_2]);
            }
        }

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_19 = (min(var_19, (var_2 * 114)));

            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                var_20 *= -var_3;
                var_21 = ((+((var_11 ? (arr_17 [i_9] [i_8] [i_1]) : (arr_11 [i_8] [i_8] [i_8])))));
            }
            arr_32 [i_8] [i_1] [i_1] = (((((4399897830784961738 && (arr_25 [i_8] [i_1])))) + 61370));
            arr_33 [i_8] [i_8] [i_1] = ((!(arr_0 [i_8])));
        }
        arr_34 [i_1] = 10760;
    }
    var_22 = (max(var_22, ((((max((~-390411956), var_6)) % var_1)))));
    var_23 = (min(var_23, (((-((((3000155196 % 4) != 4))))))));
    var_24 = (((!var_6) ? (max(62156, (min(18446744073709551613, 1200064030)))) : ((((var_7 || 3378054159) ? 61381 : var_4)))));
    var_25 = (2147483647 / 255);
    #pragma endscop
}

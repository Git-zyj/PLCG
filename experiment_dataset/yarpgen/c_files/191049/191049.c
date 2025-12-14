/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 24;i_4 += 1)
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] = (((arr_2 [i_0] [i_0]) ? 1599723797 : (((var_5 || (arr_2 [i_2] [i_3]))))));
                            var_11 *= ((9016216641402010086 | (!32)));
                        }
                        var_12 = ((1 ? (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0]) / (arr_2 [i_0] [i_1]))) : var_5));
                        var_13 = (((7993 ^ var_2) / ((((arr_7 [i_0] [i_1] [i_2] [i_3]) != (arr_4 [i_3] [i_2] [i_1]))))));
                        arr_11 [i_0] = var_4;
                        var_14 = (max(var_14, ((((arr_9 [i_3] [i_1] [i_2] [i_2] [i_1] [i_0 - 2]) % (arr_9 [i_2] [i_3] [i_2] [i_1] [i_3] [i_0 - 2]))))));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_15 = (min(var_15, (((+((((((arr_6 [i_5] [i_2] [i_1] [i_0]) <= 39804))) % (((arr_5 [i_0] [i_0] [i_0] [i_0]) & 40)))))))));
                        arr_14 [i_0] [i_2] = ((var_9 ? 43 : (~57526)));
                    }
                    var_16 = (max(var_10, var_7));
                    var_17 = (((((var_10 >> (((max(var_2, 1037977631)) - 1037977583))))) ? ((((min(1, 9016216641402010088))) ? (((((arr_0 [i_1] [i_2]) != var_2)))) : (arr_3 [i_0] [i_1] [i_2]))) : ((-(arr_8 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                    var_18 = (max(var_18, (((+(((arr_6 [i_0 - 2] [i_0] [i_0] [i_0]) >> (((arr_6 [i_0 + 1] [i_0] [i_0] [i_0]) - 9246356344515318591)))))))));
                }
            }
        }
        arr_15 [i_0] = ((((((arr_2 [i_0] [i_0]) >> (((max(9430527432307541530, (arr_13 [i_0] [i_0]))) - 18446744073709551536))))) != ((((((arr_1 [i_0] [i_0]) ^ (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((9016216641402010072 ? 127 : 57562))) : (arr_9 [i_0 + 1] [i_0] [i_0] [i_0] [18] [i_0])))));
        var_19 = (max(var_19, (((!(((var_10 ? (((arr_3 [i_0] [i_0] [i_0]) + 9016216641402010065)) : var_9))))))));
        arr_16 [i_0] = (arr_3 [i_0] [i_0] [i_0 - 2]);
    }
    var_20 = (min((min(57555, var_9)), (9016216641402010080 != var_10)));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            {
                var_21 = (((((min((arr_7 [i_6] [i_6] [i_7] [i_7]), var_0)) * 9016216641402010077)) != 63));
                var_22 -= var_8;
                arr_21 [i_6] [i_6] = (((((9016216641402010087 ? 8 : 163))) ? (max(2893491923, (min((arr_5 [i_6] [i_6] [i_6] [i_6]), 9430527432307541523)))) : (((((-1 ? 1 : -85)) & (~var_7))))));
            }
        }
    }
    #pragma endscop
}

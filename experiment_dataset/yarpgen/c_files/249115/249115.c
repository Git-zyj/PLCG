/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_16 = ((2329773001 * (1 / 5350247283069184623)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_17 &= ((1965194311 & 1) - 16187);
                            var_18 -= ((((((arr_2 [i_0]) == (arr_1 [i_2] [i_2])))) <= (((-16187 + 2147483647) << (((var_9 + 20063) - 10))))));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_19 = (max(var_19, (((((65520 >> (1 ^ 1))) & ((min(((min(1, 0))), 254))))))));
                var_20 = (min(var_20, (((((((min((arr_10 [i_0] [2] [16] [i_0] [2] [i_1] [10]), (arr_6 [i_0])))) && (var_10 && var_15))) && (((((arr_0 [i_0] [i_0]) && var_2)) || var_9)))))));
            }
            var_21 = (max(var_21, (((((((((arr_6 [i_0]) || (arr_8 [i_1] [i_1] [i_0] [2] [2] [i_0]))))) ^ ((var_5 - (arr_5 [i_0])))))))));
            var_22 = (((((var_3 && (-16188 && var_3)))) <= ((((var_8 < var_12) < ((46 >> (((arr_10 [i_0] [0] [i_0] [i_0] [i_0] [i_1] [2]) - 13199)))))))));
            var_23 = (min(var_23, ((max((((-83 + 515407567) + (min(1, 536870911)))), (((min(1515245827, 99)) + (-16181 - 10))))))));
        }
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            var_24 = (min((((min(var_12, 890422801)) + 8126464)), ((((var_15 | var_13) && 65525)))));
            var_25 = (min(var_25, (((((((((arr_7 [i_0] [1] [i_0]) >= (arr_6 [i_0])))) + (-1657046561 | var_1)))) || ((min((570769399 / 57531), (var_6 <= var_4))))))));
            var_26 &= (3758096375 && 1);
            arr_18 [i_0] [i_0] = ((((((((var_0 >> (33873 - 33826))) < 2103939770)))) ^ (((0 / (arr_2 [i_0]))))));
        }
        var_27 = (min(var_27, var_4));
        arr_19 [i_0] [i_0] = (((max(8651591786976392084, 16185)) + 32765));
        var_28 = (((13813054577893970161 + ((((arr_5 [i_0]) || var_4))))));
    }
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = (((((47673 <= (1299610268 <= 1)))) & ((((min(24576, (arr_1 [i_7] [i_7])))) + (((arr_22 [i_7 - 1]) - 65535))))));
        var_29 = (min(var_29, (((var_14 % ((min((((arr_21 [i_7]) * 2792846257)), (((arr_1 [i_7] [i_7]) | 2838729558))))))))));
        var_30 = (((((arr_3 [17] [1] [1]) & (arr_12 [6] [6] [1])))));
    }
    var_31 = ((((max(var_9, var_8))) + (min((max(var_0, var_9)), (((var_3 << (var_11 - 1506954828))))))));
    #pragma endscop
}

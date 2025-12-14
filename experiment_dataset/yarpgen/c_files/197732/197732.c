/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (((((min(var_12, 1)))) * (arr_2 [i_0])));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_14 = (var_2 || var_5);
                    var_15 = -125;
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_16 = (min((arr_6 [i_3] [i_3] [i_1]), var_5));
                    var_17 = (min((((!(arr_2 [i_0 + 2])))), (min((arr_3 [i_0 - 1] [i_0 + 4]), 2161727821137838080))));
                    arr_12 [i_0 + 1] [i_3] [i_3] &= ((-(((((-32767 - 1) ? var_4 : (-2147483647 - 1)))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_18 = ((-(arr_14 [i_0 + 4])));
                        var_19 = var_2;
                        var_20 ^= (2161727821137838097 ? (arr_4 [i_0]) : var_1);
                    }
                    for (int i_5 = 4; i_5 < 14;i_5 += 1)
                    {
                        var_21 += var_11;
                        arr_18 [i_1] = (((((+(((arr_9 [i_5]) ? var_8 : (arr_0 [6])))))) ? (min((min(-359273185, (arr_10 [i_5 - 2]))), (!16285016252571713536))) : (min(((var_13 ? 125 : 190)), (((!(arr_7 [i_1] [14] [i_1]))))))));
                    }
                    arr_19 [i_1] = min((arr_3 [i_0] [i_0]), (((!(arr_9 [9])))));
                }
                var_22 = 126;
                arr_20 [i_0] [i_1] = (((((-(((arr_1 [12]) ? (arr_7 [i_0] [i_1 - 1] [i_0]) : var_3))))) ? (((34359738367 ? 32768 : var_4))) : 1));
                arr_21 [i_0 + 1] [i_0] [i_0] &= var_4;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            {
                var_23 = ((((((((var_11 << (var_13 + 10)))) ? 82638722 : (((var_13 + 2147483647) << (18446744039349813248 - 18446744039349813248)))))) ? var_1 : -114));
                var_24 = (max(var_24, (~82638726)));
            }
        }
    }
    #pragma endscop
}

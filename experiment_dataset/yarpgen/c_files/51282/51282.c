/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((((!(arr_2 [i_0 - 2] [i_0 - 1]))) ? (((arr_0 [18]) ? ((((arr_2 [i_0 - 1] [14]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) : (((arr_2 [i_0] [8]) & var_5)))) : (((((arr_0 [i_0 - 2]) < (arr_0 [i_0 - 2])))))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0 - 2] [i_0] [i_1] = ((min(var_12, var_13)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_15 [i_0] [i_1 + 3] [i_2] [i_1] = var_11;
                        var_15 += ((!(((~(((arr_6 [i_0] [i_0]) ? var_3 : (arr_11 [i_0] [i_0] [i_2] [i_3]))))))));
                        arr_16 [i_1] = (((((var_8 ? var_2 : (arr_10 [i_0] [i_2])))) ? (((arr_0 [i_3]) + (arr_12 [i_0 - 2] [i_1 + 3] [i_3 - 1] [i_3 - 2]))) : (min((max(10591976001496251397, (arr_2 [i_2] [i_1]))), (var_11 == 7854768072213300233)))));
                        var_16 = (i_1 % 2 == zero) ? ((((((((var_9 >> (((arr_14 [i_1]) - 4139462457549040313))))) ? (((10591976001496251397 >= (arr_4 [15])))) : ((min(var_7, (arr_9 [i_0] [i_0 - 1] [i_0] [16])))))) << (var_10 - 2161333331513668808)))) : ((((((((var_9 >> (((((arr_14 [i_1]) - 4139462457549040313)) - 9435021972154965446))))) ? (((10591976001496251397 >= (arr_4 [15])))) : ((min(var_7, (arr_9 [i_0] [i_0 - 1] [i_0] [16])))))) << (var_10 - 2161333331513668808))));
                        arr_17 [i_1] [i_1 - 1] [i_1 + 2] [i_2] [i_3] [i_3] = (arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 - 1]);
                    }
                }
            }
            arr_18 [20] [i_0] [i_1] |= ((((var_10 ? (arr_10 [i_0 - 1] [i_1 - 1]) : (arr_10 [i_0 + 1] [i_1 + 1])))) ? (arr_8 [i_0] [i_1 - 1]) : var_0);
        }
        arr_19 [i_0] = var_1;
        arr_20 [i_0 + 1] = ((max((arr_12 [i_0] [i_0] [i_0] [i_0 - 2]), (arr_12 [i_0] [i_0] [i_0 - 1] [i_0 - 2]))) & (((arr_12 [i_0] [6] [i_0] [i_0 - 2]) ? (arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 2]) : (arr_12 [16] [17] [16] [i_0 + 1]))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_17 = ((-(7854768072213300224 || 10591976001496251402)));
                arr_25 [i_4] [i_5] |= ((!((max((arr_12 [i_5] [i_4] [i_4] [i_4]), ((var_7 ? var_0 : (arr_22 [i_4]))))))));
                arr_26 [i_4] |= 10591976001496251396;
                arr_27 [i_4] [2] [i_5] = (((arr_1 [i_4]) < (((!7854768072213300219) % (arr_10 [i_4] [i_4])))));
            }
        }
    }
    var_18 = var_10;
    var_19 = ((!var_6) | (max(var_13, (7854768072213300209 * var_4))));
    #pragma endscop
}

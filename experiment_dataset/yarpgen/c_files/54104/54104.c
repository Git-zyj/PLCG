/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 0;
    var_13 = (min(var_13, ((-((((0 != 0) && (var_2 | var_1))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = ((((((var_10 ^ (arr_1 [i_0] [i_0]))) - 1849213287)) ^ (min(((-2038903711 ? (arr_2 [i_0]) : (arr_2 [i_0]))), var_11))));
        var_15 = -1;
        arr_4 [i_0] = ((((max(var_11, 1)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_16 = (min(var_16, (((1 ? ((-22 | (arr_7 [i_4]))) : 1)))));
                            arr_16 [i_4] = (max((34200 ^ var_11), 49741));
                            var_17 = (max(((0 ? var_1 : ((var_2 ^ (arr_13 [i_0]))))), ((29739 ? -19 : 1))));
                        }

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_18 = ((((((arr_18 [i_0] [i_1] [i_2] [i_3] [i_0] [i_5]) ? (arr_7 [1]) : (arr_3 [i_1]))) ^ (((arr_8 [i_0] [14] [i_0] [i_0]) ? var_9 : 1)))));
                            var_19 = (((((!(arr_14 [i_1] [i_3]))) ? (arr_8 [i_2] [i_2] [i_2] [i_2]) : (arr_13 [i_5]))));
                            var_20 ^= (((((((min(var_1, (arr_8 [i_0] [i_0] [i_0] [7])))) ? 1 : (arr_14 [i_0] [i_1])))) ? var_10 : (((var_7 <= (((arr_7 [i_3]) ? var_9 : 1)))))));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_21 = (arr_13 [1]);
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_6] = (((((((0 ? (arr_18 [i_0] [i_1] [1] [i_3] [i_6] [i_1]) : (arr_11 [i_0] [i_2] [i_6] [9] [i_6]))) >= ((1 ? 35380442 : 557619839))))) - 22226));
                            arr_22 [16] [15] [i_6] [1] [1] = (2038903710 > -555853297);
                        }
                        arr_23 [i_0] [15] [1] [4] = var_4;
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_22 = (((((arr_2 [i_7]) ? (arr_10 [13] [i_7] [i_7]) : var_0)) >= (((1 > (((1 || (arr_26 [i_7])))))))));
        var_23 = (24398 + var_10);
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
    {
        var_24 += 1;
        var_25 = (max((min((arr_17 [i_8] [1] [5] [i_8] [i_8]), 20793)), (arr_17 [i_8] [i_8] [i_8] [i_8] [i_8])));
        var_26 = (((((arr_9 [i_8] [i_8] [i_8]) ? (arr_9 [18] [i_8] [i_8]) : (arr_9 [i_8] [14] [i_8]))) - ((((arr_9 [i_8] [1] [i_8]) != var_9)))));
        arr_30 [i_8] = (max(204290956, -17038));
        var_27 = ((((((max(var_5, -17038))) / (max((arr_12 [i_8] [i_8] [i_8] [i_8] [3]), (arr_27 [i_8]))))) == (max((((arr_24 [i_8]) ^ (arr_24 [i_8]))), (((!(arr_8 [11] [i_8] [1] [i_8]))))))));
    }
    #pragma endscop
}

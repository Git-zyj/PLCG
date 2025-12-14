/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 = ((((((14237614996464971551 ? var_7 : 47094)) * var_16)) & ((((var_8 < 1) != -var_4)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_22 = ((((min((arr_2 [i_0]), (min(var_0, (arr_2 [i_0])))))) ? (((!1478031194160959396) - ((min((arr_0 [i_0] [i_1]), var_7))))) : ((-(arr_0 [1] [i_0])))));
            var_23 *= (min((min((arr_3 [i_1] [i_0]), (arr_1 [i_1] [i_0]))), (min((arr_3 [i_0] [i_0]), (arr_3 [16] [i_0])))));
        }
        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            var_24 -= 0;
            var_25 = -1;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_26 = (min(var_26, ((((min((arr_8 [1] [i_3] [i_3]), (((47106 && (arr_7 [17] [17])))))) == (arr_9 [4] [4]))))));
            arr_10 [i_0] [i_0] = 3356719488;
            var_27 = (((((47115 & 30) << (18 - 1)))) ? (((arr_1 [i_0] [i_3]) ? (arr_6 [i_0]) : 49)) : (min((arr_6 [i_0]), (arr_6 [i_0]))));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    {
                        var_28 &= -1;
                        var_29 = ((((arr_17 [i_4] [i_6 - 1] [i_6 + 1] [i_4]) ? (arr_17 [i_4] [i_6] [i_6 + 1] [i_4]) : (arr_17 [i_4] [1] [i_6 + 1] [i_4]))));
                        var_30 += ((((min((min(var_13, var_12)), var_14))) ? ((((arr_8 [i_5 - 2] [i_0] [i_6 + 1]) > var_5))) : (((arr_15 [i_5 + 1] [i_0] [i_5 + 1]) ? 49 : (arr_14 [i_5 + 1] [i_5 - 2] [i_5 + 1])))));
                        arr_18 [i_6] [i_4] [i_4] [i_0] = min(((~(arr_8 [i_0] [i_4] [i_6]))), ((((min(-278228378126286305, (arr_16 [i_6]))) / (((((arr_14 [13] [i_5] [i_6]) <= 1))))))));
                    }
                }
            }
        }
    }
    var_31 = ((-(min(-var_1, 11))));
    var_32 = ((((((!(((var_0 >> (var_3 - 203)))))))) % (((2361025353 - var_1) * var_3))));
    #pragma endscop
}

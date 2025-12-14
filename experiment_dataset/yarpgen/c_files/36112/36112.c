/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 ^= ((~((((((199 % (arr_4 [5])))) || 179)))));
                    var_21 -= 81;
                    var_22 *= 41;
                    arr_9 [i_0] [1] [i_2] &= (arr_5 [i_0 - 1] [i_0 + 1] [i_0]);
                }
            }
        }
        var_23 ^= ((~(57703 + var_10)));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_24 = (max(var_24, (((-(arr_8 [6]))))));
        var_25 |= ((((!((((arr_0 [i_3]) ? var_4 : (arr_4 [i_3])))))) || 204));
        var_26 ^= (arr_6 [i_3] [i_3] [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_27 ^= (arr_10 [i_3]);
                        var_28 &= (max((((var_14 || ((max((arr_8 [i_3]), (arr_8 [i_3]))))))), ((~((1 >> (((arr_17 [i_6] [6] [i_3]) - 4177283474))))))));

                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            var_29 += ((~(((!(((var_0 ? (arr_12 [i_3] [i_3] [i_3]) : 3980581621))))))));
                            var_30 = (max(var_30, 19));
                            var_31 &= (((max((((~(arr_0 [i_4 + 1])))), ((199 ? -554209085 : (arr_2 [i_3]))))) / ((((arr_5 [i_3] [i_3] [i_7 - 1]) ? (((18198 ? 170 : (arr_8 [13])))) : (arr_21 [i_4] [i_4] [i_4] [i_4 + 1] [4]))))));
                            var_32 &= ((+(((arr_22 [i_7 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4]) / (arr_0 [i_7 + 3])))));
                            var_33 ^= var_12;
                        }
                    }
                }
            }
        }
    }
    var_34 = (max(var_34, ((min(95, (4294967295 % var_5))))));
    #pragma endscop
}

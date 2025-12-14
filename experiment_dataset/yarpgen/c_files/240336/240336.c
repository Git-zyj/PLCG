/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (max(var_13, (((((var_2 ? (1 != var_11) : var_1))) ? ((((((-2554766967801134254 ? 4077193229 : var_5))) ? 1 : ((452594105 ? 1 : 32738))))) : (min(var_4, (var_6 % -32746)))))));
    var_14 = (-1860 / -18);

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [1] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = (((1 ^ ((max(-9837, (arr_1 [2] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_15 = ((1 ? (((arr_7 [i_1]) ? -48 : (arr_7 [i_1]))) : ((((arr_7 [i_1]) || (arr_7 [i_1]))))));
        var_16 *= ((min(4077193210, -2096678387)));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = (arr_9 [i_2]);
        var_17 = (min(var_17, ((((arr_5 [i_2] [i_2 + 1]) || ((((arr_10 [1]) ? (30929 || 0) : (((arr_2 [18]) ? (arr_6 [i_2] [i_2]) : (arr_11 [i_2] [i_2])))))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_18 = (max(((-(arr_15 [7] [i_2]))), (((arr_7 [18]) ? (((arr_6 [23] [i_4]) ? (arr_15 [i_2] [i_2]) : -540589237)) : ((((arr_10 [i_2]) || -7831328719757574514)))))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_19 = (arr_16 [i_2] [5]);

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_20 *= (-452594087 - -32751);
                            var_21 ^= (((arr_21 [i_3] [i_3] [i_4] [i_2 + 1] [8] [i_2]) / (arr_7 [i_2])));
                            arr_26 [i_2 - 1] [i_3] [i_4] |= (1073741823 ? (arr_21 [i_3] [i_6] [i_6] [i_6] [i_4] [i_3]) : -32744);
                            arr_27 [3] [i_5] [i_4] [i_2] [i_3] [i_2] [i_2] = ((arr_13 [8] [8] [i_4]) ? (arr_22 [i_2] [i_3] [i_2] [i_5] [i_6] [i_5] [i_2 + 1]) : (arr_15 [12] [i_2]));
                            var_22 = (((arr_25 [i_2 - 1]) && (arr_25 [i_2 + 1])));
                        }

                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, 1));
                            var_24 = ((((((arr_7 [i_2 + 1]) ^ ((max((arr_24 [i_2] [1] [i_4] [i_3] [i_2]), -9)))))) ? ((((((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_18 [i_2] [i_2] [i_2]) : 452594088)) <= (-8812 <= 906)))) : (!-4)));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_25 = arr_29 [i_2] [9];
                            arr_33 [i_5] [i_2] = ((-14117 ? (arr_22 [i_2] [i_2] [i_3] [i_4] [i_5] [i_8] [i_4]) : (-1339814752 <= 1)));
                            var_26 = (min(var_26, ((((arr_30 [i_2] [i_3] [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? -6 : 5801994633441068271)))));
                            var_27 = (((((-117 ? 14355 : (arr_16 [i_2] [i_3])))) <= (((arr_18 [i_2] [i_2] [i_8]) ? (arr_21 [i_2] [i_2] [i_8] [i_8] [i_8] [i_8]) : (arr_13 [i_2] [4] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 23;i_9 += 1)
    {
        var_28 *= ((arr_7 [i_9 - 1]) || (((43832 ? 14355 : (arr_0 [i_9 + 1])))));
        var_29 = (arr_34 [i_9]);
    }
    var_30 = var_5;
    #pragma endscop
}

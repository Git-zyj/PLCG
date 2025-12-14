/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190333
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-67)) + (2147483647))) << (((((/* implicit */int) (short)11630)) - (11630)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] |= ((((/* implicit */int) (short)-11631)) % (((/* implicit */int) (short)-11630)));
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0 - 1]);
        arr_5 [i_0] = ((/* implicit */unsigned int) ((arr_2 [i_0 + 4]) << (((((var_8) + (7223734634632900247LL))) - (43LL)))));
        var_16 = ((/* implicit */signed char) ((unsigned char) arr_2 [i_0 + 2]));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 4; i_2 < 10; i_2 += 1) 
        {
            for (short i_3 = 3; i_3 < 12; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        arr_17 [i_1] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 - 1] [i_1 + 3]))) ^ (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                        var_17 = ((unsigned long long int) -6854235798038141432LL);
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            arr_21 [i_4] [i_4] [i_3 - 3] [i_1] = ((/* implicit */short) ((var_12) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2 + 3])))));
                            var_18 = ((/* implicit */int) ((arr_14 [i_1] [i_1]) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)38103)))))));
                            var_19 = ((/* implicit */long long int) (((-(arr_11 [i_1] [i_3 + 1] [i_3] [i_3]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1716886185U)) ? (arr_1 [(short)3] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_2] [i_3 - 2] [i_3 - 2] [(short)9] [i_5]))))))));
                        }
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1 + 4] [i_1 + 3] [i_1] [i_1] = (+(((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6]))))));
                            var_20 = ((/* implicit */unsigned char) var_4);
                        }
                        for (short i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) ((1320376067U) == (((/* implicit */unsigned int) 946887303))));
                            var_22 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) var_5)))));
                            arr_28 [i_4] [i_2] [i_1] [i_4] [i_7] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_1 - 1] [i_2 + 4] [i_3 - 2] [i_1] [i_7])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)1))));
                        }
                        for (short i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
                        {
                            var_23 |= ((((/* implicit */_Bool) arr_10 [i_1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)88)))) : (((((/* implicit */_Bool) arr_18 [i_1 - 1] [i_2 - 1] [i_3] [i_3] [i_4] [i_8])) ? (10773444033105255939ULL) : (((/* implicit */unsigned long long int) arr_23 [i_3] [i_8])))));
                            arr_31 [i_1] [i_4] [i_2 + 3] [i_2 + 3] [i_1] = ((/* implicit */unsigned short) arr_8 [(unsigned short)4] [i_1 - 1] [i_1 - 1]);
                        }
                        var_24 = var_0;
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 2) 
                        {
                            arr_34 [i_1] [1ULL] [1LL] [i_1 + 1] [i_9] = ((/* implicit */unsigned short) ((long long int) arr_9 [i_1]));
                            arr_35 [3LL] [i_1] [3LL] [i_1] [i_9] [i_1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_14))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_13 [i_1 + 4] [i_1]))))))));
                        }
                    }
                } 
            } 
        } 
        arr_36 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7498))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_1 + 1] [i_1 + 2] [i_1] [i_1 + 3])) ? (arr_29 [i_1] [i_1] [i_1] [6U] [6U]) : (((/* implicit */int) var_9)))))));
        var_25 = var_10;
        arr_37 [2] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_1 + 2] [i_1 + 4])) / (((/* implicit */int) arr_13 [i_1] [i_1 + 3]))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
    {
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            {
                arr_42 [i_10] [i_10] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2125480027595728729LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_13)))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_10]))) : (((((/* implicit */_Bool) arr_10 [i_10] [(unsigned char)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1))))))));
                arr_43 [i_11] = ((/* implicit */long long int) ((max((max((var_12), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) arr_32 [0LL] [i_11] [i_11] [i_10] [i_11])))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_10] [i_11])) ? (((/* implicit */int) arr_0 [i_11] [i_10])) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8))))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234229
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */int) (unsigned char)255);
            var_16 &= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) % (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 1]))));
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 2] [(unsigned short)4]))) == (arr_2 [i_0] [i_0] [i_2])))));
                var_18 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)249)) + (((/* implicit */int) (unsigned char)62))));
                arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) (signed char)104);
                var_19 = ((/* implicit */unsigned char) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                arr_11 [i_0] [i_1 + 2] [15] [i_1] = ((/* implicit */unsigned char) var_10);
            }
            for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            arr_19 [i_0 + 1] [i_0] [i_1] [i_0 - 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) / (var_6))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)48)) % (((/* implicit */int) (unsigned char)7)))))));
                            arr_20 [1LL] [i_1] [i_3] = ((/* implicit */signed char) arr_5 [i_0] [i_0 + 1] [i_3]);
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_13 [i_0 + 3] [i_0]))));
            }
            for (short i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (short)-921))));
                var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                var_23 ^= ((/* implicit */int) ((arr_2 [i_0 + 1] [i_0 + 1] [i_6]) * (arr_2 [i_0 - 1] [i_1 - 2] [i_6])));
                var_24 = ((/* implicit */unsigned short) var_5);
            }
            for (short i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                arr_25 [i_1] = ((/* implicit */_Bool) (+(((7215940873439067018ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 2] [i_1])))))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) - (var_5)));
            }
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (-(((int) var_4)))))));
                            arr_34 [i_1] [i_9] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (var_0) : (var_0)));
                        }
                    } 
                } 
            } 
        }
        var_27 ^= ((/* implicit */unsigned int) (unsigned char)77);
        var_28 -= ((/* implicit */long long int) ((unsigned long long int) var_10));
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 2) 
    {
        var_29 += ((/* implicit */unsigned int) (short)7680);
        /* LoopNest 2 */
        for (signed char i_12 = 4; i_12 < 12; i_12 += 2) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_43 [i_12] |= ((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) ((((/* implicit */int) (unsigned short)65517)) < (((/* implicit */int) var_8)))))));
                    var_30 = ((/* implicit */int) arr_27 [i_11 + 1] [i_12]);
                    arr_44 [i_11 + 2] [i_11] [i_11 + 2] = ((arr_22 [i_11 + 1]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_22 [i_11 + 1])));
                    /* LoopSeq 1 */
                    for (signed char i_14 = 1; i_14 < 12; i_14 += 1) 
                    {
                        arr_48 [i_11] [i_11] [i_11] [i_11] [i_11 + 1] [4] = ((/* implicit */long long int) (+(var_0)));
                        var_31 |= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_7)))) & (var_0)));
                    }
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned int) var_12);
        var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (593447080976855231LL)))) ? (arr_26 [i_11] [i_11 - 1] [i_11 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5468)))));
    }
    for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
    {
        var_34 = ((/* implicit */unsigned short) var_12);
        /* LoopSeq 2 */
        for (unsigned char i_16 = 1; i_16 < 23; i_16 += 1) 
        {
            arr_56 [i_15] = arr_54 [i_15] [i_15] [(signed char)12];
            var_35 += max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)81)) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_53 [i_15] [i_15] [i_15]))))))), (arr_55 [i_15]));
        }
        for (unsigned short i_17 = 3; i_17 < 23; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_18 = 3; i_18 < 23; i_18 += 2) 
            {
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    {
                        var_36 |= max((((/* implicit */int) arr_54 [i_17 - 2] [i_17 - 3] [i_17 + 1])), ((-(((/* implicit */int) var_10)))));
                        arr_64 [i_15] = ((/* implicit */long long int) ((int) ((signed char) -4356029251219181195LL)));
                        arr_65 [(short)3] [i_17] [3LL] [i_18] [3LL] = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) (unsigned char)14)), (0LL)))))));
                        arr_66 [i_15] [i_15] [i_18 - 2] [20] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) max((((unsigned long long int) arr_57 [i_15] [i_15] [i_15])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))))))));
                        var_37 = 36028247263150080ULL;
                    }
                } 
            } 
            var_38 = var_1;
            var_39 += ((((/* implicit */_Bool) arr_53 [i_17 - 1] [i_15] [i_15])) ? (max((((/* implicit */unsigned int) (signed char)-63)), (arr_63 [i_17] [i_17] [i_17 - 2] [i_17 - 1] [i_17 + 1] [i_17 - 3]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) % (((/* implicit */int) max(((unsigned short)16256), (arr_52 [i_15]))))))));
            var_40 = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_53 [i_17 - 3] [0ULL] [i_17 + 1]))))), (((((/* implicit */_Bool) (unsigned short)59724)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_63 [(unsigned short)22] [(unsigned short)22] [23ULL] [i_17 + 1] [i_17 - 2] [12LL])))));
        }
    }
    var_41 &= ((/* implicit */unsigned int) 9151314442816847872ULL);
    var_42 = ((/* implicit */unsigned long long int) var_12);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25524
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
    var_20 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) >> ((((~(((/* implicit */int) (unsigned char)15)))) + (46)))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)11)) + ((+(((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((var_16) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */int) ((arr_3 [i_1]) >> (((((/* implicit */int) (unsigned char)225)) - (219)))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 1; i_3 < 8; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_4 = 1; i_4 < 7; i_4 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_4] [i_3 + 2] [i_3 + 2])))) ? (((/* implicit */int) ((arr_6 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))) : ((-(((/* implicit */int) (unsigned char)48)))))))));
                    var_25 ^= ((/* implicit */_Bool) arr_3 [(unsigned short)2]);
                }
                for (unsigned int i_5 = 1; i_5 < 7; i_5 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) arr_12 [i_5]);
                    var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_0 [i_3]))))) || (((/* implicit */_Bool) ((472562971) << (((3891540652424501314LL) - (3891540652424501313LL))))))));
                }
                var_28 = ((/* implicit */short) (+(var_16)));
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3]))))) - ((-(((/* implicit */int) arr_1 [i_1]))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_1] [i_2] [(short)10])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_6] [i_2])))))));
                var_31 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)66))));
            }
            for (int i_7 = 2; i_7 < 8; i_7 += 3) 
            {
                /* LoopSeq 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_23 [i_1] [i_2] [i_7] [i_8] = (+(arr_16 [i_7 + 1] [i_7] [9ULL] [i_7]));
                    arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)225))))));
                    var_32 *= arr_11 [i_1] [i_7 + 1] [i_7 + 1];
                    var_33 = ((/* implicit */short) (~((-(arr_19 [3ULL] [6LL])))));
                }
                for (unsigned char i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)25972))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_31 [i_1] [i_2] [i_7] [i_1] [i_10 - 1] = ((/* implicit */short) var_13);
                        var_35 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (unsigned char)134))))));
                    }
                    var_36 += ((/* implicit */signed char) (((~(arr_18 [i_9]))) & (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_7 + 3]))) / (arr_25 [i_1] [i_2] [i_7 - 2] [7U])))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    var_37 = ((/* implicit */unsigned short) (+(arr_16 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])));
                    var_38 ^= ((/* implicit */unsigned short) ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_39 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -472562963)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))) : (0LL)))));
                        var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)252))));
                        var_41 = ((/* implicit */short) var_8);
                    }
                    for (signed char i_13 = 3; i_13 < 10; i_13 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_1] [i_13 + 1] [i_7 - 1] [i_2] [0LL])) == (((/* implicit */int) (signed char)-62)))))));
                        var_43 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (arr_3 [i_11]))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_11] [i_11]))) ^ (var_12)))) : ((~(arr_12 [i_11])))));
                        var_44 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_1] [i_2] [i_7] [i_13 - 3] [7] [i_1])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_19))))))));
                        var_45 = var_1;
                    }
                }
                arr_40 [i_1] [i_1] [i_1] [i_1] = var_3;
                var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) / (((/* implicit */int) arr_36 [i_2] [i_7 - 1] [i_7 + 3] [i_7 + 3] [i_7] [i_7 + 1] [i_2])))))));
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    var_47 += ((/* implicit */signed char) 2800593487U);
                    arr_44 [i_1] [i_2] [i_7] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_39 [(unsigned char)4] [i_7 + 1] [i_2] [i_7] [i_7 + 2] [i_7 + 3]))));
                    var_48 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)201)) + (((/* implicit */int) var_0))))));
                    var_49 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_7 + 3] [i_14] [i_7 + 3]))));
                }
            }
            var_50 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] [i_1])) && (((/* implicit */_Bool) 0U))));
        }
        for (short i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
        {
            var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) arr_42 [(_Bool)1] [i_1] [i_1] [i_1]))));
            /* LoopSeq 1 */
            for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                var_52 = ((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_1]);
                var_53 -= ((/* implicit */unsigned long long int) arr_45 [i_1] [i_15] [i_15]);
                var_54 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)-5664)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15] [6] [i_15])))))));
                var_55 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_16])) / (arr_27 [i_1] [i_1] [3ULL] [i_16] [i_16])));
                arr_51 [i_1] [i_15] [i_15] [i_1] = ((/* implicit */unsigned char) (signed char)66);
            }
        }
        var_56 *= (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_39 [i_1] [i_1] [2ULL] [i_1] [i_1] [i_1])) <= (var_10)))));
        var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) (unsigned short)3968)) ? (((/* implicit */unsigned long long int) 206158430208LL)) : (arr_26 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12936)))));
    }
    var_58 += ((/* implicit */unsigned short) min(((-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1))))))), (((/* implicit */int) (unsigned char)18))));
    var_59 = ((/* implicit */signed char) (+(((/* implicit */int) var_19))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248756
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
    var_16 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        arr_3 [i_0] = ((/* implicit */long long int) var_13);
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_1] [i_2 - 1] [i_2] = ((/* implicit */unsigned short) arr_6 [i_1]);
            var_18 = ((/* implicit */short) (+(((/* implicit */int) var_8))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) var_14);
            var_20 = ((/* implicit */unsigned short) ((unsigned int) arr_10 [i_1 - 1] [i_3] [i_1]));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned short) arr_10 [i_1] [(short)6] [i_1])))));
            var_22 = ((/* implicit */short) ((((/* implicit */int) (signed char)121)) & (((/* implicit */int) (signed char)-121))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_5 [i_4] [i_5]) % (arr_5 [i_5] [i_4])))) ? (arr_5 [14LL] [i_1 - 1]) : ((~(arr_5 [i_5] [i_4])))));
                arr_17 [i_5] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) var_13);
            }
            for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                arr_20 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) var_5);
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 2) 
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 1])) ? (((/* implicit */int) ((-120919033) != (((/* implicit */int) (signed char)-1))))) : ((~(((/* implicit */int) (signed char)-75))))));
                    arr_24 [i_7] [i_1 + 1] [i_4] [i_1 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-114))));
                    arr_25 [i_7] [i_1] [i_4] [i_1] = ((/* implicit */_Bool) ((signed char) ((int) var_8)));
                    arr_26 [5LL] [i_1] [i_1] = ((/* implicit */signed char) arr_22 [i_7] [i_6] [i_4] [10] [i_1]);
                }
                for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    arr_29 [i_1] [i_1] [i_6] [i_6] [(unsigned char)5] = ((/* implicit */unsigned short) arr_19 [i_1] [i_4] [i_6] [i_4]);
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (arr_2 [i_1 - 1] [i_1 - 1]) : (arr_2 [i_1 + 1] [i_1 - 1])))) && (((/* implicit */_Bool) ((short) arr_2 [i_1 + 1] [i_1 - 1])))));
                    arr_30 [i_8] [i_1] [i_1] [i_1] = ((/* implicit */short) (((~(((/* implicit */int) arr_6 [i_1 - 1])))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 + 1]))))));
                }
                var_26 += ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3072))) > (18446744073709551615ULL)))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((_Bool) (_Bool)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])))))) : ((+(((var_15) >> (((((/* implicit */int) arr_0 [i_1])) + (53))))))))))));
                var_28 ^= arr_0 [i_4];
            }
            for (signed char i_10 = 4; i_10 < 16; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 2; i_11 < 16; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        {
                            var_29 -= ((/* implicit */unsigned long long int) (((+(var_15))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_10 - 3] [i_1 + 1])))));
                            arr_42 [i_1] [i_11] [i_10 - 1] [i_10] [i_4] [i_1] = ((/* implicit */signed char) var_12);
                            arr_43 [i_12] [i_11 - 2] [i_11] [3U] [i_10] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_10] [i_10] [i_10] [13ULL] [i_4] [(short)5]))) : (((long long int) 3ULL)))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */_Bool) arr_31 [i_10 - 2] [i_10 - 1] [i_10]);
                /* LoopNest 2 */
                for (unsigned short i_13 = 2; i_13 < 15; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) ((long long int) var_4))))));
                            arr_49 [i_14] [i_13] [i_10 - 2] [i_13] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_3))) / (((((var_14) + (2147483647))) << (((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_4] [i_10])))) + (28192))) - (10)))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned short) (!((!(arr_1 [i_1 + 1])))));
            }
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1])) < (((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
            arr_50 [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_38 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) arr_2 [i_4] [i_1]))))));
            /* LoopSeq 3 */
            for (unsigned short i_15 = 1; i_15 < 13; i_15 += 3) 
            {
                var_34 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) > (((/* implicit */int) arr_0 [i_1 + 1]))))) & ((+(((((/* implicit */_Bool) arr_47 [i_15] [i_4] [i_4] [i_4] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_19 [i_1] [i_4] [i_15 + 4] [i_1]))))))));
                arr_54 [i_15] [i_4] [i_15] [(unsigned short)4] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_0 [i_1])))))));
            }
            for (int i_16 = 0; i_16 < 17; i_16 += 1) /* same iter space */
            {
                arr_57 [i_1] [i_4] [7ULL] [i_1] = ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */int) var_3)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) arr_31 [i_16] [i_4] [i_1])) != (((/* implicit */int) var_5))))) - (1)))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) ((_Bool) arr_16 [i_1 - 1])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1 - 1])) && (((/* implicit */_Bool) arr_53 [i_4]))))));
                arr_58 [i_1] [i_1 - 1] [i_1] = ((/* implicit */signed char) ((((_Bool) var_15)) ? (((arr_13 [i_1 + 1] [i_1 - 1]) ? (arr_40 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (arr_40 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])));
            }
            /* vectorizable */
            for (int i_17 = 0; i_17 < 17; i_17 += 1) /* same iter space */
            {
                var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1])) ? (arr_5 [i_17] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1]))))))));
                var_36 = ((((/* implicit */int) arr_52 [i_1 - 1] [i_1 - 1] [i_1 + 1] [(unsigned short)2])) >= (((/* implicit */int) arr_52 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1])));
                arr_63 [i_17] [i_17] = ((/* implicit */unsigned int) var_13);
                var_37 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)21))));
            }
            var_38 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_47 [i_1] [i_1] [i_1] [i_4] [i_4] [i_4])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_4] [i_1] [i_1]))) : (arr_5 [i_1] [4LL]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)1)))))))));
        }
        var_39 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_56 [i_1 - 1] [i_1] [0U] [i_1 - 1])) : ((~(((/* implicit */int) arr_12 [i_1])))))));
        arr_64 [i_1] = ((/* implicit */signed char) arr_59 [i_1 - 1] [i_1] [i_1]);
    }
    for (short i_18 = 1; i_18 < 16; i_18 += 3) /* same iter space */
    {
        arr_67 [i_18 + 1] [i_18 - 1] = ((/* implicit */int) (~(1ULL)));
        var_40 = ((((unsigned long long int) arr_9 [i_18 + 1])) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned short) arr_28 [i_18] [i_18 - 1]))))));
        var_41 = ((/* implicit */unsigned long long int) ((signed char) 14256462836013745439ULL));
    }
    var_42 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) 8606401744779217295ULL)))));
}

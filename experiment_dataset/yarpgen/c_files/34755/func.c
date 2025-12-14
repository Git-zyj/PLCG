/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34755
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) >= (max((((/* implicit */long long int) var_0)), (var_14)))));
        var_21 = ((/* implicit */short) (unsigned char)14);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [(unsigned char)8] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_12 [i_0] [i_0] [i_2] [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) ((var_13) >= (arr_4 [i_4]))))))) : (((unsigned long long int) var_5))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), ((-(max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) - (arr_10 [i_0] [i_1] [i_2] [i_1] [i_4]))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                                var_23 -= (+(((arr_13 [i_0] [i_1] [i_2] [i_3]) / (((int) var_12)))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_8 [i_2] [i_0] [i_0] [i_0]) % (((/* implicit */int) (short)12595))))), (((var_14) - (arr_4 [i_0])))))) >= (((((/* implicit */_Bool) var_10)) ? (arr_9 [2LL] [i_1] [0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_14))))));
                    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)250)) >> (((arr_4 [6ULL]) - (6749333300173235838LL)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_26 [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) var_12);
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */long long int) var_16)) / (var_8))) & (var_14)));
                            var_26 = ((/* implicit */unsigned long long int) ((int) (signed char)-72));
                            var_27 *= ((/* implicit */unsigned long long int) arr_17 [i_5] [7LL] [i_7]);
                            arr_29 [(_Bool)1] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                        }
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0])) ? (((/* implicit */int) arr_18 [i_9])) : (((/* implicit */int) arr_18 [i_9])))))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_6] [i_7] [i_9])) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (unsigned char)30)))) : (((((/* implicit */int) arr_22 [i_6] [i_5] [i_6] [i_7] [i_9])) * (((/* implicit */int) (unsigned char)219))))));
                            var_30 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (short)12603)) ? (((/* implicit */long long int) 3844720158U)) : (arr_3 [i_6] [i_7] [i_6]))));
                            var_31 ^= ((/* implicit */unsigned long long int) ((((((-2848217311595537570LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))))) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [8LL] [8LL])) || (((/* implicit */_Bool) var_3))))) - (1)))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) 1402631315U);
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [5LL] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (-(1402631333U)))) : (((arr_10 [9ULL] [9ULL] [i_10] [i_10] [i_10]) / (16090571479402061443ULL)))));
                        var_34 += ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_11] [i_0] [i_0] [i_0]))) / (var_2));
                    }
                } 
            } 
            var_35 = ((/* implicit */long long int) (~(arr_33 [(unsigned char)4] [(unsigned char)4] [i_0] [i_5])));
        }
        for (int i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            arr_41 [i_12] [i_0] = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) var_19)) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((arr_37 [i_0] [8ULL] [i_0]) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))))))));
            /* LoopNest 2 */
            for (signed char i_13 = 3; i_13 < 9; i_13 += 2) 
            {
                for (int i_14 = 3; i_14 < 9; i_14 += 3) 
                {
                    {
                        arr_48 [i_0] = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_12] [i_12] [i_12]);
                        var_36 -= (unsigned char)10;
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned char i_15 = 3; i_15 < 9; i_15 += 2) /* same iter space */
        {
            var_37 |= ((/* implicit */int) ((((long long int) arr_47 [i_0])) < (((/* implicit */long long int) (+(((/* implicit */int) arr_47 [i_15 - 3])))))));
            var_38 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (((arr_38 [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)2] [4LL])))))))) ? ((~(((/* implicit */int) arr_31 [(unsigned short)9] [(unsigned short)9] [i_15] [(unsigned short)9] [i_15])))) : (max(((~(((/* implicit */int) (unsigned char)207)))), (((/* implicit */int) (unsigned char)177)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_16 = 3; i_16 < 8; i_16 += 2) 
            {
                var_39 = ((/* implicit */int) arr_35 [i_15 - 1]);
                var_40 = ((/* implicit */short) var_4);
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                for (int i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    {
                        arr_58 [i_0] = ((/* implicit */long long int) ((((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_0] [i_0] [i_17] [i_17]))))) == (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 9223372036854775808ULL)))) ? (((/* implicit */int) arr_30 [i_0] [i_17] [i_17] [i_18] [i_15 + 1])) : (((/* implicit */int) ((((/* implicit */int) arr_37 [i_18] [i_15] [i_15])) >= (((/* implicit */int) arr_25 [i_0] [i_15] [i_15] [i_17] [i_18] [i_18]))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_41 += ((/* implicit */unsigned int) var_9);
                            var_42 *= ((/* implicit */unsigned short) ((unsigned int) ((2848217311595537583LL) == (((/* implicit */long long int) arr_52 [i_15 - 1] [i_15 - 1])))));
                            var_43 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) arr_32 [i_15 - 3] [i_15 - 1] [i_15 - 1] [i_15 - 3])) : (((/* implicit */int) arr_32 [i_15 - 3] [i_15 - 1] [i_15 - 1] [i_15 - 3])))));
                        }
                        var_44 = ((/* implicit */unsigned char) var_6);
                        arr_62 [i_0] [i_0] [i_17] [(unsigned char)5] = ((/* implicit */_Bool) var_15);
                    }
                } 
            } 
        }
        for (unsigned char i_20 = 3; i_20 < 9; i_20 += 2) /* same iter space */
        {
            var_45 += ((/* implicit */unsigned char) (((+(max((((/* implicit */long long int) arr_18 [9ULL])), (arr_4 [i_0]))))) >= (((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_42 [i_20] [i_0] [i_0])))), (arr_16 [i_0] [i_0] [i_20 + 1]))))));
            var_46 = ((/* implicit */unsigned short) (~(2848217311595537595LL)));
            var_47 -= ((/* implicit */unsigned int) (signed char)-110);
        }
    }
    /* vectorizable */
    for (unsigned char i_21 = 0; i_21 < 11; i_21 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 1) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                {
                    var_48 ^= ((/* implicit */int) var_19);
                    arr_73 [i_22] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (var_2))) * (((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7)))))));
                }
            } 
        } 
        var_49 = ((((/* implicit */_Bool) arr_67 [i_21])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_69 [i_21]));
        arr_74 [i_21] &= ((/* implicit */int) ((((/* implicit */int) arr_67 [i_21])) < (((/* implicit */int) (unsigned char)218))));
        var_50 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_21]))));
        var_51 = ((/* implicit */unsigned int) arr_67 [0U]);
    }
    var_52 ^= (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != ((+(var_2))))))) : (var_3));
    var_53 += ((/* implicit */int) ((((int) var_2)) == (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (unsigned short)42801)))) << ((((~(var_2))) - (4935494852861916623ULL)))))));
    var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (var_10))))));
}

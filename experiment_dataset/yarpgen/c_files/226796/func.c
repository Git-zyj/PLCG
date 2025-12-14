/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226796
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_14)))) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_6))))) | (((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_7);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) min(((signed char)80), ((signed char)83)))), ((-(((/* implicit */int) (signed char)80))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_17 ^= ((/* implicit */_Bool) (+(var_14)));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                for (unsigned int i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    {
                        arr_14 [i_2] [i_3] = ((/* implicit */signed char) var_4);
                        arr_15 [i_3] [i_3] [i_3] = ((unsigned long long int) arr_6 [i_1]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 1) 
            {
                var_18 = (((~(var_12))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_5] [i_5 + 1] [i_5]))));
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 13; i_6 += 1) 
                {
                    for (short i_7 = 2; i_7 < 13; i_7 += 1) 
                    {
                        {
                            arr_27 [i_1] [i_2] [i_5] [i_1] [i_6] [i_5] = var_14;
                            arr_28 [13ULL] [i_5] [i_1] [i_5] [i_1] = (i_5 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_26 [i_1] [i_1] [i_5] [i_5] [i_6] [i_5] [i_7]))))) << (((((((((/* implicit */int) arr_18 [i_5])) + (2147483647))) << (((((/* implicit */int) (signed char)83)) - (83))))) - (2147483557)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_26 [i_1] [i_1] [i_5] [i_5] [i_6] [i_5] [i_7]))))) << (((((((((((/* implicit */int) arr_18 [i_5])) + (2147483647))) << (((((/* implicit */int) (signed char)83)) - (83))))) - (2147483557))) - (10))))));
                            var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) arr_17 [i_7 - 2] [i_6 + 1] [10LL] [i_5])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_21 [i_1] [8ULL])) : (((/* implicit */int) var_2))))));
                            arr_29 [i_5] [i_2] [i_2] [i_1] [i_7] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_18 [i_5]))));
                        }
                    } 
                } 
                arr_30 [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_5 - 2] [i_2] [i_5] [i_1]))));
                var_20 = var_10;
                var_21 *= ((/* implicit */signed char) ((var_4) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) var_7)))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 1) 
            {
                var_22 += ((/* implicit */long long int) ((signed char) arr_10 [i_8 + 1] [i_8] [i_8 + 4]));
                arr_35 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [(unsigned short)10] [i_8 + 2] [i_8 + 2] [i_8 + 2])) ? (arr_13 [8LL] [i_8 + 4] [i_8 - 1] [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                var_23 -= ((/* implicit */unsigned long long int) var_3);
                arr_36 [i_1] [i_1] [i_1] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_3))))));
            }
            arr_37 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(11U)))) ? (((/* implicit */int) arr_18 [(unsigned short)8])) : (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_19 [6LL])))))));
            arr_38 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_32 [i_1]);
        }
        for (long long int i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            var_24 *= ((/* implicit */unsigned long long int) var_0);
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned short i_11 = 2; i_11 < 10; i_11 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_11])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_44 [i_9 + 2] [i_9 + 4] [i_10] [i_11 - 1])))))));
                        }
                        for (unsigned int i_13 = 1; i_13 < 12; i_13 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) (((~(var_15))) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            var_28 = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) (signed char)0)))));
                            var_29 -= ((/* implicit */long long int) ((unsigned long long int) var_4));
                            var_30 = ((/* implicit */long long int) (signed char)93);
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 4) 
                        {
                            var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_1] [i_9])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 29U)) != (var_8)))))));
                            arr_57 [i_1] [i_1] [i_10] [i_14] [i_14] [i_10] [i_10] |= ((/* implicit */unsigned long long int) var_7);
                        }
                        var_32 = ((/* implicit */_Bool) min((var_32), ((((+(arr_10 [i_10] [i_9] [i_1]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_32 [i_1])))))))));
                        arr_58 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) var_1))));
                        arr_59 [i_1] [i_9] [i_1] [i_11] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_10] [i_9])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) arr_48 [i_1] [i_1] [i_9] [i_1] [i_1] [7ULL])))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned long long int) var_11);
            arr_60 [i_1] [i_1] [0ULL] &= ((/* implicit */unsigned long long int) ((11628907714614442681ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_6))))))));
        }
        for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 3) 
        {
            arr_65 [i_1] [i_1] = ((/* implicit */unsigned char) var_10);
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 1; i_16 < 12; i_16 += 4) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    {
                        arr_71 [(signed char)5] [i_15] [i_16] [i_17] = ((/* implicit */signed char) (unsigned char)3);
                        arr_72 [i_1] [i_15] [i_16] [i_17] = ((/* implicit */_Bool) var_8);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_18 = 0; i_18 < 14; i_18 += 1) 
            {
                var_34 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-83)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [3LL] [3LL]))) : (((((/* implicit */_Bool) arr_25 [i_15] [i_15] [i_18] [0ULL] [i_18])) ? (arr_11 [i_1] [i_15] [i_15] [i_18]) : (var_11)))));
                var_35 = ((var_11) == (((/* implicit */long long int) ((/* implicit */int) var_13))));
                arr_75 [12ULL] [i_15] [i_18] [4LL] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)52176))));
            }
            for (unsigned int i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                arr_78 [i_1] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (signed char)-115))));
                var_36 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_19] [i_19]))))) ? (((/* implicit */unsigned long long int) var_11)) : (arr_12 [i_15 + 1] [i_19] [i_15 - 1] [i_15 + 1])));
                /* LoopSeq 1 */
                for (long long int i_20 = 0; i_20 < 14; i_20 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 0; i_21 < 14; i_21 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned short) ((long long int) var_0));
                        arr_86 [i_1] [i_1] [i_19] [i_20] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_20] [i_21]))) | (((((/* implicit */_Bool) arr_25 [i_1] [i_20] [i_19] [i_20] [i_20])) ? (((/* implicit */unsigned long long int) var_12)) : (var_10)))));
                    }
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) var_2))));
                }
            }
        }
        for (short i_22 = 1; i_22 < 13; i_22 += 1) 
        {
            var_39 = ((/* implicit */unsigned long long int) min((var_39), ((+(((((/* implicit */_Bool) var_9)) ? (arr_51 [i_1] [10ULL] [(_Bool)0] [(_Bool)0] [i_22]) : (((/* implicit */unsigned long long int) 21U))))))));
            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551607ULL)) || (((/* implicit */_Bool) -30931228810688534LL))));
        }
    }
    for (unsigned char i_23 = 4; i_23 < 16; i_23 += 4) 
    {
        var_41 &= ((/* implicit */long long int) ((unsigned short) ((((((((/* implicit */int) (signed char)-93)) | (((/* implicit */int) (short)-13015)))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_92 [i_23] [i_23])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65511))))) + (1169996069939122390LL))) - (19LL))))));
        var_42 = ((/* implicit */long long int) (((~(((/* implicit */int) var_13)))) < (((/* implicit */int) arr_92 [i_23] [i_23]))));
        arr_93 [i_23 - 3] [i_23] = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) arr_90 [i_23]))) | (var_12)))));
        arr_94 [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_92 [i_23] [i_23 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))) ? (var_8) : (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))));
        var_43 &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) (signed char)-4)))) : (((/* implicit */int) arr_90 [i_23]))))));
    }
}

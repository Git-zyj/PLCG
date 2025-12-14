/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229024
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32767))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))))))))));
                            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)48))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_18 [i_4] [i_4] = ((/* implicit */long long int) 1152921504606846975ULL);
                            var_17 += ((/* implicit */unsigned int) var_4);
                            var_18 = ((/* implicit */_Bool) (~(((unsigned long long int) ((unsigned int) arr_14 [i_4] [(unsigned char)11] [i_5])))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_14 [i_1] [(_Bool)1] [i_4]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (arr_12 [i_0]) : (var_0)))))) : (((((/* implicit */_Bool) arr_21 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (137438953471LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) : (((unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_0])))))))));
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_6] [i_1]))));
                                arr_28 [(signed char)6] [i_1] [2LL] [i_6] [i_7] [i_8] [i_8] |= min((((((/* implicit */_Bool) arr_3 [i_6] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [6ULL]))) : (var_6))), (min((261888ULL), (((/* implicit */unsigned long long int) (unsigned char)12)))));
                                var_22 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (arr_11 [i_8] [i_7] [i_6] [i_1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (min(((+(var_13))), (min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) 5)), (var_5)))))))));
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((unsigned int) 18446744073709551615ULL)) < (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_9] [i_9] [i_10] [i_10] [i_12] [i_9])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (35184369991680ULL)))) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (unsigned char)255))))));
                                var_25 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_9] [i_9] [i_11]))) : (4294967295U))), (((/* implicit */unsigned int) ((unsigned char) arr_36 [i_10] [i_12] [i_10]))))), (((/* implicit */unsigned int) min((arr_36 [i_9] [i_9] [i_9]), ((signed char)-1))))));
                                var_26 &= ((/* implicit */unsigned long long int) ((unsigned char) max(((~(arr_30 [i_11]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_40 [i_13] [i_12] [i_12] [i_10] [i_11] [i_12] [(signed char)6]))))))));
                                arr_41 [i_9] [i_10] [i_10] [i_13] [i_13] = ((/* implicit */signed char) ((long long int) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_32 [i_10] [i_10] [(unsigned short)2]) : (((/* implicit */int) arr_33 [i_10] [i_12])))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) % (((/* implicit */int) arr_40 [i_9] [i_9] [i_10] [16LL] [i_11] [i_10] [i_11]))))))) ? (((((/* implicit */int) arr_39 [i_9] [i_9] [i_9] [i_10] [i_10] [i_10] [i_11])) | (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_36 [(unsigned char)18] [i_10] [i_11])) : (((/* implicit */int) arr_38 [i_9] [i_10] [i_10] [i_9] [i_9])))))) : (((/* implicit */int) arr_36 [i_11] [12ULL] [i_9]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
    {
        for (long long int i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) 
                        {
                            {
                                arr_56 [i_14] [i_18] [i_18] [i_18] [i_18] [6ULL] [i_18] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)65535))))) ? (((18446744073709551608ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))))) : (((unsigned long long int) arr_42 [i_16]))));
                                var_28 = ((/* implicit */_Bool) max((18446744073709551596ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_53 [i_14] [9ULL] [i_16] [i_14] [i_18])) + ((((_Bool)0) ? (((/* implicit */int) (short)32748)) : (2147483647))))))));
                                arr_57 [i_14] [i_15] [i_16] [i_16] [i_17] [i_18] |= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) arr_50 [i_14] [i_15] [i_16] [(_Bool)1] [i_18]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_51 [i_14] [i_15] [i_16] [i_17])) : (((/* implicit */int) arr_45 [i_17])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_15] [i_16] [i_17] [i_18]))))))));
                                var_29 ^= (((~(((((/* implicit */_Bool) arr_53 [i_14] [18] [4ULL] [i_15] [6ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_14] [i_15] [i_16] [i_17] [i_18]))) : (var_6))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) arr_55 [i_14] [i_15] [(short)21] [8LL] [i_15]))))) ? (((/* implicit */int) (signed char)0)) : ((+(((/* implicit */int) arr_44 [i_18])))))));
                            }
                        } 
                    } 
                } 
                arr_58 [i_14] [i_14] = ((/* implicit */unsigned short) (-((+(var_2)))));
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 22; i_19 += 1) 
                {
                    for (signed char i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) (signed char)(-127 - 1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1073741824U))))))) ? (((((/* implicit */int) ((unsigned char) (unsigned short)65535))) << (((/* implicit */int) (signed char)1)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_60 [i_14] [i_14] [i_14] [i_14])), ((unsigned short)32640)))) ? (((/* implicit */int) max((arr_63 [12ULL] [12ULL] [(unsigned char)18] [19ULL] [(signed char)7]), (arr_63 [4U] [i_14] [i_15] [i_19] [11U])))) : (((/* implicit */int) ((signed char) (signed char)121)))))));
                            var_31 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_14] [i_15] [i_15] [i_19] [i_20])) ? (((/* implicit */int) arr_50 [i_14] [i_15] [i_19] [i_20] [i_15])) : (((/* implicit */int) (signed char)28)))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) var_13)) : ((~(18446744073709551615ULL))))))));
                        }
                    } 
                } 
                var_33 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) min(((short)0), (((/* implicit */short) arr_64 [i_14] [i_14] [i_14] [i_15]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (max((((/* implicit */long long int) var_9)), (268435456LL))))), (((long long int) (~(((/* implicit */int) arr_53 [i_15] [i_15] [i_14] [i_15] [i_14])))))));
                arr_65 [i_14] = var_3;
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_21 = 0; i_21 < 19; i_21 += 3) 
    {
        for (unsigned int i_22 = 0; i_22 < 19; i_22 += 2) 
        {
            {
                var_34 ^= (-(max((16140901064495857664ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))));
                /* LoopNest 2 */
                for (signed char i_23 = 0; i_23 < 19; i_23 += 3) 
                {
                    for (int i_24 = 0; i_24 < 19; i_24 += 4) 
                    {
                        {
                            arr_76 [i_21] [i_21] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_27 [i_24])), (((((/* implicit */int) arr_5 [i_21])) / (((/* implicit */int) var_4))))));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) var_11))));
                        }
                    } 
                } 
            }
        } 
    } 
}

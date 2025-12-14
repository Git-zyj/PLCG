/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42104
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
    var_15 ^= ((/* implicit */int) min((min((9007199254478848ULL), (18446744073709551605ULL))), (min((((/* implicit */unsigned long long int) var_6)), (var_12)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) (_Bool)0))))) * (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_0] [(_Bool)1])), ((unsigned short)65535)))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_1] [i_0])), (18437736874455072779ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 394029191U)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((long long int) arr_10 [(unsigned short)14] [i_1] [i_2 - 1] [i_3]));
                                arr_14 [i_3] [2LL] [i_1] [i_1] [i_3] = ((/* implicit */signed char) min((((/* implicit */short) max(((signed char)122), (((/* implicit */signed char) (_Bool)1))))), (((short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(short)21] [i_1] [i_2] [i_1]))) : (-1982212449963643473LL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 4; i_6 < 9; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)255)) & (arr_18 [i_6] [(short)8]))))) | (((/* implicit */int) (unsigned short)60798))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_19 -= ((/* implicit */long long int) min((((18437736874455072808ULL) ^ (((/* implicit */unsigned long long int) arr_18 [i_6 + 1] [i_6 - 3])))), (((/* implicit */unsigned long long int) -2))));
                            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_23 [0] [i_6] [0] [6U])), (((((/* implicit */int) (short)12)) >> (((((/* implicit */int) arr_2 [i_5] [i_6 - 3] [i_6 - 3])) - (37)))))))) ? (-5939280834171600272LL) : (((/* implicit */long long int) min(((~(((/* implicit */int) arr_7 [i_6 + 2] [i_7] [i_8])))), (((/* implicit */int) arr_16 [i_6 + 1])))))));
                            arr_26 [i_9] &= ((((/* implicit */int) arr_23 [i_6 - 1] [i_6 - 1] [i_6 - 4] [i_6 - 3])) | (((/* implicit */int) max((arr_10 [i_6 - 4] [i_6 - 4] [i_6 - 2] [i_6]), (arr_10 [i_6] [i_6] [i_6 - 3] [i_6])))));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_30 [i_5] [i_8] [i_5] = ((/* implicit */short) 9007199254478841ULL);
                            var_21 = ((/* implicit */unsigned long long int) ((1908442121U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6 - 3] [1LL])))));
                            arr_31 [i_10] [i_6] [i_7] [i_6] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((9007199254478841ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))) ? (((/* implicit */int) arr_2 [i_6 - 3] [i_6 - 4] [i_6 - 3])) : (((/* implicit */int) (short)30835))));
                            arr_32 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7614))) & ((~(9007199254478841ULL)))));
                            var_22 = ((/* implicit */unsigned char) (short)16368);
                        }
                    }
                    /* vectorizable */
                    for (long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                    {
                        arr_35 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) arr_15 [i_5] [(signed char)10]);
                        arr_36 [i_11] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((unsigned char) (short)-1));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_5] [i_11 - 1] [i_5] [i_5] [i_11] [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))) : (((arr_29 [i_5] [i_6] [i_5] [i_5] [i_6] [i_11]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                        {
                            arr_41 [i_5] [i_6] [i_7] [i_11] [i_5] = (!(((/* implicit */_Bool) arr_29 [i_11 + 1] [i_7] [i_5] [i_5] [i_6 + 2] [i_6])));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (signed char)-34))))) ? (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))) : (arr_25 [3ULL] [3ULL] [i_7] [5ULL] [i_12] [i_7] [3ULL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25726)) ? (((/* implicit */int) arr_12 [i_6] [i_11] [i_6] [i_11] [i_11])) : (((/* implicit */int) arr_17 [i_5] [i_5])))))));
                            var_25 -= ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_5] [i_5])) - (((/* implicit */int) arr_5 [i_5] [i_5] [i_7] [i_11 - 1])))) / ((-(((/* implicit */int) (signed char)-34))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 1073741824U))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_11 - 1] [i_11] [18LL] [i_7] [i_7]))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-47))) % (1358674065050488882LL)))));
                        }
                        for (signed char i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                        {
                            arr_45 [i_5] [i_6] [i_7] [i_11 + 1] [(_Bool)1] [i_5] [i_13] = ((/* implicit */unsigned long long int) ((arr_39 [i_11 - 1]) * (((/* implicit */unsigned int) 846704903))));
                            var_27 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_7 [i_6 + 1] [i_6 - 2] [i_6 + 2]))));
                            var_28 &= ((/* implicit */signed char) (short)-32752);
                        }
                        var_29 = (-(((/* implicit */int) ((-1452203620) < (((/* implicit */int) (_Bool)0))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_48 [i_5] [i_5] [i_7] [i_14] [i_5] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) (short)-28)), (arr_19 [i_5] [i_5]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227)))));
                        arr_49 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
                        var_30 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)175)) >> (((((/* implicit */int) arr_0 [i_6 - 4] [i_6 + 2])) - (29170))))) / (((/* implicit */int) (unsigned short)38457))));
                    }
                    arr_50 [i_5] [i_5] [i_7] = ((/* implicit */long long int) min((((/* implicit */int) max((arr_8 [i_5] [i_6 + 2] [i_5] [i_5]), (arr_8 [i_5] [i_6 - 1] [i_5] [i_6 - 1])))), (((((((((/* implicit */int) (signed char)-47)) + (2147483647))) << (((((/* implicit */int) (signed char)33)) - (33))))) | (((/* implicit */int) ((unsigned short) arr_20 [i_5] [i_5] [i_5])))))));
                    var_31 -= ((/* implicit */_Bool) 3145728U);
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */_Bool) var_6);
}

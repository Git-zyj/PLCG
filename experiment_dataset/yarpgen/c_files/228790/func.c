/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228790
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
    var_10 = ((/* implicit */short) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_11 = ((/* implicit */int) var_1);
            arr_6 [9LL] [(short)10] [(short)6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) (unsigned short)31608)))));
        }
        arr_7 [i_0] = max((((((/* implicit */int) ((signed char) arr_4 [i_0] [(unsigned char)13] [(unsigned char)13]))) | (((/* implicit */int) arr_3 [i_0] [i_0])))), (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned short)33921)))));
        arr_8 [i_0] = ((/* implicit */long long int) (~(min(((~(var_5))), (((/* implicit */int) arr_0 [i_0]))))));
        arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [(unsigned char)12] [(unsigned char)12])) ^ (((/* implicit */int) ((short) (unsigned short)33927)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
    {
        var_12 |= arr_0 [i_2];
        /* LoopSeq 2 */
        for (signed char i_3 = 1; i_3 < 14; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
            {
                var_13 *= ((/* implicit */unsigned long long int) (unsigned char)255);
                /* LoopSeq 2 */
                for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                    var_15 = ((/* implicit */unsigned long long int) (unsigned char)64);
                }
                for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
                {
                    arr_23 [i_2] [(unsigned char)6] [i_3] [i_4] [i_3] [i_6] = ((/* implicit */long long int) ((arr_1 [i_6] [i_3 + 1]) ? (((/* implicit */int) arr_2 [i_2] [i_3 - 1] [i_3 + 2])) : (((/* implicit */int) var_8))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((arr_22 [i_2] [i_3] [1U] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-109))))) >> (((((((/* implicit */_Bool) 9223372036854775795LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2757580750U))) - (4294946057U))))))));
                }
                var_17 -= arr_2 [i_2] [i_3] [i_4];
            }
            for (long long int i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 1152921500311879680LL)) || (((/* implicit */_Bool) var_7)))));
                var_19 = ((/* implicit */short) 4294967295U);
                arr_26 [i_7] [i_3 + 2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_2]))) ^ (arr_21 [i_3 + 1] [i_2] [i_7] [i_2])));
            }
            for (long long int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)168)) | (((/* implicit */int) arr_18 [i_2] [(_Bool)1] [i_2] [(_Bool)1] [i_2] [i_8]))));
                var_21 ^= ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) arr_14 [i_2] [(unsigned short)1])))));
                arr_31 [i_8] [i_2] [0U] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [6LL] [i_2] [i_2] [i_3])) >> (((var_4) + (4064484077900047414LL)))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)14] [i_3 + 1])) ? (((/* implicit */int) arr_19 [i_3 + 3] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_30 [i_2] [i_2]))));
            }
            for (long long int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */int) arr_24 [(unsigned short)16] [i_3 + 1] [i_2] [i_9]);
                arr_36 [i_2] [(unsigned short)5] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)15]))) == (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2115))) : (-1152921500311879681LL))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 4; i_11 < 16; i_11 += 4) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2] [i_3 - 1] [i_11 - 4])) ^ ((~(((/* implicit */int) (unsigned short)46515))))));
                    /* LoopSeq 4 */
                    for (short i_12 = 1; i_12 < 13; i_12 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) (((~(0ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -1152921500311879681LL))))));
                        var_26 = ((unsigned short) -1152921500311879681LL);
                        arr_45 [i_11] [i_3] = ((/* implicit */long long int) arr_1 [i_3 + 3] [(unsigned char)3]);
                    }
                    for (short i_13 = 1; i_13 < 13; i_13 += 4) /* same iter space */
                    {
                        arr_48 [i_11 - 4] [i_13] [i_11 - 1] = ((/* implicit */unsigned short) arr_12 [i_2]);
                        arr_49 [i_2] [i_3] [i_10] [i_13] [i_13 + 1] = ((/* implicit */int) arr_47 [i_13] [i_3] [i_10] [i_11 + 1] [i_13]);
                        arr_50 [i_13] [i_3] [(_Bool)1] [i_13] [i_13] [13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551612ULL)) && (((/* implicit */_Bool) arr_47 [i_2] [i_11 - 4] [i_13 + 1] [i_2] [i_13 + 1]))));
                    }
                    for (short i_14 = 1; i_14 < 13; i_14 += 4) /* same iter space */
                    {
                        arr_53 [(_Bool)1] [i_11 - 1] [i_11] [(_Bool)1] [(signed char)6] [(signed char)6] [i_2] = ((/* implicit */unsigned long long int) arr_51 [i_14] [(unsigned char)7] [i_10] [5LL] [i_2]);
                        arr_54 [i_2] [i_2] [i_2] [i_2] [(short)8] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 2427755526U)) ? (((long long int) arr_27 [i_2])) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_3 - 1] [i_3] [7ULL] [i_14] [i_3])))));
                    }
                    for (short i_15 = 1; i_15 < 13; i_15 += 4) /* same iter space */
                    {
                        arr_57 [i_2] [(signed char)1] [i_2] [i_15] [0LL] [i_11 + 1] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_2] [i_2] [i_10] [i_11] [i_15]))) > (0ULL)));
                        arr_58 [i_2] [9] [i_10] [i_11 - 4] [i_15] = arr_46 [i_2] [i_3] [i_10] [i_11 - 3] [i_15 + 3];
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (~(((long long int) var_2)))))));
                    }
                }
                arr_59 [i_2] [i_2] = ((/* implicit */short) -1152921500311879683LL);
                var_28 = ((((/* implicit */_Bool) (unsigned short)33928)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)31608)));
            }
        }
        for (signed char i_16 = 1; i_16 < 14; i_16 += 3) /* same iter space */
        {
            var_29 = ((((((/* implicit */int) (unsigned short)33928)) > (((/* implicit */int) (unsigned short)65521)))) ? (((((/* implicit */_Bool) arr_3 [i_16 - 1] [i_2])) ? (((/* implicit */int) (unsigned short)31603)) : (((/* implicit */int) arr_3 [i_2] [(unsigned char)7])))) : ((~(((/* implicit */int) var_2)))));
            arr_64 [i_2] [i_16] [i_2] = ((unsigned char) (unsigned short)65535);
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_16 + 2])) * (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2]))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) + (arr_21 [(signed char)11] [i_2] [i_2] [i_2])))));
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) arr_30 [i_16 + 2] [i_2]))));
            var_32 = ((/* implicit */unsigned char) ((((var_6) >= (((/* implicit */int) arr_2 [i_16 + 1] [i_2] [i_2])))) ? (((/* implicit */int) arr_38 [i_16 + 2] [i_16])) : (((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) arr_17 [13ULL] [i_16] [i_2])) : (((/* implicit */int) (unsigned char)255))))));
        }
        /* LoopNest 2 */
        for (short i_17 = 3; i_17 < 16; i_17 += 4) 
        {
            for (short i_18 = 0; i_18 < 17; i_18 += 3) 
            {
                {
                    arr_69 [i_17] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) (unsigned char)0)))) : ((~(((/* implicit */int) arr_33 [i_18] [i_18] [i_18]))))));
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) arr_47 [i_2] [i_17] [i_17] [i_18] [i_18]))));
                }
            } 
        } 
    }
}

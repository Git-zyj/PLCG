/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4725
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_6)) - (52124))))) : (((((/* implicit */int) var_0)) | (((/* implicit */int) var_5)))))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_0] [2LL] [i_2] [i_4 - 2] [(unsigned char)0]))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_0])) > (((/* implicit */int) arr_3 [i_3] [i_3]))));
                    }
                    var_24 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1 - 1])) | (((/* implicit */int) var_0))));
                    arr_14 [i_0] [(unsigned char)5] [(_Bool)1] [(signed char)16] |= ((/* implicit */long long int) arr_13 [(unsigned short)4] [i_2] [i_1 - 1] [i_3] [i_2]);
                    var_25 = ((/* implicit */int) var_15);
                    var_26 = ((/* implicit */unsigned char) (short)(-32767 - 1));
                }
                /* LoopSeq 2 */
                for (unsigned char i_5 = 3; i_5 < 17; i_5 += 4) 
                {
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1 - 1] [i_5 + 2])) ? (arr_16 [i_1 + 1] [i_1 - 1] [i_5 - 2]) : (arr_16 [i_1 - 1] [i_1 - 1] [i_5 - 2])));
                    arr_19 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */int) var_12)) != (((/* implicit */int) arr_0 [(short)12])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))));
                    arr_20 [17] [17] [(unsigned short)9] = ((/* implicit */short) var_11);
                }
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    var_28 += ((/* implicit */int) var_12);
                    var_29 = ((/* implicit */unsigned short) var_18);
                    var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 263882790666240ULL)) && (((/* implicit */_Bool) (short)32766))));
                }
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-32757)) || (((/* implicit */_Bool) (short)(-32767 - 1)))))) ^ (((((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_2])) | (((/* implicit */int) (short)-32748))))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 4) 
        {
            var_32 ^= ((/* implicit */long long int) ((var_9) > (((/* implicit */int) var_15))));
            var_33 = ((/* implicit */_Bool) arr_11 [i_0] [i_7] [i_0] [i_0]);
            var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    {
                        var_35 = ((/* implicit */short) arr_6 [i_7 + 3]);
                        arr_34 [i_0] [i_7 - 1] [i_8] [i_9] = ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-15088)))) == (((/* implicit */int) (signed char)50)));
                        var_36 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) & (arr_16 [i_7] [i_7 - 2] [i_7 + 1])));
                    }
                } 
            } 
        }
        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (_Bool)0))));
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                for (int i_12 = 2; i_12 < 17; i_12 += 4) 
                {
                    {
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) arr_30 [i_0] [5] [i_11]))));
                        arr_44 [i_0] [(short)16] [(short)16] [i_10] [(short)16] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_11 [(unsigned char)13] [(signed char)0] [13LL] [i_0])) ? (((/* implicit */int) (short)-5873)) : (((/* implicit */int) var_1)))) <= (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_29 [13ULL] [i_10] [i_11] [i_11])) / (((/* implicit */int) arr_4 [3])))))));
                        arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) var_17);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) /* same iter space */
    {
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_13])) ? ((~(((/* implicit */int) var_12)))) : (((((/* implicit */int) var_12)) / (((/* implicit */int) (signed char)50))))))) ? (min(((-(((/* implicit */int) arr_47 [i_13])))), (((/* implicit */int) arr_15 [(short)9] [i_13] [i_13] [i_13] [(short)4] [i_13])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)14730)) && (((/* implicit */_Bool) var_18)))))));
        arr_49 [13U] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [1] [i_13] [(short)15])) ? (((/* implicit */int) arr_5 [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_5 [i_13] [i_13] [i_13])))) != (((/* implicit */int) ((arr_38 [i_13] [i_13] [i_13]) && (((/* implicit */_Bool) (unsigned char)0)))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 4) 
    {
        for (int i_15 = 2; i_15 < 8; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                {
                    var_40 ^= ((/* implicit */short) ((((/* implicit */_Bool) (short)32742)) ? (2402120036U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */long long int) (((~(((/* implicit */int) arr_42 [i_15] [i_15] [i_16] [i_14])))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_47 [i_14])))))))));
                }
            } 
        } 
    } 
    var_42 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (short)-27842)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) < (var_10)))) : (((/* implicit */int) var_8))));
}

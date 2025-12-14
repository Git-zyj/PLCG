/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189969
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_4 [i_0] = ((unsigned long long int) arr_1 [i_0 + 1]);
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                var_19 += (short)-32766;
                var_20 -= arr_3 [i_0 + 1];
                var_21 -= ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_2))) - (((/* implicit */int) arr_3 [i_0 - 1]))));
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    arr_10 [i_0] [i_1] [i_1] [i_3] [i_2] [i_2] = ((/* implicit */short) var_8);
                    arr_11 [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)511)) - (((/* implicit */int) (short)-15280))))) ? (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)16)))) : (((((/* implicit */_Bool) (short)-2331)) ? (((/* implicit */int) (short)-26673)) : (((/* implicit */int) (short)22438))))));
                    var_22 *= ((/* implicit */unsigned int) 11937901153209452790ULL);
                }
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_12)) ? (511) : (((/* implicit */int) var_5)))) : (((((((/* implicit */int) (short)-5)) + (2147483647))) >> (((arr_2 [i_1] [i_2]) - (1775206372)))))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_14 [i_0] [i_1]))));
                }
                for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-15275)) - (((/* implicit */int) (unsigned short)3564))));
                    var_26 -= ((/* implicit */short) (-(((/* implicit */int) (short)12122))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        arr_22 [i_0] [i_0 - 1] [i_0] [i_2] = ((/* implicit */short) ((((((/* implicit */int) (short)-17)) + (((/* implicit */int) (short)-32760)))) < (((/* implicit */int) (short)32256))));
                        var_27 = ((/* implicit */int) ((short) (short)-6151));
                    }
                    arr_23 [i_2] [i_2] [i_2 - 2] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 8731812118315368347ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-9277)))) >= (((/* implicit */int) var_9))));
                }
                arr_24 [i_2] [i_0 + 2] [i_1] [i_0 + 2] = ((/* implicit */short) (+(((/* implicit */int) var_3))));
            }
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                var_28 -= ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0 + 1])) & (((/* implicit */int) arr_27 [i_0 - 2] [i_0 - 1] [i_0 - 2]))));
                arr_28 [i_7] [15] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -1849950676)) < (((unsigned long long int) arr_5 [i_0]))));
                var_29 = ((/* implicit */unsigned short) arr_6 [i_1]);
            }
            var_30 &= ((/* implicit */unsigned short) arr_18 [i_0] [i_0] [i_0 - 1] [i_1] [i_1]);
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                arr_33 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)15283)) > (((/* implicit */int) ((unsigned short) 9223372036854775808ULL)))));
                var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_0 + 1] [(short)8] [i_0] [i_0 - 2] [i_0]))));
                var_32 = (~(((/* implicit */int) var_16)));
            }
            arr_34 [i_0] = ((/* implicit */signed char) arr_13 [i_8] [i_8] [i_0]);
            arr_35 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0 - 2] [i_0 + 2] [i_0])) >= (((/* implicit */int) (short)18020))));
        }
        arr_36 [i_0 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]))))), (((int) ((unsigned char) var_3)))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 2; i_10 < 16; i_10 += 3) /* same iter space */
    {
        arr_39 [i_10] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) (signed char)-62)) : (var_10)))));
        /* LoopSeq 2 */
        for (short i_11 = 1; i_11 < 15; i_11 += 2) 
        {
            var_33 *= ((/* implicit */unsigned long long int) arr_17 [i_10 - 1] [i_10 - 1] [i_10 - 2] [i_11] [i_11]);
            /* LoopSeq 3 */
            for (signed char i_12 = 1; i_12 < 16; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    arr_48 [(short)17] [(short)15] [(short)17] [i_11] [i_13] [i_10] = ((((/* implicit */_Bool) arr_8 [i_11 + 2] [i_11 + 2])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (8731812118315368328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25977))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65519)))))));
                    var_34 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) var_8))))));
                    arr_49 [i_10] [i_11] [i_11] [i_10] [i_10] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_16 [i_13])) % (((/* implicit */int) var_1))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 3; i_14 < 17; i_14 += 2) 
                    {
                        var_35 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)21829)) % (((/* implicit */int) (short)25577))));
                        var_36 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-1))));
                    }
                    for (unsigned long long int i_15 = 3; i_15 < 16; i_15 += 1) 
                    {
                        var_37 ^= ((/* implicit */short) ((arr_9 [i_10] [i_10] [i_10 - 1] [(short)0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_10] [(unsigned short)2] [i_10 + 1] [i_15] [(short)12] [i_15 + 2])))));
                        var_38 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)108)))));
                    }
                    var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */int) (signed char)-42)) - (((/* implicit */int) (unsigned short)43692)))))));
                }
                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-80)) == ((-(((/* implicit */int) var_0))))));
            }
            for (short i_16 = 3; i_16 < 14; i_16 += 1) 
            {
                arr_60 [i_10] = ((/* implicit */short) 8731812118315368347ULL);
                arr_61 [i_10 - 1] [i_10 - 1] [i_10] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_45 [i_16] [i_16 + 3] [i_10] [i_16 - 1] [i_16]))));
            }
            for (unsigned char i_17 = 0; i_17 < 18; i_17 += 1) 
            {
                arr_65 [i_10] [i_10] = ((/* implicit */int) ((unsigned long long int) arr_30 [i_10 + 1] [i_11 + 1]));
                var_41 = ((/* implicit */unsigned int) (-(((((/* implicit */int) (short)-31253)) * (((/* implicit */int) (short)12102))))));
                var_42 = ((/* implicit */int) (+(var_13)));
            }
            arr_66 [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) arr_29 [i_10] [i_10 - 2] [i_11 + 2])) & (((/* implicit */int) arr_29 [(signed char)9] [i_10 + 1] [i_11 + 1]))));
        }
        for (unsigned short i_18 = 2; i_18 < 17; i_18 += 4) 
        {
            var_43 -= ((/* implicit */unsigned char) ((short) arr_26 [i_10 + 2] [i_18 - 2]));
            var_44 &= ((/* implicit */short) ((((arr_64 [i_10] [i_10] [i_10 + 2] [i_18 - 1]) + (2147483647))) >> (((arr_64 [i_10] [i_10] [i_10 - 1] [i_18 + 1]) + (692912912)))));
            var_45 = ((/* implicit */int) (unsigned char)15);
        }
    }
    var_46 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) (short)11233)), (var_14)))))));
}

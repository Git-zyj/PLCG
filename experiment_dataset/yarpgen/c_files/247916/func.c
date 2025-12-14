/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247916
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
    var_13 = ((/* implicit */unsigned char) (short)6557);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 ^= var_9;
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (arr_0 [i_0]))))))))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) -596425975)) ? (arr_0 [i_0]) : ((~(var_7)))));
        var_17 |= ((/* implicit */unsigned short) var_11);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_18 ^= (-(((unsigned long long int) 1764499346)));
        arr_4 [i_1] = ((/* implicit */unsigned short) ((arr_2 [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    }
    /* LoopSeq 2 */
    for (short i_2 = 2; i_2 < 20; i_2 += 1) 
    {
        var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2782600983U)), (6615537772108461196ULL)));
        /* LoopSeq 2 */
        for (signed char i_3 = 4; i_3 < 19; i_3 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((unsigned int) var_3)))))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3 + 2])) ? (arr_8 [i_3] [i_3 + 1]) : (arr_8 [(short)7] [i_3 - 3])))), (6615537772108461191ULL)));
                /* LoopSeq 4 */
                for (signed char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) (-(((max((((/* implicit */unsigned long long int) arr_8 [i_2] [(unsigned char)3])), (11831206301601090412ULL))) % (11831206301601090419ULL)))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6615537772108461196ULL)) ? (11831206301601090420ULL) : (((unsigned long long int) 6615537772108461195ULL))));
                    var_24 = ((/* implicit */_Bool) var_3);
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    var_25 &= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (var_5))) && (((/* implicit */_Bool) var_5))));
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 2] [(unsigned short)11] [i_3 + 1])) ? (arr_10 [i_3 - 3] [i_3 - 2] [i_3] [(short)21]) : (arr_10 [i_3 + 2] [i_3 + 1] [i_3] [i_3])));
                        var_27 = ((/* implicit */unsigned int) var_1);
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (~(var_10))))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_15 [i_2] [20] [i_6]))));
                    }
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                    {
                        var_30 += var_5;
                        var_31 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((11831206301601090420ULL) - (((/* implicit */unsigned long long int) arr_23 [i_3] [i_3] [7LL] [i_6] [i_2])))));
                    }
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) arr_22 [i_6] [i_2]);
                        arr_28 [i_2] [i_3] [i_4] [i_6] [i_2] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) == (6615537772108461184ULL))))));
                        var_33 += ((/* implicit */unsigned int) (!(arr_6 [(unsigned char)5] [(unsigned char)5])));
                    }
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                {
                    var_34 ^= ((/* implicit */int) (-(11831206301601090426ULL)));
                    var_35 = ((/* implicit */unsigned int) (+((+(var_8)))));
                }
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                {
                    arr_34 [i_2] = ((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_2 - 2] [i_3 - 1] [i_2 - 2]))))), (min((arr_1 [i_2 - 1] [(unsigned short)12]), (var_3)))));
                    var_36 ^= ((/* implicit */signed char) (((~(min((6615537772108461188ULL), (6615537772108461168ULL))))) < (((((/* implicit */_Bool) arr_26 [i_2] [i_2 - 2] [i_2 - 2])) ? (arr_21 [i_4] [i_3] [i_3] [i_3] [i_11] [i_2] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_3] [(short)6] [(short)6] [(short)6]))) >= (var_5)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        arr_37 [i_2] [i_3] [(signed char)19] [(signed char)19] [i_2] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_20 [i_2] [i_2] [(short)9] [i_2 - 2] [i_2] [i_2])), (((6615537772108461195ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) (((~(11831206301601090431ULL))) == (arr_33 [(short)2] [i_3 - 3] [i_3 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_2] [i_3] [i_3])))))));
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_11 [i_11] [i_11] [i_11]))) ? (11831206301601090431ULL) : ((+(6615537772108461184ULL)))));
                        var_38 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(11831206301601090434ULL)))))) ? (((11831206301601090432ULL) - (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((11831206301601090420ULL), (11831206301601090427ULL))))))));
                    }
                    arr_38 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11831206301601090397ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 6615537772108461196ULL)))) : (6615537772108461196ULL)))) ? (11831206301601090416ULL) : (11831206301601090409ULL)));
                }
            }
            for (long long int i_13 = 2; i_13 < 21; i_13 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) 11831206301601090432ULL))));
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_13 - 2] [i_14] [0] [i_13 - 2] [i_2])) ? ((+(11831206301601090418ULL))) : (((/* implicit */unsigned long long int) arr_14 [i_2] [i_13 + 1] [(unsigned short)9]))));
                    var_41 = ((/* implicit */unsigned short) (+(arr_11 [14] [14] [i_3 - 3])));
                }
                var_42 = ((/* implicit */short) var_8);
            }
        }
        for (signed char i_15 = 4; i_15 < 19; i_15 += 1) /* same iter space */
        {
            var_43 |= ((/* implicit */unsigned char) var_3);
            var_44 += ((/* implicit */short) arr_39 [i_2] [(signed char)12] [(unsigned short)12] [i_15]);
        }
    }
    /* vectorizable */
    for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
    {
        arr_48 [(short)7] = ((/* implicit */unsigned int) var_10);
        var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(signed char)8] [i_16] [i_16] [1]))) & (11831206301601090432ULL))))));
    }
}

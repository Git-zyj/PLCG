/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35543
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) var_6)) + (((/* implicit */int) ((666516387) < (((/* implicit */int) (short)-32761))))))) : (var_10)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) var_3);
        var_18 = ((/* implicit */short) var_0);
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) ((arr_5 [i_2] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)85)) && (((/* implicit */_Bool) (unsigned char)108))))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                var_20 -= (((-(((/* implicit */int) var_9)))) | ((-(((/* implicit */int) arr_7 [(short)4] [i_2])))));
                arr_11 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)100))));
            }
            for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_4 + 1])))));
                /* LoopSeq 2 */
                for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        arr_18 [i_6] [i_5 + 1] [(signed char)18] [(signed char)18] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (signed char)-13))));
                        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        var_23 = ((/* implicit */unsigned int) (unsigned char)80);
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */int) var_15)) == (((((/* implicit */_Bool) arr_9 [i_6])) ? (((/* implicit */int) (short)-32754)) : (((/* implicit */int) var_0)))))))));
                    }
                    var_25 = ((/* implicit */unsigned short) ((arr_13 [i_4 + 1] [i_4 - 1]) ? (((/* implicit */int) arr_16 [i_1] [i_4 - 1] [i_4 - 1] [i_5 - 1] [i_4 - 1] [i_1] [i_5])) : (((/* implicit */int) arr_16 [i_1] [i_4 - 1] [i_4 - 1] [i_5] [i_5] [i_2] [i_5 - 1]))));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 2; i_7 < 19; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) arr_8 [i_1]);
                        var_27 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-9))));
                        var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4939765377480099135ULL)) ? (((/* implicit */int) (short)32627)) : (((/* implicit */int) (unsigned char)226))));
                        var_29 = ((/* implicit */short) var_14);
                        var_30 = ((/* implicit */signed char) 569812934216678800ULL);
                    }
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) (signed char)12);
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (+(((/* implicit */int) (unsigned char)62)))))));
                    }
                    arr_25 [i_1] [i_2] [i_1] [i_5] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) arr_21 [i_1] [i_1] [i_2] [i_4 + 1] [i_5])) < (((/* implicit */int) var_14))))) : (((/* implicit */int) arr_4 [i_1] [i_4 + 1]))));
                }
                for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) var_13);
                    /* LoopSeq 2 */
                    for (signed char i_10 = 1; i_10 < 19; i_10 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (~(((/* implicit */int) arr_30 [i_10] [i_9] [(signed char)2] [i_1] [(signed char)2] [i_2] [i_1])))))));
                        var_35 = ((/* implicit */signed char) (((+(((/* implicit */int) var_9)))) * ((-(((/* implicit */int) arr_27 [i_1] [i_9] [i_4] [i_4 - 1] [i_2] [i_1]))))));
                    }
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned int) ((signed char) arr_24 [i_1] [i_2] [i_4] [i_9] [i_4 - 1]));
                        var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_2] [i_4]))))) : (arr_20 [i_1] [i_11] [i_4 - 1] [i_4 - 1] [i_11])));
                        arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_32 [i_1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_1]))));
                    }
                    var_38 = ((/* implicit */long long int) var_10);
                }
            }
            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)22592)) / (((/* implicit */int) (unsigned char)194)))))));
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [(short)8] [i_2])) && (((/* implicit */_Bool) (unsigned char)212)))) ? (((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1] [i_1] [10LL] [i_2] [10LL])) ? (((/* implicit */long long int) var_12)) : (var_13))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)27085))))))))));
        }
        for (short i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
        {
            var_41 = ((/* implicit */short) ((unsigned int) min((-840622256), (((/* implicit */int) (signed char)-121)))));
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */int) arr_32 [i_1] [i_12] [i_13] [i_14] [i_13] [i_1])) | (((/* implicit */int) arr_32 [i_13] [i_13] [i_12] [i_14] [i_13] [i_1])))) : (((((/* implicit */int) arr_26 [i_15] [i_12] [i_12] [i_12] [i_1])) >> (((arr_9 [i_1]) - (1018842690U)))))));
                            var_43 = ((/* implicit */unsigned short) var_4);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    arr_50 [i_1] [i_16] [i_1] = ((/* implicit */unsigned long long int) min(((unsigned char)230), (((/* implicit */unsigned char) (signed char)27))));
                    var_44 = ((/* implicit */long long int) var_1);
                }
                /* vectorizable */
                for (unsigned int i_17 = 2; i_17 < 19; i_17 += 3) 
                {
                    var_45 = ((/* implicit */unsigned char) max((var_45), (arr_17 [i_1] [i_1] [i_12] [i_13] [i_13] [i_12])));
                    var_46 -= ((/* implicit */signed char) (unsigned char)171);
                }
                /* LoopSeq 1 */
                for (long long int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_19 = 3; i_19 < 21; i_19 += 1) 
                    {
                        var_47 = ((/* implicit */int) ((unsigned int) -840622279));
                        var_48 &= ((((/* implicit */int) (signed char)63)) + (((/* implicit */int) (signed char)-14)));
                        var_49 = ((/* implicit */unsigned char) ((((-8024498086253792614LL) % (((/* implicit */long long int) -840622266)))) >= (((/* implicit */long long int) arr_31 [i_19 - 3] [i_19 - 3] [i_19 - 1] [i_19 - 3] [i_19 + 1]))));
                    }
                    var_50 = ((/* implicit */unsigned short) max((((((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_1] [i_12] [i_12] [i_12] [i_12]))) / (var_2))) * (max((((/* implicit */long long int) var_0)), (9077388103687862713LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_28 [i_1] [i_12] [i_12] [i_18])))))));
                }
            }
            arr_58 [i_1] [i_12] [i_12] = ((/* implicit */short) (~((+(((((/* implicit */_Bool) (signed char)32)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
        }
        arr_59 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */long long int) 840622268)) : (8024498086253792613LL)))) ? ((-(((long long int) var_12)))) : (var_13)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_20 = 0; i_20 < 22; i_20 += 3) 
        {
            var_51 = (+(((/* implicit */int) ((signed char) var_10))));
            /* LoopNest 2 */
            for (unsigned int i_21 = 0; i_21 < 22; i_21 += 1) 
            {
                for (long long int i_22 = 2; i_22 < 19; i_22 += 3) 
                {
                    {
                        var_52 = ((/* implicit */int) max((var_52), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) / (((/* implicit */int) var_5))))))))));
                        var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) arr_61 [i_1]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_23 = 0; i_23 < 22; i_23 += 2) /* same iter space */
                        {
                            var_54 ^= ((/* implicit */_Bool) arr_56 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                            arr_71 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_1] [i_22 - 1] [i_22 + 1] [i_1] [i_1])) ^ (((/* implicit */int) arr_23 [i_1] [i_22 + 2] [i_21] [i_21] [i_1]))));
                            var_55 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (57771416) : (((/* implicit */int) arr_44 [i_1] [i_1] [i_1] [i_23]))))) & (((((/* implicit */_Bool) var_10)) ? (2510348603337085015ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-34))))));
                        }
                        for (unsigned int i_24 = 0; i_24 < 22; i_24 += 2) /* same iter space */
                        {
                            var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)9815)) ? (-1782530053) : (((/* implicit */int) (signed char)96))));
                            var_57 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_20] [i_22 + 1] [i_20]))));
                            var_58 = ((/* implicit */short) ((arr_52 [i_22 + 2] [i_21] [i_1] [i_22] [i_22]) ^ (arr_52 [i_22 + 2] [i_20] [i_21] [i_22 + 3] [i_24])));
                        }
                    }
                } 
            } 
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212749
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) (unsigned char)108))) || (((/* implicit */_Bool) (signed char)83)))))) ^ (16838579954755225984ULL)));
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))))))));
            var_22 = ((/* implicit */signed char) arr_2 [i_0]);
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_3 = 4; i_3 < 21; i_3 += 1) /* same iter space */
                {
                    var_23 ^= arr_2 [i_1 + 1];
                    var_24 = ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [19] [i_3])) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_9 [(short)4] [i_1 + 1])) : (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) arr_6 [(short)7] [i_1])))));
                }
                for (signed char i_4 = 4; i_4 < 21; i_4 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_6 [i_4 - 3] [i_1 + 1])), (arr_7 [i_4] [i_2] [i_4 - 4] [i_1 - 1]))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_1 + 1] [i_4 - 4])))))));
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) min((arr_2 [i_0]), (((/* implicit */unsigned char) var_8)))))) ? (max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_13 [0] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */int) (short)-13472)) + (2147483641)))))))));
                        var_25 = ((/* implicit */unsigned int) arr_2 [i_2]);
                    }
                    for (short i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((max((((/* implicit */long long int) (_Bool)1)), (-7338865078746815288LL))) <= (((/* implicit */long long int) max((((/* implicit */int) ((signed char) arr_14 [10U] [20ULL] [(signed char)17] [i_1] [i_4]))), (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [(unsigned char)1] [i_2] [i_0])) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_2]))))))))))));
                        arr_20 [i_4 - 3] [i_4 - 2] [i_6] [i_2] [i_6] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_3 [i_0]))))))), ((-(17946006439415005124ULL)))));
                    }
                    for (short i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) (~(((arr_24 [i_0]) | (((/* implicit */unsigned long long int) ((arr_7 [(signed char)6] [i_1] [i_0] [i_4]) - (((/* implicit */long long int) arr_16 [i_4] [i_1] [i_2] [i_4 - 3] [i_7] [i_7] [i_4])))))))));
                        var_28 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_4 - 4] [i_1 - 2] [i_7] [9U])) * (((/* implicit */int) arr_0 [i_0]))))) / ((+(15612117776083090588ULL)))));
                        var_29 -= ((/* implicit */long long int) (~((((+(((/* implicit */int) arr_14 [i_0] [i_1] [i_7] [i_4] [i_7])))) * (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_13 [16ULL] [i_1] [i_7] [i_4])) : (((/* implicit */int) var_16))))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_30 = ((/* implicit */long long int) arr_18 [i_8] [i_4] [i_8] [i_0] [i_2]);
                        var_31 -= (!(((/* implicit */_Bool) (signed char)-115)));
                        var_32 = ((/* implicit */_Bool) min((((((arr_7 [i_2] [i_1 + 1] [i_2] [i_4]) ^ (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_4 + 1] [i_2])))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (arr_7 [19ULL] [i_2] [i_0] [(unsigned short)20]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_8] [i_1] [18ULL] [i_8])), (arr_18 [14U] [i_1] [i_1] [(unsigned short)12] [i_2])))) ? (((/* implicit */int) ((var_14) == (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8])))))) : (((/* implicit */int) var_3)))))));
                    }
                    arr_27 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 - 2]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)-29500))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 2])))))));
                }
                var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_2] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)7)) < (((/* implicit */int) arr_10 [i_0] [i_1] [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (arr_4 [i_1] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(unsigned short)8] [i_1 + 1] [i_2] [i_2]))))))));
                var_34 -= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (signed char)-19)) ? (((((/* implicit */_Bool) 2568688192104328102LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)124)))) : (min((1177608675), (((/* implicit */int) (_Bool)1)))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_35 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_23 [i_0]) == (((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_0] [i_1] [i_9] [i_9] [i_0])))))))), (var_19)));
                var_36 -= arr_13 [i_0] [i_9] [(_Bool)1] [i_9];
            }
        }
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            arr_33 [i_0] = ((/* implicit */unsigned char) var_13);
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [(signed char)19] [i_10] [i_0])) ? (((((/* implicit */int) arr_25 [i_0] [i_10] [i_0] [(short)9])) << (((/* implicit */int) arr_25 [i_10] [i_10] [i_10] [i_10])))) : ((-(((/* implicit */int) arr_25 [i_0] [(unsigned char)10] [i_0] [i_10]))))));
            var_38 += ((/* implicit */short) arr_16 [i_0] [(unsigned char)13] [i_10] [i_10] [i_10] [i_10] [8U]);
            arr_34 [i_10] [(signed char)21] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_18 [i_0] [i_10] [i_0] [i_0] [i_10]), (((/* implicit */int) (_Bool)1)))))));
            arr_35 [i_10] [i_10] [i_10] = ((short) (_Bool)1);
        }
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            var_39 -= ((/* implicit */_Bool) var_13);
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_1)) > (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) : (1447119586494913234ULL)))));
        }
    }
    var_42 ^= ((/* implicit */unsigned int) min((min((min((var_19), (((/* implicit */unsigned long long int) (signed char)-10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
    var_43 -= max((max((1049845219), (((/* implicit */int) ((((/* implicit */int) var_8)) < (-348983797)))))), (((/* implicit */int) (!(var_9)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
    {
        var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_18 [i_12] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_12] [i_12] [i_12] [i_12] [i_12]))) : (arr_1 [i_12]))), (((long long int) var_7))))) ? ((((((~(((/* implicit */int) arr_15 [i_12] [i_12])))) + (2147483647))) << (((((((/* implicit */int) var_2)) & (((/* implicit */int) var_15)))) - (1))))) : (min(((~(((/* implicit */int) arr_0 [i_12])))), (((((/* implicit */_Bool) arr_40 [i_12])) ? (((/* implicit */int) arr_19 [9ULL] [i_12] [i_12] [20U] [0U])) : (((/* implicit */int) arr_9 [i_12] [3U])))))))))));
        /* LoopSeq 1 */
        for (short i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65523)) ^ (((/* implicit */int) (signed char)-53))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((/* implicit */int) ((short) arr_29 [i_12] [i_13] [i_12])))));
            var_46 = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) var_10)))));
            var_47 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_42 [i_13])), (arr_40 [i_13]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 6061952183441833493ULL)) || (((/* implicit */_Bool) (short)-32755))))))))), (((unsigned long long int) (!(((/* implicit */_Bool) var_8)))))));
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) (_Bool)1))));
                var_49 = ((/* implicit */signed char) min((((/* implicit */int) arr_39 [i_14])), (arr_41 [i_13])));
                arr_45 [i_14] [i_13] [i_13] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14446))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((unsigned long long int) 3079967364U))))));
                var_50 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) arr_43 [(signed char)9]))));
            }
        }
    }
    /* vectorizable */
    for (signed char i_15 = 0; i_15 < 15; i_15 += 2) 
    {
        arr_48 [i_15] = ((/* implicit */unsigned short) arr_28 [(unsigned char)21] [i_15] [i_15]);
        arr_49 [i_15] [i_15] = ((/* implicit */short) ((unsigned int) arr_31 [i_15] [i_15]));
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_52 [3ULL] = ((((/* implicit */int) arr_14 [i_15] [i_16] [i_15] [i_16] [i_15])) - (((/* implicit */int) ((((/* implicit */int) arr_15 [i_15] [i_16])) < (((/* implicit */int) arr_28 [i_15] [i_16] [(unsigned short)3]))))));
            var_51 = ((/* implicit */_Bool) arr_16 [i_16] [i_16] [i_15] [i_15] [i_15] [i_15] [(unsigned char)1]);
        }
        /* LoopSeq 1 */
        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) 
        {
            var_52 -= ((/* implicit */short) ((((/* implicit */int) arr_53 [i_15])) != (((/* implicit */int) arr_53 [i_15]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 3) 
            {
                var_53 = ((/* implicit */unsigned long long int) var_9);
                var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_53 [i_18])) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_15] [i_17] [(unsigned short)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_15]))) : (var_5))))));
            }
        }
    }
    var_55 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_4)))))))), ((~(((/* implicit */int) var_8))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43876
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_9);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            var_13 = ((/* implicit */short) (+(((/* implicit */int) var_12))));
            arr_6 [i_0] [i_1] &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) arr_1 [i_0])))));
            var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) var_5))));
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) 17812784654941811791ULL)))));
                        var_16 *= ((/* implicit */short) (+(266099514)));
                    }
                } 
            } 
            var_17 = ((((/* implicit */int) var_7)) == (var_1));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2])) - (20)))))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-20))))), (max((arr_0 [i_2]), (((/* implicit */unsigned int) (_Bool)1)))))))))));
        }
        for (short i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            arr_15 [1ULL] [i_5] [(signed char)5] = ((/* implicit */unsigned long long int) var_11);
            arr_16 [i_0] [i_0] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) ((signed char) 266099514))))));
            var_19 = ((/* implicit */short) ((signed char) -266099525));
            /* LoopSeq 4 */
            for (signed char i_6 = 1; i_6 < 14; i_6 += 4) 
            {
                arr_19 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)50))));
                var_20 = ((/* implicit */unsigned long long int) (+((+((+(var_4)))))));
            }
            for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                arr_23 [i_5] [i_0] [(short)15] [i_7] = ((/* implicit */signed char) (unsigned short)39632);
                arr_24 [i_0] [i_5] = ((/* implicit */signed char) (+(-266099499)));
            }
            for (short i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_9 = 1; i_9 < 13; i_9 += 3) 
                {
                    var_21 += ((/* implicit */unsigned char) (+(((arr_0 [i_9 + 3]) ^ (arr_0 [i_9 + 1])))));
                    var_22 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)2))))));
                }
                for (int i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        arr_34 [7LL] [i_5] [i_8] [i_10] [i_11] [i_11] [(unsigned short)15] = ((/* implicit */unsigned char) arr_30 [i_0] [14] [i_0]);
                        var_23 = ((/* implicit */unsigned short) ((unsigned char) (_Bool)1));
                        var_24 = ((/* implicit */unsigned long long int) arr_14 [i_10]);
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
                    }
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) var_12);
                        var_26 |= ((/* implicit */_Bool) (signed char)113);
                        arr_40 [(short)14] [(unsigned char)12] [i_8] [i_8] [(unsigned short)15] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17765))) ^ (3423012229U)))))));
                        var_27 |= ((/* implicit */signed char) arr_9 [i_10] [(short)5] [i_10] [i_10]);
                        arr_41 [8ULL] [i_10] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_10))))) + (((/* implicit */int) min((var_7), ((short)5406)))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_17 [i_5] [i_10] [i_12])))))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((unsigned long long int) arr_9 [i_0] [i_5] [i_8] [i_10])) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))))));
                        arr_45 [i_13] [i_10] [i_8] [i_8] [(signed char)9] [i_0] = ((/* implicit */short) (+((+(arr_42 [i_5] [i_13])))));
                        var_29 ^= ((/* implicit */unsigned long long int) (+((+((+(((/* implicit */int) (unsigned char)226))))))));
                        var_30 = ((/* implicit */unsigned char) var_4);
                    }
                }
                for (int i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
                {
                    arr_48 [i_0] [i_14] [i_8] [i_14] [i_14] [(signed char)10] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
                    arr_49 [i_0] [i_5] [i_8] [i_14] [i_8] [(signed char)13] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_5 [i_5] [i_14])))) ? ((+(var_6))) : (((/* implicit */long long int) max((arr_5 [i_0] [i_5]), (((/* implicit */unsigned int) var_12)))))));
                    var_31 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_13 [i_8]), (((/* implicit */signed char) var_10)))))));
                    var_32 = ((unsigned short) (~(var_4)));
                    /* LoopSeq 2 */
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        arr_54 [(short)7] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (+(266099524));
                        var_33 ^= ((/* implicit */short) (+(-2556896747172476830LL)));
                    }
                    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned short) ((short) (+(arr_42 [i_8] [i_16]))));
                        arr_59 [i_0] [i_5] [i_8] = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)29)), (((((/* implicit */int) arr_1 [i_8])) + ((+(((/* implicit */int) var_3))))))));
                        var_35 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_7 [i_0])) ? (11156247113091638649ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_16])))))));
                        var_36 -= ((/* implicit */signed char) 266099498);
                        var_37 = ((/* implicit */long long int) var_11);
                    }
                }
                arr_60 [i_8] = ((/* implicit */signed char) arr_4 [i_0] [(unsigned short)0]);
                arr_61 [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) arr_26 [i_0] [(signed char)15] [i_0]))))));
            }
            for (short i_17 = 0; i_17 < 16; i_17 += 3) 
            {
                arr_64 [12] [i_5] [i_0] = (+((+(((/* implicit */int) var_11)))));
                arr_65 [i_5] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_7 [i_0])) | (((/* implicit */int) var_2)))));
                var_38 = ((/* implicit */signed char) var_7);
            }
        }
        /* LoopNest 2 */
        for (short i_18 = 2; i_18 < 14; i_18 += 3) 
        {
            for (signed char i_19 = 0; i_19 < 16; i_19 += 3) 
            {
                {
                    var_39 = ((/* implicit */signed char) var_3);
                    var_40 += ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)3))));
                }
            } 
        } 
        arr_72 [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) ((unsigned char) var_9)))))));
        arr_73 [(_Bool)0] [6] = ((/* implicit */unsigned char) ((16773120) & (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)5010))))))));
    }
    var_41 ^= ((/* implicit */unsigned char) max((((var_6) * (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)11681)) : (((/* implicit */int) (_Bool)1)))))));
    var_42 = (((+(((/* implicit */int) var_7)))) - (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))));
}

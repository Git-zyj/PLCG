/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34967
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
    var_20 = var_8;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_21 = max((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))))), (((((/* implicit */_Bool) (~(-791413024)))) ? (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_0 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) (signed char)-74);
                            var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -791413022)) | (min((((/* implicit */unsigned long long int) arr_5 [i_3] [i_2])), ((~(17168900740267159499ULL)))))));
                        }
                    } 
                } 
            } 
            arr_12 [i_1] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)185)) : (-791413022)))), (max((390828745613829242ULL), (((/* implicit */unsigned long long int) (unsigned char)81)))))), (((/* implicit */unsigned long long int) var_9))));
            arr_13 [i_1] [i_0] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_19)))), ((~(max((arr_4 [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_1]))))))));
            var_23 ^= ((/* implicit */unsigned int) ((unsigned long long int) (-((~(791413047))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    {
                        arr_21 [i_6] [i_5] [i_6] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [11ULL] [i_5] [i_6] [i_7])) ? (((/* implicit */int) arr_18 [i_0] [i_5] [i_6] [i_6] [i_6] [i_7])) : (arr_8 [i_0] [i_5] [i_6] [i_7])));
                        arr_22 [i_5] [i_7] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        arr_23 [i_0] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */int) ((unsigned int) var_8));
                        var_24 = ((/* implicit */unsigned char) ((var_7) | (arr_8 [i_7] [i_6] [i_5] [i_0])));
                    }
                } 
            } 
            arr_24 [i_0] = ((/* implicit */unsigned int) ((791413024) / (((/* implicit */int) (signed char)-3))));
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                {
                    arr_32 [i_10] [i_9] [i_10] = ((/* implicit */int) (~(var_14)));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 += ((((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_9 - 1] [i_9 - 1])) ? (arr_25 [i_9 - 1]) : (((((/* implicit */_Bool) arr_30 [i_8] [i_9])) ? (8218417221703567519ULL) : (((/* implicit */unsigned long long int) var_11)))));
                        var_26 *= ((/* implicit */short) (+(-791413025)));
                    }
                    arr_35 [i_8] [i_9] [i_10] = ((/* implicit */short) arr_31 [i_8] [(unsigned char)15] [i_10] [i_9 + 1]);
                    arr_36 [i_9 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_34 [i_8] [i_9 + 1] [i_10] [i_9] [i_10] [i_10])) : (((/* implicit */int) var_16))));
                    var_27 = ((/* implicit */unsigned int) ((unsigned long long int) arr_31 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1]));
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) (unsigned char)255);
        arr_37 [i_8] = ((/* implicit */int) var_14);
    }
    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 1) 
    {
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) max((((((/* implicit */_Bool) 773704879U)) ? (4294967283U) : (((/* implicit */unsigned int) 1262419236)))), (((/* implicit */unsigned int) (unsigned short)20442)))))));
        /* LoopSeq 4 */
        for (short i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            var_30 = ((/* implicit */signed char) var_1);
            var_31 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_13] [i_13]))) : (3452541153U))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ? ((-(min((((/* implicit */int) arr_34 [i_12] [i_12] [i_12] [i_13] [i_12] [i_13])), (var_19))))) : (min((arr_42 [i_12]), (arr_42 [i_13])))));
            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_31 [i_12] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_31 [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_31 [i_13] [i_13] [i_12] [i_12])))) : (((/* implicit */int) var_16))));
        }
        for (int i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            arr_49 [i_12] = arr_38 [i_14];
            var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_43 [i_12]), (arr_43 [i_12])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) var_2)) : (-1388825540)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_12] [i_14] [i_12])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)1))))) ? (((((/* implicit */_Bool) 927225426)) ? (4732217922832155792ULL) : (((/* implicit */unsigned long long int) 791413024)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [(short)9] [(short)9] [i_14] [i_14]))))))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                for (long long int i_17 = 4; i_17 < 21; i_17 += 3) 
                {
                    {
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)32))))) ? (min((arr_52 [i_12] [(_Bool)1] [i_16]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) var_7))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)70))))))))));
                        arr_59 [i_12] [i_12] [i_15] [i_16] [i_16] = ((/* implicit */_Bool) arr_34 [i_12] [i_12] [i_16] [i_17] [i_16] [i_17 - 2]);
                        var_35 = ((/* implicit */short) ((((-791413044) & (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) var_9))));
                    }
                } 
            } 
            var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_43 [i_15])), (var_19)))) ? (max((arr_39 [i_15]), (arr_33 [i_12] [i_12] [i_12]))) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (arr_58 [8] [i_15] [i_15] [i_12] [i_15]))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17168900740267159499ULL)) ? (arr_52 [i_12] [i_15] [i_15]) : (((/* implicit */unsigned long long int) 940003268U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (10848059949022321730ULL)))));
            var_37 = ((/* implicit */int) arr_43 [(short)0]);
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_62 [i_12] [i_18] = (+(((/* implicit */int) arr_28 [i_12] [i_18])));
            var_38 = 247565050;
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 4; i_19 < 21; i_19 += 3) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 1) 
                {
                    {
                        var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_43 [i_20]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_21 = 2; i_21 < 21; i_21 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_64 [i_21 - 1] [i_19 - 3] [i_19 - 3] [i_20])) & (((/* implicit */int) arr_68 [i_21 - 1] [i_19 - 3] [i_19] [1LL] [i_18]))))));
                            arr_70 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((max((var_15), (((/* implicit */int) (unsigned char)153)))) / (((((/* implicit */int) arr_29 [i_19 - 4])) * (((/* implicit */int) arr_29 [i_19 - 1]))))));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_33 [i_19 - 3] [i_19] [i_12])))) ? (((((/* implicit */_Bool) -791413024)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (short)27891)))) : (((/* implicit */int) ((arr_33 [i_19 - 3] [i_20] [i_12]) != (arr_33 [i_19 - 1] [i_20] [i_12]))))));
                        }
                        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)250)) | (((/* implicit */int) arr_66 [10] [i_19 - 3] [i_19 - 4]))))) ? (var_19) : (((/* implicit */int) min((arr_66 [i_19] [i_19 - 2] [i_19 - 1]), (arr_66 [(short)2] [i_19 - 2] [i_19 + 1]))))));
                    }
                } 
            } 
        }
        arr_71 [i_12] [i_12] = ((/* implicit */short) max(((~(((/* implicit */int) arr_47 [i_12] [i_12])))), (((/* implicit */int) min((arr_47 [i_12] [i_12]), (arr_47 [i_12] [i_12]))))));
        arr_72 [i_12] [i_12] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) -791413046)), (11395122178829701858ULL)))));
        var_43 = ((/* implicit */unsigned char) ((1388825547) == (((/* implicit */int) (signed char)6))));
    }
    var_44 = ((/* implicit */short) ((((/* implicit */int) var_3)) % (max((((383553832) + (1711131427))), (((((/* implicit */int) (short)-15371)) + (-791413046)))))));
    var_45 = ((/* implicit */unsigned int) (+(-1713891906727724214LL)));
}

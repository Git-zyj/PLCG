/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49609
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1 - 2] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 8388607)) ? (6702551481688386079ULL) : (504403158265495552ULL))));
                    arr_8 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0] [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned long long int) 3283742990261747081LL)) : (504403158265495552ULL)));
        arr_11 [i_3] = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_10 [i_3])))));
    }
    for (short i_4 = 1; i_4 < 21; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (signed char i_6 = 1; i_6 < 22; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        arr_23 [0] [i_5] [i_5] [(unsigned char)5] [i_4] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((var_6), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) var_11)))))));
                        var_17 = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_20 [i_4 + 1] [(_Bool)1] [i_6 + 1]), (((/* implicit */unsigned short) var_8))))), ((-(((/* implicit */int) arr_20 [i_4 + 1] [i_4 + 1] [i_6 - 1]))))));
                        var_18 = ((/* implicit */unsigned long long int) var_13);
                        var_19 = ((/* implicit */unsigned char) ((short) min((arr_19 [i_4 + 2]), (((/* implicit */unsigned long long int) arr_18 [i_4 + 2])))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            for (unsigned int i_9 = 2; i_9 < 22; i_9 += 2) 
            {
                for (unsigned int i_10 = 3; i_10 < 22; i_10 += 4) 
                {
                    {
                        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_30 [i_4] [i_4] [i_4 + 2] [i_4] [i_4])), (((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_10])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
                        var_21 += ((/* implicit */unsigned char) var_3);
                        arr_31 [i_4] [i_4] [i_4] [i_4] [i_10] [i_10] = ((/* implicit */int) max((504403158265495552ULL), (((/* implicit */unsigned long long int) max((max((32767LL), (((/* implicit */long long int) (short)-1)))), (32767LL))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
    {
        arr_34 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_14 [i_11]) | (arr_14 [i_11])))) ? (((/* implicit */int) ((arr_14 [i_11]) <= (arr_14 [i_11])))) : (((/* implicit */int) ((short) var_7)))));
        var_22 -= ((/* implicit */long long int) (+(((unsigned int) min((var_6), (((/* implicit */unsigned long long int) var_12)))))));
        var_23 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) arr_30 [8] [i_11] [8] [i_11] [i_11]))))) ? (((/* implicit */unsigned int) ((arr_27 [(short)6] [i_11] [i_11] [i_11]) / (((/* implicit */int) var_2))))) : (arr_33 [i_11]));
        arr_35 [i_11] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) <= (17942340915444056063ULL))))))) ? (((/* implicit */unsigned long long int) -489551951)) : (max((((/* implicit */unsigned long long int) var_8)), (17942340915444056064ULL))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_12 = 2; i_12 < 17; i_12 += 1) 
    {
        arr_40 [i_12] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) min((((/* implicit */int) var_12)), (1986348744))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 4) 
        {
            arr_45 [i_12] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((int) 117440512))) - (var_10)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_9 [i_12 - 2]) : (arr_9 [i_12 - 2])))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 504403158265495552ULL)) ? (((/* implicit */int) arr_12 [i_13])) : (((/* implicit */int) (unsigned char)48))))), (max((17942340915444056064ULL), (((/* implicit */unsigned long long int) (unsigned char)231))))))));
            var_24 = ((/* implicit */short) max((var_7), (((/* implicit */long long int) arr_25 [i_12] [i_13] [i_13]))));
        }
        for (int i_14 = 4; i_14 < 15; i_14 += 4) 
        {
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_6))));
            var_26 = ((/* implicit */int) min((((/* implicit */unsigned int) ((min((arr_38 [i_12] [i_14]), (((/* implicit */int) (unsigned char)255)))) % (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_22 [i_12] [i_12] [i_12 - 2] [i_12] [i_14] [20U])) ? (min((((/* implicit */unsigned int) var_13)), (arr_21 [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-1) > ((-2147483647 - 1))))))))));
            arr_48 [i_14] = ((/* implicit */unsigned short) ((max((arr_26 [(unsigned char)10] [i_14] [(unsigned char)10]), (var_0))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_26 [i_14] [i_14] [i_14])))));
            arr_49 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_14]))) == (((((/* implicit */_Bool) arr_9 [i_12 - 2])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)0)), (8388607)))) : (((unsigned long long int) (short)24088))))));
            var_27 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_5)) / (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_9)))))), (((/* implicit */int) min((arr_43 [i_12 + 1]), (((/* implicit */unsigned short) arr_39 [i_12 + 1])))))));
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 1) 
    {
        var_28 = (-(max((((/* implicit */unsigned int) -1986348744)), (var_14))));
        var_29 = var_4;
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 16; i_16 += 1) 
        {
            var_30 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) 32767LL)))));
            /* LoopNest 3 */
            for (unsigned char i_17 = 0; i_17 < 16; i_17 += 4) 
            {
                for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) 
                {
                    for (unsigned char i_19 = 1; i_19 < 14; i_19 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) ((arr_52 [i_15] [i_16] [i_19 + 1]) ^ (arr_52 [(signed char)5] [i_16] [i_19 + 2])));
                            var_32 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_46 [i_17] [i_17])) : (((/* implicit */int) (short)-7845))))));
                            var_33 = ((/* implicit */_Bool) 67216098562107324ULL);
                            arr_65 [i_15] [(signed char)1] [(signed char)1] [(signed char)6] [5] [i_15] [i_19 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_56 [i_15] [i_15] [i_17] [(signed char)14])) * (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) -8738504549906242753LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_58 [i_15] [i_16] [i_15] [i_19])))) : (((/* implicit */int) var_8))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (unsigned short)62927))));
                        }
                    } 
                } 
            } 
            arr_66 [i_15] [i_15] [i_16] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-28817))));
            var_35 = (((!(((/* implicit */_Bool) (unsigned char)241)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : ((+(arr_32 [i_15]))));
            arr_67 [i_15] [i_16] = ((/* implicit */unsigned int) (-(var_4)));
        }
        for (short i_20 = 0; i_20 < 16; i_20 += 4) 
        {
            arr_72 [2LL] [i_20] [i_20] |= ((/* implicit */unsigned char) var_1);
            var_36 = ((/* implicit */int) var_10);
            var_37 = ((/* implicit */int) ((short) (unsigned char)0));
        }
        for (unsigned int i_21 = 0; i_21 < 16; i_21 += 1) 
        {
            arr_77 [i_15] [i_15] [i_21] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) var_8)))));
            var_38 = ((/* implicit */signed char) min((((/* implicit */int) var_12)), ((+(arr_37 [i_15] [i_15])))));
        }
        for (int i_22 = 0; i_22 < 16; i_22 += 1) 
        {
            var_39 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_74 [12])) && (((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) (signed char)-4)) ? (arr_60 [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [(short)0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 1634346074)))))))))));
            var_40 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (504403158265495552ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_55 [i_15]), (var_12)))) / (((/* implicit */int) (unsigned char)96)))))));
        }
    }
}

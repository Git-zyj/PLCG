/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249950
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
    var_16 = ((/* implicit */long long int) (!(var_13)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_17 += ((/* implicit */int) (!(((/* implicit */_Bool) -2060260909))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_1 [i_0]))));
    }
    for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_7 [i_2] [13LL] = ((/* implicit */_Bool) arr_0 [i_1 - 2] [i_2]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                var_19 ^= ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) == (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
                var_20 = ((/* implicit */signed char) arr_9 [i_2] [i_2] [i_2]);
                var_21 = ((/* implicit */signed char) arr_6 [i_1 - 1] [i_2] [i_3]);
                var_22 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)55)) != (((/* implicit */int) (_Bool)1))))) > (((/* implicit */int) (_Bool)1))));
            }
            arr_11 [i_2] [i_1 - 1] = ((/* implicit */unsigned short) (+(1088776833)));
        }
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((((((/* implicit */_Bool) 23LL)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_1 [9ULL])) ? (-8587586148826581852LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))), (((/* implicit */long long int) 1534505264U)))))));
            var_24 |= ((/* implicit */unsigned long long int) (((-((~(((/* implicit */int) arr_5 [i_1])))))) != ((~(((/* implicit */int) ((arr_9 [i_1] [i_1] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_1 - 2] [i_1 - 1]))))))))));
        }
        arr_16 [i_1] = ((/* implicit */unsigned int) min((max((((/* implicit */int) ((25LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1])))))), ((-(((/* implicit */int) (unsigned short)4721)))))), (-1544716554)));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_1 - 2])), (2079768906)))) ? ((-(((/* implicit */int) arr_2 [i_1 - 1])))) : (((/* implicit */int) arr_2 [i_1 - 1])))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */signed char) min((((unsigned long long int) 2760462032U)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (short i_9 = 2; i_9 < 20; i_9 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */long long int) 2760462009U)) : (arr_0 [i_5] [i_5])))) ? ((~(((/* implicit */int) (unsigned short)11810)))) : (((/* implicit */int) (_Bool)1))));
                            var_27 = ((/* implicit */long long int) (unsigned short)2018);
                            var_28 = arr_23 [i_9 - 1] [i_8] [i_6];
                            arr_29 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */unsigned short) (-((-(-2079768902)))));
                            arr_30 [i_5] [i_5] [i_7] [i_8] [i_9 + 1] = (!(((/* implicit */_Bool) ((3370723980371637444LL) / (arr_9 [i_5] [i_6] [(_Bool)1])))));
                        }
                    } 
                } 
            } 
            var_29 *= ((/* implicit */unsigned short) (+(((unsigned long long int) (signed char)3))));
            var_30 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        }
        for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_5]))), (((/* implicit */long long int) min((558156432U), (((/* implicit */unsigned int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) min((2832782260U), (((/* implicit */unsigned int) arr_21 [i_11] [9ULL] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */unsigned long long int) 1534505288U)) & (1ULL))))) : (((/* implicit */unsigned long long int) min((((1462185045U) >> (((arr_24 [i_5] [i_10]) + (224455771))))), (((/* implicit */unsigned int) ((arr_8 [i_5] [7LL] [i_11] [i_5]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)8))))))))))))));
                arr_36 [(_Bool)1] [(_Bool)1] [i_11] |= ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5]))) == (1462185036U)))), (((unsigned short) arr_14 [12LL]))))), (min((((/* implicit */long long int) max(((signed char)18), (((/* implicit */signed char) (_Bool)1))))), (min((arr_8 [23ULL] [i_10] [23ULL] [i_10]), (((/* implicit */long long int) (unsigned char)255))))))));
                var_32 ^= ((/* implicit */int) (~(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_10] [i_10] [i_5]))))), (((2832782252U) ^ (((/* implicit */unsigned int) 2097151))))))));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-8))))))))) / (max((2832782265U), (((/* implicit */unsigned int) (unsigned char)7))))));
                            var_34 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), ((-(2395766794306850503LL))))))));
                            var_35 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned int) ((int) (unsigned short)24027))) : ((+(2760462036U))))), (((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_19 [i_5] [i_13])))))));
                            var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2760462017U)) & (max((arr_42 [i_5] [i_12] [i_11] [i_10] [i_5]), (((/* implicit */long long int) (-(((/* implicit */int) (short)8)))))))));
                            var_37 = ((/* implicit */_Bool) min((var_37), ((_Bool)1)));
                        }
                    } 
                } 
            }
            arr_43 [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -2079768908)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (2658733396308744492ULL)))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 25; i_14 += 1) 
    {
        for (short i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            {
                var_38 |= ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_45 [(unsigned char)2]))))) % (max((((2832782252U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_47 [i_14] [i_14])), (-2097129))))))));
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (short i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        {
                            arr_55 [i_14] [i_17] [i_16] [i_17] = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)32)), (4ULL)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-53)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_14] [i_15] [i_15]))))))), (((((/* implicit */int) arr_51 [12LL] [i_15] [i_16] [12LL])) >> (((((/* implicit */int) ((unsigned char) 1462185043U))) - (70)))))));
                            var_39 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_51 [i_14] [i_15] [i_16] [i_17])))) - (((/* implicit */int) ((_Bool) (((_Bool)1) && (((/* implicit */_Bool) (signed char)1))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_18 = 1; i_18 < 23; i_18 += 3) 
                {
                    for (unsigned char i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        {
                            arr_64 [(signed char)11] [(signed char)5] [(signed char)11] [i_19] |= ((/* implicit */int) arr_51 [i_14] [6] [(short)4] [i_14]);
                            var_40 += ((/* implicit */signed char) -2079768891);
                            var_41 = ((max(((~(((/* implicit */int) (unsigned short)58028)))), (((((/* implicit */int) arr_61 [i_19] [i_18 + 2] [i_15] [17])) - (((/* implicit */int) arr_49 [i_14] [i_15])))))) << (((max((2079768900), (-2079768927))) - (2079768898))));
                        }
                    } 
                } 
                var_42 -= ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)31)), (max((((((/* implicit */unsigned int) 2079768924)) - (arr_63 [i_14] [i_15] [i_15] [i_14] [i_14]))), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (arr_50 [i_15] [(unsigned short)3] [i_14]))))))));
            }
        } 
    } 
    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)0))))));
    /* LoopNest 2 */
    for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 3) 
    {
        for (signed char i_21 = 2; i_21 < 11; i_21 += 1) 
        {
            {
                var_44 = (!(((/* implicit */_Bool) (unsigned short)26396)));
                var_45 |= ((/* implicit */int) max((((/* implicit */long long int) arr_47 [i_21] [i_20])), (max((3564728554498113752LL), (((((/* implicit */long long int) ((/* implicit */int) (short)-16052))) & (17179869183LL)))))));
            }
        } 
    } 
}

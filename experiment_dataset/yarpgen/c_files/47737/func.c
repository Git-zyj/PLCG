/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47737
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (+((+(arr_1 [i_0]))))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0])))), (((((/* implicit */unsigned long long int) arr_1 [i_0])) - (17249636789920065181ULL)))))) || (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_10))) != (min((((/* implicit */unsigned long long int) var_0)), (17249636789920065162ULL)))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_19 *= min((max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_6 [i_3 + 1])) : (((/* implicit */int) (signed char)-95)))), (((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) arr_4 [i_0])));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) (!(((((/* implicit */_Bool) 3309653788U)) || (((/* implicit */_Bool) arr_1 [i_1]))))))) != (arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_4 - 3]))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) var_7)) <= ((~(((/* implicit */int) arr_10 [i_4 + 1] [i_3 - 2] [i_3 + 1] [i_2 - 1] [1ULL] [i_0])))))))));
                            var_23 = ((/* implicit */long long int) var_3);
                            var_24 = ((/* implicit */long long int) arr_6 [i_1]);
                            arr_12 [(signed char)2] [i_3] = ((/* implicit */unsigned int) -895206873230477521LL);
                        }
                        var_25 = ((/* implicit */short) (+(min((((/* implicit */long long int) max((arr_3 [i_2] [i_1] [i_0]), (((/* implicit */int) arr_6 [i_2]))))), (var_12)))));
                        var_26 = ((/* implicit */short) min((((((/* implicit */_Bool) 1593481152U)) ? ((-(-8109446991877579847LL))) : ((~(var_4))))), (((/* implicit */long long int) min((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2]))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_1 [i_1]) : (arr_1 [i_0]))), ((+(arr_1 [i_1]))))))));
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                arr_18 [i_0] [i_5] [i_6] [i_6] = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) 1197107283789486421ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))))))) + (((/* implicit */unsigned long long int) 1646851439))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        {
                            var_28 = (+(max((arr_11 [i_0] [i_0] [i_6]), (((/* implicit */long long int) (~(var_11)))))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((arr_1 [i_0]) % (((/* implicit */int) (signed char)101))))) == ((~(var_12)))))) <= (((((/* implicit */_Bool) arr_22 [10ULL] [i_5] [i_6 - 1] [i_0] [i_5] [i_5])) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (_Bool)0))))))));
                            var_30 = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    {
                        arr_28 [i_10] [i_9] [i_9 + 1] [i_5] [i_0] |= ((/* implicit */signed char) (_Bool)1);
                        arr_29 [i_10] [i_9 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (var_6))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (6496156020904092699ULL) : (1197107283789486412ULL))) : ((~(var_8)))))) ? (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) max((1197107283789486445ULL), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) var_5)) : ((-(1197107283789486435ULL)))))));
                        arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */short) arr_21 [i_9 + 2] [i_9 - 2] [i_9 + 1] [i_9] [i_9] [i_9 + 2] [i_9])), (var_16))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_11 = 2; i_11 < 10; i_11 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    arr_37 [(signed char)10] [(signed char)10] [i_11 - 1] [i_12] [i_12] [i_12] = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0]);
                    arr_38 [i_0] [i_11 - 1] [i_11 - 1] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-17263)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11 - 2] [(_Bool)1]))))) == (((/* implicit */unsigned long long int) ((long long int) arr_20 [i_5] [i_11 - 2] [i_11 - 2] [i_12] [i_12] [6U])))));
                }
                for (short i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) max(((~(arr_19 [i_0] [i_11 + 2] [i_14 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ ((-(((/* implicit */int) (unsigned char)95))))))))))));
                        var_32 = ((/* implicit */_Bool) min((arr_15 [i_14 - 1] [i_13]), (((/* implicit */long long int) arr_31 [i_11] [i_5] [i_11] [i_13]))));
                        arr_43 [i_0] [i_0] [i_0] [i_13] = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_36 [i_14] [(_Bool)1] [i_14] [i_14 - 1] [i_14 - 1]))))) == ((+(arr_11 [i_14 - 1] [i_0] [i_0])))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        arr_46 [i_0] [(short)3] [i_11 - 2] [i_13] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_25 [i_11 + 2] [i_11 - 1] [i_11 - 2])) : (((/* implicit */int) arr_25 [i_11 + 2] [i_11 - 1] [i_11 - 2]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((min((var_14), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) var_13)))))));
                        var_33 -= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_36 [(short)8] [i_11 - 2] [i_11 - 2] [i_11 - 1] [i_11 + 2])))), (((/* implicit */int) var_0))));
                        arr_47 [i_0] [i_0] [i_0] [i_0] [(short)7] = ((/* implicit */_Bool) var_14);
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_11 - 1] [i_11 - 1] [i_13] [i_15]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_11 - 1] [i_11 - 1] [i_11] [i_15])))))));
                    }
                    for (short i_16 = 2; i_16 < 8; i_16 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) var_15)) ^ (arr_44 [i_11] [1] [(_Bool)1] [i_11 + 2] [i_11 + 2] [i_11] [i_11 - 2])))));
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_4)))) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6))), (((/* implicit */unsigned long long int) (+(arr_24 [i_16 + 3] [i_13] [(_Bool)1] [i_0])))))) : (((/* implicit */unsigned long long int) (~(max((arr_49 [i_11 - 2]), (((/* implicit */unsigned int) (_Bool)1)))))))));
                        var_37 ^= ((/* implicit */short) var_13);
                    }
                    arr_50 [i_0] [(_Bool)1] [i_11] [i_11] [i_5] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-29978))));
                }
                arr_51 [i_0] = var_1;
            }
            arr_52 [5U] [i_0] [i_0] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0]))) : (arr_34 [i_5] [6ULL] [i_0] [i_0]))))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_39 [i_0] [i_5])))))));
        }
        for (short i_17 = 3; i_17 < 10; i_17 += 4) 
        {
            arr_56 [i_17 - 3] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_40 [i_17 - 2] [(unsigned char)11] [i_17 - 1] [i_17] [i_17] [i_17])) > (((/* implicit */int) arr_40 [i_17 - 1] [i_17] [i_17] [i_17] [i_17] [i_17]))))) % (((/* implicit */int) ((var_9) > (var_8))))));
            /* LoopSeq 1 */
            for (short i_18 = 2; i_18 < 11; i_18 += 4) 
            {
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_17 - 3] [i_18 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_17] [i_17] [i_17] [i_17 - 1])) || (((/* implicit */_Bool) arr_34 [i_0] [i_17 - 3] [i_18 - 2] [i_17 + 1]))))) : (((/* implicit */int) arr_54 [i_18 - 1] [i_17 - 1] [i_17 - 3]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    var_39 = ((/* implicit */unsigned long long int) min((var_39), ((~(arr_34 [i_19] [i_18 - 2] [i_17 - 2] [i_0])))));
                    /* LoopSeq 2 */
                    for (short i_20 = 2; i_20 < 9; i_20 += 1) 
                    {
                        arr_66 [i_19] [i_17] [i_19] [(short)1] [i_19] [i_20] = ((/* implicit */int) arr_36 [i_17] [i_19] [i_18 - 2] [i_17] [i_0]);
                        arr_67 [i_0] [i_0] [i_17] [i_0] [i_17] [i_17] [i_20 + 1] = ((/* implicit */short) (-((-(((/* implicit */int) (signed char)-27))))));
                    }
                    for (short i_21 = 0; i_21 < 12; i_21 += 1) 
                    {
                        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((arr_19 [i_17 - 1] [i_17 - 1] [i_17 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                        var_41 |= ((/* implicit */signed char) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        var_42 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
                    }
                    arr_70 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) > (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                    arr_71 [i_0] [i_17] = ((/* implicit */_Bool) arr_0 [i_0]);
                }
                for (int i_22 = 2; i_22 < 10; i_22 += 4) 
                {
                    arr_74 [i_0] [i_17] [i_0] [i_17] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((((/* implicit */int) (short)-2246)) + (2147483647))) << (((arr_53 [i_0] [i_18]) - (16739630490939727691ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_18 - 2] [i_18 + 1] [i_18 - 1]))) : (arr_42 [i_0] [i_0] [i_0] [i_0] [i_18] [i_22] [i_0])))));
                    /* LoopSeq 1 */
                    for (signed char i_23 = 2; i_23 < 8; i_23 += 4) 
                    {
                        var_43 = arr_39 [i_0] [i_0];
                        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (~(max((arr_19 [i_17 - 2] [i_22 + 1] [(short)8]), (arr_27 [i_22 - 1] [i_17 + 1] [i_17 - 3] [(_Bool)1] [i_0]))))))));
                        arr_79 [i_0] [i_17 + 1] [i_17 + 2] [i_18] [i_17 + 2] [0LL] = ((/* implicit */short) 866352158U);
                    }
                }
                for (short i_24 = 1; i_24 < 8; i_24 += 4) 
                {
                    arr_82 [i_0] [i_0] [i_18] [i_18] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_48 [9] [i_18] [i_18] [i_17 + 1] [i_0]) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) arr_0 [i_0]))))))))));
                    var_45 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(3745837855109905687LL)))) ? (((/* implicit */int) min((arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) ((1865094487U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-11141))))))))));
                    var_46 = ((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) - (arr_26 [(unsigned short)0] [i_17 + 1]))))));
                }
                var_47 &= ((/* implicit */unsigned long long int) (signed char)-97);
            }
            /* LoopNest 2 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                for (short i_26 = 0; i_26 < 12; i_26 += 1) 
                {
                    {
                        var_48 ^= ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_3)))), ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((-6701619753039965940LL) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-20217)) : (((/* implicit */int) (unsigned short)59111)))))))) : (((((/* implicit */int) arr_14 [i_0] [i_17])) + (((((/* implicit */int) arr_9 [i_17] [i_25] [i_25] [i_17] [i_0])) - (((/* implicit */int) var_14))))))));
                        arr_88 [i_0] [i_17] [i_25] [i_26] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [8] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_0] [i_17 - 1] [i_25] [i_26] [(unsigned short)5]))) : (arr_62 [i_26] [i_25] [i_17] [i_0] [i_0]))));
                    }
                } 
            } 
        }
    }
    var_49 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) != (var_17))))))));
}

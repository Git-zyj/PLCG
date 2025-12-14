/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43886
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
    var_11 |= ((/* implicit */short) ((((((/* implicit */int) (short)-19494)) / (((/* implicit */int) (unsigned char)48)))) + (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))), (((((/* implicit */int) var_3)) - (((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [(signed char)5] [(signed char)5] [(signed char)5] = ((/* implicit */signed char) arr_5 [i_2] [i_2] [i_2] [i_2]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 += ((/* implicit */signed char) (-(var_0)));
                        var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) ((((/* implicit */int) (short)7688)) / (((/* implicit */int) (signed char)-126))))) ? (((((/* implicit */int) arr_1 [(unsigned char)19])) / (((/* implicit */int) var_10)))) : (arr_6 [i_0] [i_0])))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        arr_14 [13U] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_4]))) : (arr_10 [i_4] [i_2] [i_1]))) <= (arr_9 [i_0 - 1] [i_0 - 1] [(signed char)19] [i_2])));
                        arr_15 [i_0] [i_0] [i_0] = arr_9 [i_1] [i_1] [i_0 + 2] [i_4];
                    }
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_5] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) (-(((((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_2] [i_5] [i_5])))) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) min((arr_3 [1U]), (arr_17 [i_0 + 3] [i_1] [i_2] [i_1]))))))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)));
                        var_15 ^= ((/* implicit */unsigned int) (+(((((((/* implicit */unsigned long long int) arr_6 [i_1] [(_Bool)1])) & (0ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1])))))));
                        arr_20 [i_5] [(unsigned char)15] [(unsigned char)15] [i_2] [i_5] [i_5] = max((((arr_18 [i_0] [i_0] [(_Bool)1] [i_5]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_9)))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_1] [16] [(signed char)0])) % (((/* implicit */int) arr_0 [i_0])))) << (min((((/* implicit */unsigned int) arr_4 [i_5])), (arr_12 [(short)12] [i_1] [i_1] [i_5])))))));
                    }
                    var_16 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)60)) & (((/* implicit */int) (unsigned char)64))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (int i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        var_17 = ((/* implicit */signed char) var_8);
        var_18 ^= ((/* implicit */short) max((((/* implicit */int) var_5)), ((-2147483647 - 1))));
    }
    for (short i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 4; i_8 < 22; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_7)) + (2147483647))) << (((((((/* implicit */_Bool) arr_27 [i_7] [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_32 [i_7] [i_8 + 2] [i_7] [14U])))) - (225))))) + (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_3))))) <= (min((((/* implicit */long long int) arr_27 [(_Bool)1] [i_8])), (var_0))))))));
                    arr_33 [i_9] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_31 [i_8 - 3] [i_8 - 3]))))) << (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_31 [i_7] [i_7])), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_27 [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_25 [i_7] [i_7])))))));
                    var_20 = ((/* implicit */long long int) max((12359053475209187233ULL), (((/* implicit */unsigned long long int) -1714154374))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */long long int) ((/* implicit */int) var_9))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [16] [16]))) : (arr_26 [i_9])))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_31 [i_7] [10LL])), (arr_28 [i_7] [i_7] [(unsigned char)3])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) -1714154364)) && (((/* implicit */_Bool) (((_Bool)1) ? (1714154371) : (-1714154376)))))))));
    }
    for (short i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                {
                    arr_41 [i_10] [i_11] [i_11] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_35 [(signed char)19] [i_11])) % (((/* implicit */int) var_10)))) % (((((/* implicit */int) var_10)) << (((((((/* implicit */int) arr_30 [i_10])) + (54))) - (6)))))))) ? (((((/* implicit */int) arr_36 [i_12])) / (((((/* implicit */int) arr_31 [i_10] [i_11])) + (arr_40 [i_10] [(signed char)16] [i_11] [i_12]))))) : (((/* implicit */int) var_4))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 4; i_13 < 23; i_13 += 1) 
                    {
                        for (int i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            {
                                arr_48 [i_11] = ((/* implicit */unsigned char) arr_36 [18LL]);
                                var_23 = ((/* implicit */_Bool) ((((arr_39 [i_11] [i_14] [(short)16]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_13 - 2]))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) -1714154374)) : (12461259573556303545ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_40 [(signed char)11] [i_13 - 4] [(unsigned char)6] [(unsigned char)14])) != (arr_45 [(unsigned char)8] [i_13 + 2] [(unsigned char)11] [(unsigned char)11] [i_14] [i_13])))))));
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) : (8397225038493468100LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1338433424)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)162))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) : (var_0));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 ^= ((/* implicit */unsigned short) var_7);
        /* LoopSeq 2 */
        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) 
        {
            var_26 *= ((/* implicit */unsigned long long int) var_6);
            var_27 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_25 [i_15] [i_15])), (var_1)));
        }
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 25; i_16 += 2) 
        {
            var_28 = ((/* implicit */long long int) var_10);
            arr_54 [i_16] [24LL] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) >> (((((/* implicit */_Bool) 2558482968U)) ? (((/* implicit */int) (unsigned char)1)) : (-1714154381)))));
        }
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_39 [i_10] [i_10] [i_10]))));
        /* LoopSeq 1 */
        for (unsigned char i_17 = 1; i_17 < 21; i_17 += 2) 
        {
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)44), ((signed char)40)))) ? (((/* implicit */int) max((arr_56 [i_10] [i_10]), (arr_56 [i_10] [i_10])))) : (((/* implicit */int) var_7)))))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_8))) << (((/* implicit */int) arr_32 [i_10] [i_10] [i_10] [i_10]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_49 [i_10] [i_17])) ? (arr_34 [(signed char)7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_10] [i_17]))))) != ((+(arr_39 [i_17] [i_17] [(_Bool)1])))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_17] [i_17] [i_17] [(signed char)15] [i_17]))) < (arr_45 [i_10] [i_10] [i_10] [8LL] [i_17] [i_17])))))));
            /* LoopNest 3 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (unsigned char i_19 = 0; i_19 < 25; i_19 += 2) 
                {
                    for (unsigned int i_20 = 1; i_20 < 24; i_20 += 4) 
                    {
                        {
                            var_32 *= ((/* implicit */_Bool) min((((/* implicit */int) min(((signed char)-41), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */int) arr_59 [i_19])) - (((((/* implicit */int) (unsigned char)83)) << (((((/* implicit */int) (unsigned short)28902)) - (28884)))))))));
                            arr_67 [i_10] [(signed char)12] [i_10] [i_10] [i_17] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (((((((/* implicit */_Bool) arr_42 [i_10] [(_Bool)0] [i_10])) && (arr_32 [i_10] [i_17] [i_17] [i_10]))) ? (var_8) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)36633)))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_21 = 0; i_21 < 25; i_21 += 1) 
            {
                var_33 -= ((/* implicit */unsigned char) var_0);
                var_34 = ((/* implicit */unsigned long long int) max((var_34), (min((((/* implicit */unsigned long long int) min((-1714154376), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [(signed char)19] [(signed char)19])) & (((/* implicit */int) (unsigned short)28902))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-1024)), ((unsigned short)0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_17 + 3]))) / (var_2)))))))));
            }
        }
    }
    for (short i_22 = 0; i_22 < 25; i_22 += 4) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (3163812056U) : (1609875967U)));
        /* LoopSeq 3 */
        for (short i_23 = 0; i_23 < 25; i_23 += 1) 
        {
            var_36 -= ((/* implicit */signed char) ((((arr_74 [i_22]) ? (((/* implicit */int) arr_74 [i_23])) : (((/* implicit */int) arr_74 [(_Bool)1])))) < (((/* implicit */int) arr_43 [i_22]))));
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_55 [i_22] [i_23] [(signed char)8]), (arr_55 [i_22] [i_22] [i_22])))), (var_0))))));
        }
        for (short i_24 = 0; i_24 < 25; i_24 += 4) 
        {
            var_38 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_30 [i_22])) + (2147483647))) << (((((/* implicit */int) arr_49 [(unsigned char)21] [i_24])) - (106)))));
            /* LoopNest 3 */
            for (unsigned long long int i_25 = 0; i_25 < 25; i_25 += 4) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    for (short i_27 = 1; i_27 < 24; i_27 += 4) 
                    {
                        {
                            var_39 |= ((/* implicit */signed char) var_5);
                            arr_89 [(signed char)5] [i_27] [i_27] [i_22] = ((/* implicit */_Bool) ((var_2) | (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) << (((arr_52 [i_27] [i_25] [i_22]) - (8569861670207551205LL))))) | (((/* implicit */int) arr_59 [i_27])))))));
                            arr_90 [i_22] [6] [6] &= ((/* implicit */unsigned long long int) var_9);
                            var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_64 [i_27 - 1] [19LL] [i_27] [i_27 + 1] [i_27] [i_27 + 1]), (arr_64 [i_27 - 1] [1] [i_27] [i_27 - 1] [i_27 + 1] [i_27 - 1])))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_27 - 1] [i_27] [i_27] [i_27 - 1] [i_27] [i_27])))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_28 = 0; i_28 < 25; i_28 += 1) 
        {
            var_41 = ((/* implicit */unsigned int) (-(arr_69 [i_28])));
            var_42 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_22] [i_28])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_47 [i_22] [i_22] [i_28] [i_22] [i_28]))))) : (((((/* implicit */_Bool) -285577507)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61336))) : (2685091329U)))))) + (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)165)), (arr_38 [i_22] [i_28])))), (arr_77 [i_28] [i_28] [i_22])))));
            var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_28] [i_28] [i_22])) && (((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) arr_29 [i_22] [i_28])))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_22])))))));
        }
        var_44 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_22] [i_22] [i_22] [(short)24] [i_22] [i_22])) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) var_4)) / (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (unsigned char)15)) : ((+(((/* implicit */int) (short)8191))))))) : (((((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [(unsigned short)7]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)5)))))))));
    }
}

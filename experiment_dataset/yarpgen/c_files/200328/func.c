/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200328
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */unsigned long long int) var_2)) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-6183))))), (var_7)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) 0U);
        arr_3 [i_0] |= ((/* implicit */unsigned short) (~(max((arr_1 [i_0]), (((/* implicit */long long int) (unsigned short)6))))));
        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (max((max((var_16), (var_15))), (arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_0 [i_1]);
            arr_7 [i_1] = ((/* implicit */_Bool) var_1);
            var_20 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) arr_5 [i_1] [i_1 - 3])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                var_21 += ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) var_5))))) : (((/* implicit */int) var_3)))), ((-(((/* implicit */int) (unsigned short)64399))))));
                var_22 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (arr_1 [i_1 + 1]))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (139611588448485376ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)13215), (((/* implicit */unsigned short) arr_8 [i_2] [i_0] [(_Bool)1] [i_0])))))) : (max((arr_1 [i_1]), (((/* implicit */long long int) (_Bool)1)))))) : (((arr_1 [i_2]) >> (((((/* implicit */int) ((short) var_15))) - (1102)))))));
            }
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */int) var_9);
                            arr_21 [i_3] [i_0] [i_3] [i_3] [i_3] [(_Bool)1] = ((short) (signed char)-25);
                        }
                    } 
                } 
                var_24 -= ((/* implicit */int) (_Bool)1);
            }
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    var_25 -= arr_15 [i_3 - 1] [0ULL] [i_3 - 1] [i_3];
                    /* LoopSeq 4 */
                    for (long long int i_9 = 2; i_9 < 16; i_9 += 3) 
                    {
                        arr_30 [(unsigned char)0] [(unsigned char)0] [i_3] [i_3] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_5)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) var_10))));
                        var_26 = ((/* implicit */signed char) ((unsigned char) var_3));
                    }
                    for (unsigned short i_10 = 2; i_10 < 17; i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_3] [i_7] [i_7] [i_8] [i_3] [i_7] = ((/* implicit */unsigned long long int) var_3);
                        arr_35 [16U] [(signed char)7] [i_3] [i_7] [i_3] = ((long long int) ((((/* implicit */_Bool) 3216394869U)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (short)-9663))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_26 [i_3 - 1] [i_3] [i_3] [(unsigned short)14] [i_10]))));
                    }
                    for (unsigned short i_11 = 2; i_11 < 17; i_11 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) var_1);
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) arr_10 [i_0] [i_7]))));
                        arr_39 [i_8] [i_3] [i_8] [i_7] [i_3] [i_8] [5U] = ((/* implicit */int) ((((((/* implicit */int) var_3)) - (((/* implicit */int) var_1)))) == (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1]))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9656)) ? (((/* implicit */int) ((((/* implicit */unsigned int) -1058564465)) == (4294967287U)))) : (((/* implicit */int) (unsigned short)137))));
                    }
                    for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */_Bool) 0LL);
                        var_32 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_23 [(short)4])))));
                        var_33 = ((/* implicit */unsigned long long int) (unsigned short)23164);
                        var_34 = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_8] [i_3]);
                        arr_43 [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)200)) || (((/* implicit */_Bool) 531009023711458793LL)))) ? (((((/* implicit */_Bool) (unsigned short)23164)) ? (arr_42 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_0] [i_3] [i_3])))));
                    }
                }
                for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_14 = 1; i_14 < 17; i_14 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_0] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_14])) ? (((/* implicit */int) arr_47 [i_14 + 1] [i_3 - 1] [i_3])) : (((/* implicit */int) var_13))));
                        var_36 = ((/* implicit */unsigned long long int) (signed char)43);
                    }
                    for (signed char i_15 = 1; i_15 < 17; i_15 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_12))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_12)))), (((((/* implicit */_Bool) arr_33 [(unsigned short)4] [i_3] [i_7] [i_13] [i_3])) ? (arr_11 [i_3] [i_7] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) arr_19 [i_15 + 1] [i_15 + 1] [i_3 - 1])) ? (((((/* implicit */_Bool) var_8)) ? (arr_24 [i_0] [(unsigned short)10] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_13] [i_3] [i_7] [i_13]))))) : (min((arr_32 [i_0] [i_0] [i_0] [i_7] [(signed char)14]), (((/* implicit */long long int) (!((_Bool)1))))))));
                    }
                    var_39 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_7])) ? (2760209697U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245)))))) && (((/* implicit */_Bool) (((_Bool)1) ? (13650930266174034599ULL) : (((/* implicit */unsigned long long int) var_16))))))));
                    var_40 -= ((/* implicit */unsigned long long int) arr_1 [i_3]);
                }
                var_41 ^= ((/* implicit */short) ((((/* implicit */_Bool) 1339125877U)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (signed char)44))));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_42 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_37 [i_3 - 1] [14ULL] [i_3] [8LL] [0ULL] [14ULL] [i_3 - 1]))) ? (max((((/* implicit */int) var_5)), (arr_25 [i_0] [i_0] [i_3 - 1] [i_3] [i_3]))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)30178)), ((unsigned short)65531))))));
                    var_43 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_7] [i_7]))) : (2258479737U)))));
                }
            }
            var_44 = ((/* implicit */unsigned int) arr_48 [i_0] [i_3 - 1] [i_3] [i_0]);
        }
    }
    /* LoopSeq 1 */
    for (signed char i_17 = 0; i_17 < 25; i_17 += 4) 
    {
        var_45 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_52 [i_17])), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_2)) : (var_15))))), (((/* implicit */long long int) arr_53 [i_17] [i_17]))));
        arr_55 [i_17] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((1339229794U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_17])) ? (((/* implicit */int) arr_52 [i_17])) : (((/* implicit */int) var_11))))) : (((arr_53 [i_17] [i_17]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_17]))))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_52 [i_17]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((_Bool) 2258479754U))))))));
        /* LoopSeq 1 */
        for (short i_18 = 0; i_18 < 25; i_18 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_19 = 1; i_19 < 22; i_19 += 4) 
            {
                for (unsigned int i_20 = 0; i_20 < 25; i_20 += 4) 
                {
                    {
                        var_46 = ((/* implicit */unsigned short) 1339229794U);
                        var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_60 [(short)17] [i_18] [i_19] [i_18])) ? (((/* implicit */int) ((((/* implicit */int) arr_63 [14ULL] [(_Bool)1] [i_18] [i_17])) == (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_19 + 2])) ? ((-2147483647 - 1)) : (var_10)))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)18525)) : (((/* implicit */int) var_9)))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 3) 
                        {
                            var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)24)) ? (var_16) : (((/* implicit */long long int) var_12)))) - (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_16)))))) ? (max((min((arr_59 [19ULL] [i_18] [(short)0] [i_20]), (((/* implicit */unsigned int) arr_58 [i_18] [(unsigned short)19])))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))) : (((((((/* implicit */_Bool) var_16)) ? (arr_59 [i_21] [i_18] [i_19 + 3] [i_20]) : (((/* implicit */unsigned int) -1236559503)))) >> (((var_6) - (17095066521640228799ULL)))))));
                            arr_69 [i_17] [i_17] [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_66 [i_17] [i_17] [i_17] [i_17] [(signed char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [22U] [11LL] [11LL] [i_20] [i_21] [i_18]))) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1060949150405803720LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_68 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))))))) ? (var_6) : (((/* implicit */unsigned long long int) (-(0U))))));
                            var_49 = ((/* implicit */long long int) var_10);
                            var_50 = ((/* implicit */unsigned short) arr_68 [(_Bool)1] [i_19] [i_19] [i_19] [i_19 + 3] [i_19]);
                        }
                        arr_70 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967267U)) ? (((/* implicit */int) arr_60 [i_17] [i_17] [i_19 + 1] [i_19])) : (var_10))) - (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-18509))) - (arr_59 [i_20] [4ULL] [i_18] [i_17]))) - (2757636047U)))))));
                        var_51 = ((/* implicit */unsigned short) ((arr_62 [i_20] [i_19] [i_18] [(signed char)15]) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)2638)) - (((/* implicit */int) var_13))))) : (arr_53 [i_17] [i_17])));
                    }
                } 
            } 
            var_52 += ((/* implicit */short) var_3);
            var_53 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((1236559494), (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) arr_52 [i_17])) ? (((/* implicit */int) var_13)) : (var_10))) : (((/* implicit */int) var_9))))));
            var_54 = ((/* implicit */signed char) arr_60 [i_17] [i_17] [i_17] [i_17]);
            arr_71 [i_17] [i_17] [i_17] = ((/* implicit */int) 923967193345826614LL);
        }
    }
    var_55 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((+(13180434198764516199ULL))) : (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-66))));
}

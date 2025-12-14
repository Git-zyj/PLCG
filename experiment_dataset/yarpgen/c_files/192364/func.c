/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192364
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) var_4);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((unsigned int) ((5617783854784568736LL) < (5617783854784568748LL))));
                    var_21 = ((/* implicit */long long int) 3694502140962623838ULL);
                    var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 4294967292U))) ? (var_14) : (((/* implicit */unsigned long long int) -1570387035))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
        var_24 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [3U]))))))));
    }
    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)22)))), (((/* implicit */int) (unsigned char)3)))))));
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */int) (-(max((((unsigned int) arr_4 [i_3] [i_3] [i_3] [i_3])), (((/* implicit */unsigned int) (-(1570387035))))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (unsigned char i_5 = 3; i_5 < 8; i_5 += 3) 
            {
                {
                    var_26 *= ((/* implicit */_Bool) arr_13 [i_3] [i_4] [(unsigned short)10] [6ULL]);
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        arr_18 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))) >= (((((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_3] [i_3] [i_3]))) + (((((/* implicit */_Bool) -904373597)) ? (arr_12 [5ULL] [i_3] [6]) : (arr_0 [i_4] [i_3])))))));
                        arr_19 [i_4] [(_Bool)1] [i_5] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_3])), (var_15)))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_3] [2] [(signed char)2]))))) : (((((/* implicit */_Bool) var_15)) ? (var_11) : (var_8))))) - (83ULL)))));
                    }
                }
            } 
        } 
        arr_20 [i_3] = ((/* implicit */unsigned short) var_2);
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (6253430815407661074ULL)));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                var_28 = ((/* implicit */unsigned int) arr_5 [i_3] [i_3] [i_3]);
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))))), (max((((/* implicit */unsigned long long int) var_0)), (var_11)))))));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (short)3))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_11 = 1; i_11 < 11; i_11 += 3) 
                {
                    arr_35 [i_8] [i_3] [i_3] = ((/* implicit */unsigned short) (-(-2027499625)));
                    var_31 = ((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)22)))));
                    /* LoopSeq 3 */
                    for (long long int i_12 = 2; i_12 < 9; i_12 += 4) 
                    {
                        var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2512427523U)) ? (arr_0 [13ULL] [13ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(unsigned char)3] [i_7] [i_7] [(unsigned short)1] [i_8] [(unsigned char)3] [i_7])))))) ? (arr_9 [i_12]) : (((/* implicit */int) var_10))));
                        var_33 = ((/* implicit */int) var_11);
                        var_34 = (+(-5617783854784568737LL));
                        var_35 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */int) arr_14 [i_3] [0U] [i_11] [i_12])) : (((/* implicit */int) var_7)))) < (((/* implicit */int) arr_13 [i_3] [i_8] [2ULL] [i_12 + 2]))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_36 = ((/* implicit */signed char) ((arr_9 [(_Bool)0]) & (((/* implicit */int) (signed char)54))));
                        var_37 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1570387035)))))));
                    }
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        arr_44 [i_3] [i_14] = ((/* implicit */short) (-(var_8)));
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_11 + 1] [i_11 - 1] [i_11 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_11 + 1] [i_11 - 1] [i_11 - 1]))) : (2268007034U))))));
                    }
                }
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) arr_9 [i_3]))))) ? (2735244365U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) var_15)))))));
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        {
                            arr_51 [i_3] [i_16] [i_15] [i_7] [(unsigned char)8] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_7] [i_15])) || (((/* implicit */_Bool) arr_0 [i_7] [i_16]))));
                            arr_52 [i_3] [i_3] [i_3] [i_3] [(unsigned char)7] [i_3] = ((/* implicit */unsigned char) (-(175995524U)));
                            arr_53 [i_3] [i_3] [i_3] [i_3] [(unsigned char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12180826777707527211ULL)) ? (arr_41 [i_7] [i_16] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 940087907502307430LL))))))));
                            arr_54 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_21 [i_15] [i_3]);
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_9)))));
            }
            for (unsigned short i_18 = 0; i_18 < 12; i_18 += 3) 
            {
                arr_57 [i_3] [i_3] [i_18] [(signed char)8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_47 [i_3] [i_7] [i_7] [i_18] [4ULL])) ? (arr_47 [i_3] [i_3] [i_18] [i_3] [i_7]) : (arr_47 [i_3] [i_3] [i_18] [i_18] [i_3]))) << (((((long long int) arr_47 [i_3] [i_3] [i_3] [i_3] [i_3])) - (737572012LL)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_19 = 2; i_19 < 8; i_19 += 1) 
                {
                    arr_62 [i_3] = ((/* implicit */signed char) 10270629828781605676ULL);
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_41 = ((/* implicit */int) var_12);
                        var_42 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((arr_2 [i_7] [i_19] [i_7]) != (((/* implicit */unsigned long long int) var_5))))) : (((int) 13383787525998430102ULL))))));
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_3] [i_7] [i_18] [i_19 - 2] [i_20])) ? (((/* implicit */unsigned long long int) arr_3 [i_3] [i_3] [i_3])) : (arr_61 [i_7]))))) ? (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) (unsigned char)122)), (var_4))))) : (((/* implicit */int) (((!((_Bool)0))) || (((/* implicit */_Bool) ((5617783854784568736LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))));
                    }
                }
                for (unsigned int i_21 = 4; i_21 < 10; i_21 += 3) /* same iter space */
                {
                    var_44 = ((/* implicit */unsigned long long int) (~(min((8195196300234278940LL), (((/* implicit */long long int) (signed char)52))))));
                    arr_71 [i_3] [i_3] = ((/* implicit */signed char) (_Bool)1);
                }
                for (unsigned int i_22 = 4; i_22 < 10; i_22 += 3) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned char) var_18);
                    var_46 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (arr_39 [i_3] [(unsigned short)4] [i_7] [i_7] [i_18] [i_18] [i_22])))) + (var_11)));
                    var_47 = ((/* implicit */long long int) ((signed char) min((arr_34 [i_18] [i_3] [i_22 + 1] [i_22 - 2]), (((/* implicit */unsigned long long int) arr_1 [i_22 + 1])))));
                    arr_74 [i_3] [i_7] [i_18] [i_22] [i_3] [7ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [(unsigned char)7] [i_22 - 2] [i_22 - 3] [i_22 - 3])) ? (((/* implicit */int) arr_64 [i_22] [i_22] [i_22 - 3] [i_22] [i_22 - 2] [(unsigned char)0] [i_22 - 1])) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((signed char) arr_32 [i_22 + 1] [i_22] [i_22 + 1] [i_22] [i_22 + 1] [i_22] [i_22 + 2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_22] [0ULL] [i_22 - 3] [i_22] [i_22 - 2] [(unsigned char)0] [i_22 - 3])))))));
                }
                arr_75 [i_7] [i_3] [(short)3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_24 [i_3] [i_3] [i_3] [i_3])))) & (((((/* implicit */_Bool) var_6)) ? (min((4294967294U), (3236679240U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (long long int i_23 = 2; i_23 < 17; i_23 += 1) 
    {
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            {
                arr_81 [i_24] [i_23] = ((/* implicit */unsigned long long int) arr_79 [i_23 - 2] [i_24]);
                arr_82 [16U] = ((/* implicit */long long int) min((((/* implicit */int) arr_77 [(unsigned char)10] [(unsigned char)10])), ((+(((/* implicit */int) arr_77 [i_23 + 1] [i_23 + 1]))))));
            }
        } 
    } 
    var_48 = ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)-21626))))), (var_19)));
}

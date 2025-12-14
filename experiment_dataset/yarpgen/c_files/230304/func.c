/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230304
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
    var_18 = ((/* implicit */signed char) var_15);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 10; i_1 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(-685012679)))) % (((((/* implicit */unsigned long long int) arr_2 [i_0])) / (var_10)))))) ? (((/* implicit */int) max((arr_3 [i_0] [i_1 - 2]), (arr_3 [i_1 + 2] [i_0])))) : (((((/* implicit */_Bool) min((((/* implicit */short) var_12)), (var_16)))) ? (max((((/* implicit */int) var_3)), (arr_4 [i_0] [i_0]))) : (((/* implicit */int) max((var_11), (arr_1 [i_0] [i_1]))))))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) var_4);
        }
        for (int i_2 = 3; i_2 < 10; i_2 += 4) /* same iter space */
        {
            var_20 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned short)54940))))) ? (((/* implicit */int) (unsigned short)65535)) : ((-(((int) arr_3 [i_0] [i_0])))));
            var_21 = ((/* implicit */int) max((var_21), ((-(((/* implicit */int) var_12))))));
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((int) 1732398479)), (((arr_2 [i_0]) | (((/* implicit */int) (_Bool)0))))))) ? (max((((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) (unsigned char)49))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_0] [i_2]))) ? ((-(((/* implicit */int) arr_8 [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) var_15))))))));
        }
        arr_10 [i_0] = ((((((/* implicit */int) var_1)) * ((-(((/* implicit */int) arr_5 [i_0])))))) * (((/* implicit */int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) << (((/* implicit */int) arr_0 [i_0])))) >= (((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [2U] [i_0]))))))));
        var_23 += ((/* implicit */short) ((unsigned char) ((((/* implicit */int) (unsigned char)120)) / (((/* implicit */int) (unsigned char)125)))));
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_24 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3]))))), ((~(((/* implicit */int) ((signed char) var_9)))))));
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((int) (unsigned short)4402)), (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (max((((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_13 [i_3]))), (((/* implicit */unsigned long long int) max((var_16), (var_9))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            for (short i_5 = 1; i_5 < 16; i_5 += 4) 
            {
                {
                    arr_20 [i_5] [i_5 - 1] [i_4] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((12274155850227596693ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (short)27851))))) ? (((var_3) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) arr_11 [i_3] [i_4])) : (arr_17 [i_3] [i_3] [i_5])))));
                    var_25 |= max(((+(((1879153387) / (((/* implicit */int) var_2)))))), (((/* implicit */int) arr_16 [i_3] [i_3] [i_3])));
                    arr_21 [i_4] [i_4] = ((/* implicit */signed char) arr_12 [i_3]);
                    var_26 = ((/* implicit */unsigned short) var_0);
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) var_8);
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            for (unsigned short i_7 = 4; i_7 < 15; i_7 += 2) 
            {
                {
                    var_28 *= ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) max((((/* implicit */short) var_1)), (var_16)))))));
                    var_29 -= ((/* implicit */unsigned long long int) arr_18 [(unsigned char)16] [i_3] [i_7]);
                }
            } 
        } 
    }
    for (unsigned short i_8 = 2; i_8 < 16; i_8 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            var_30 &= ((/* implicit */unsigned short) ((signed char) (_Bool)0));
            var_31 |= ((/* implicit */signed char) arr_31 [i_9] [i_9]);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))) | (max((((/* implicit */int) var_9)), (min((var_5), (arr_23 [i_8] [i_8] [i_8])))))));
            arr_35 [i_8] = ((/* implicit */signed char) var_2);
            var_33 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((0ULL) * (((/* implicit */unsigned long long int) 4064882145U))))) ? (arr_29 [i_8] [(_Bool)1]) : ((+(((/* implicit */int) var_3))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
            {
                arr_39 [i_8] [i_10] [i_8] [i_8] = ((/* implicit */_Bool) arr_24 [i_8 - 1] [i_8 - 1]);
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3746332378U)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_44 [i_8] [i_10] [i_10] [i_12] [i_11])) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_22 [i_8 + 1] [i_8 + 1]))));
                        arr_45 [i_8] [i_8] [i_11] [i_12] [i_12] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_13] [i_12] [i_8])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8] [i_8] [i_8]))) | (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_8] [i_8])) << (((/* implicit */int) var_8)))))));
                    }
                    arr_46 [i_8] [i_8] [i_12] [i_8] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_6)) ? (arr_37 [i_8 - 2] [i_10] [i_8]) : (((/* implicit */int) var_13)))) + (2147483647))) << (((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_24 [i_8] [i_8])) : (((/* implicit */int) var_13)))) + (32550))) - (18)))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    arr_50 [(short)10] |= (~(((/* implicit */int) (unsigned char)255)));
                    var_35 = ((/* implicit */_Bool) var_2);
                    var_36 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_11)))) * (((((/* implicit */int) arr_16 [i_10] [i_8] [i_14])) * (((/* implicit */int) var_3))))));
                }
                var_37 = ((/* implicit */signed char) arr_17 [i_8] [(_Bool)1] [i_8]);
            }
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (+((+(max((var_4), (((/* implicit */unsigned long long int) var_11)))))))))));
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) var_0))));
                }
                arr_56 [i_8] [i_10] [i_8] = max((200444408), (((/* implicit */int) (unsigned short)0)));
            }
            /* vectorizable */
            for (long long int i_17 = 1; i_17 < 15; i_17 += 2) 
            {
                arr_59 [i_8] [i_8] [(unsigned short)13] [i_8 - 1] = (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_22 [i_8] [i_8])) : (var_0))));
                arr_60 [i_8] [i_10] [i_17 + 1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) -1722431963)) : (arr_19 [i_8] [i_8] [i_8])))) ? (arr_19 [i_10] [i_10] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_51 [i_8] [i_8] [i_8]))))))));
            }
        }
        var_40 = ((/* implicit */long long int) var_0);
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_63 [i_18] [i_18] = ((/* implicit */int) var_4);
        arr_64 [i_18] [i_18] = (i_18 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((((((((/* implicit */int) var_16)) + (2147483647))) << (((((arr_29 [i_18] [i_18]) + (1939909313))) - (30))))) - (2147462162)))))) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((((((((/* implicit */int) var_16)) + (2147483647))) << (((((((arr_29 [i_18] [i_18]) - (1939909313))) - (30))) + (1250031711))))) - (2147462162)))))) || (((/* implicit */_Bool) var_5)))));
        arr_65 [i_18] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_18 [i_18] [i_18] [i_18]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (arr_41 [i_18]))))));
    }
}

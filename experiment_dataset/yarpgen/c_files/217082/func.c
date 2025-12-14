/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217082
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_15 ^= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)192)) : (((/* implicit */int) arr_2 [i_0])))) & (((((/* implicit */int) arr_2 [i_0])) << (((var_7) - (444803304U))))))) > (var_10)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1060718768)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65534)) ^ (((/* implicit */int) arr_0 [i_0]))))) : (0U)));
            var_17 |= (~(((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) (unsigned short)49718)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    arr_11 [i_1] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_6 [i_0]))))) << (((arr_4 [i_1] [i_1]) - (968673470)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_6 [i_0]))))) << (((((arr_4 [i_1] [i_1]) - (968673470))) + (252076915))))));
                    var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) % (-336036409)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 4294967295U)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (3484039903219432913ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)774)))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_9 [i_1] [i_1 + 1] [i_1 + 1]))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */unsigned char) (((~(1226564636))) + ((+(arr_3 [i_4 - 1])))));
                        var_20 *= ((/* implicit */unsigned char) (((_Bool)1) ? (arr_13 [i_1 + 1] [i_0] [i_4 - 1]) : (((/* implicit */int) arr_8 [i_0] [i_1]))));
                        var_21 = arr_3 [(unsigned short)19];
                    }
                    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_22 += ((/* implicit */short) ((((/* implicit */_Bool) ((1073741823U) >> (((((/* implicit */int) (short)-3931)) + (3933)))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_17 [i_5] [i_3 - 1] [i_2] [(short)19] [(short)19]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 1])))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0])) * (((/* implicit */int) arr_0 [i_0]))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((1023) << (((293463412) - (293463392)))))) ^ ((~(3298737024388977147ULL))))))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_6 - 1] [i_1 - 3] [i_2] [i_3] [i_0])) << (((arr_17 [i_6 + 1] [i_3 + 3] [i_3] [i_1 - 3] [i_0]) - (1046659212U)))));
                        arr_22 [i_0] [i_1] [i_0] [i_0] [(unsigned char)9] [i_0] = ((/* implicit */int) var_7);
                        arr_23 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) arr_5 [i_1] [i_6 - 1]);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_6 - 1] [i_0] [i_0] [i_0] [i_6] [i_3 + 4])) + (((/* implicit */int) arr_19 [i_6 - 1] [20U] [i_0] [i_0] [i_3] [i_3 + 4])))))));
                    }
                }
                var_26 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) (short)32767))))) ? (arr_17 [i_0] [i_0] [i_1] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110)))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 20; i_8 += 4) 
                {
                    for (signed char i_9 = 2; i_9 < 20; i_9 += 1) 
                    {
                        {
                            var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */int) arr_12 [i_8 + 1] [i_8 - 1] [i_8] [i_0] [i_8] [i_8])) : (arr_3 [i_1 - 2])));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_7] [(signed char)12] [i_9 - 2] [i_0] [i_9 - 1] [i_7])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1 - 1] [i_7] [i_8] [i_0]))) > (arr_25 [i_9 + 1] [i_8 + 1] [i_0])))) : (((/* implicit */int) (unsigned char)255)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))) != (3532594695U))))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_1] [i_1 + 1])) ? (arr_24 [i_1] [i_1 + 1]) : (arr_24 [i_1] [i_1 - 2])));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_18 [i_0] [i_7] [i_1] [12ULL] [i_0]))));
                var_33 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)3))))) ^ (var_4)));
                var_34 = (unsigned char)30;
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */short) ((int) arr_9 [i_12] [i_12] [i_12]));
        arr_40 [i_12] &= ((((/* implicit */int) ((signed char) 1260617302U))) >= (((((/* implicit */int) (_Bool)1)) + (var_8))));
        var_36 += ((/* implicit */_Bool) ((unsigned short) (unsigned char)143));
        arr_41 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_12])) && (((/* implicit */_Bool) (short)2844))));
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
    {
        arr_44 [i_13] = ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10)));
        /* LoopNest 2 */
        for (short i_14 = 4; i_14 < 18; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    arr_51 [i_15] [i_14] [i_14] [i_13] = ((/* implicit */signed char) ((unsigned long long int) arr_26 [i_14] [i_14 - 4] [i_14 - 4] [i_14 - 4] [i_14 + 1] [i_14 - 1]));
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))));
                    var_38 = ((/* implicit */short) max((var_38), (var_9)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            for (unsigned short i_17 = 4; i_17 < 17; i_17 += 4) 
            {
                {
                    var_39 *= ((/* implicit */unsigned short) ((arr_39 [i_13]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_7 [i_16] [i_16] [i_16] [i_16])))))));
                    var_40 = ((/* implicit */unsigned long long int) (+(var_12)));
                    /* LoopSeq 1 */
                    for (short i_18 = 4; i_18 < 18; i_18 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (unsigned short)65534))));
                        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_17 - 4] [i_18 - 1] [i_18 - 2] [i_18 - 1])) ? (((((/* implicit */_Bool) arr_55 [i_13] [i_17] [i_18 + 2])) ? (607341371U) : (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)2)) - (((/* implicit */int) arr_35 [i_13] [i_13] [(_Bool)0]))))))))));
                        arr_60 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((arr_7 [i_13] [i_13] [(signed char)20] [i_13]) && (((/* implicit */_Bool) (signed char)29)))) ? (arr_20 [i_17 + 3] [(unsigned short)7] [(_Bool)1] [(unsigned short)7] [i_16] [i_16]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((var_7) - (444803309U))))))));
                    }
                }
            } 
        } 
    }
    var_43 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */unsigned long long int) var_4)) : (15104755567276999771ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 859089312U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))))), (((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned long long int) var_9)), (15134771532106522635ULL))) : (((/* implicit */unsigned long long int) var_11))))));
    var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((min((min((((/* implicit */unsigned int) var_9)), (var_12))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)109)) || (((/* implicit */_Bool) 15U))))))) - (var_11))))));
    var_45 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_7))) && (((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32314))) : (var_11))))))), (((((/* implicit */_Bool) 13405693959148980776ULL)) ? (var_7) : (max((((/* implicit */unsigned int) var_3)), (var_7)))))));
    var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_6)) - (22330)))))) ? ((~(((((/* implicit */_Bool) 859089317U)) ? (16198609565480477040ULL) : (13145496851009401523ULL))))) : (((/* implicit */unsigned long long int) var_11)))))));
}

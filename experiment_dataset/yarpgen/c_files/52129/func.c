/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52129
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (var_6)))) || (((/* implicit */_Bool) ((signed char) (signed char)118))))))));
    var_16 = ((/* implicit */int) var_9);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) (+((-(((/* implicit */int) (signed char)118))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)118))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) : ((+(var_10)))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((signed char)-118), ((signed char)-118))))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))) | (((((/* implicit */int) (signed char)106)) ^ (((/* implicit */int) (signed char)-113))))))) : (((unsigned long long int) (~(((/* implicit */int) var_9)))))));
                var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1])) ? (arr_1 [i_1 - 1] [i_1]) : (arr_1 [i_1 + 1] [i_1]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_1 + 1] [i_1])))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_2])) | (((/* implicit */int) arr_10 [i_0] [i_1 - 1]))))) ? (((/* implicit */int) var_2)) : ((((+(((/* implicit */int) (signed char)112)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))))));
            }
        }
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_3]))));
        arr_15 [i_3] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) : (arr_13 [i_3] [i_3])))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-113))))))))));
        arr_16 [i_3] |= ((/* implicit */short) (~(((/* implicit */int) arr_12 [i_3]))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_3])))))));
    }
    for (signed char i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_20 [i_4] [i_5]))));
            arr_23 [i_4] [i_5] |= ((/* implicit */unsigned short) (signed char)-119);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) && (var_11))))));
            arr_26 [i_4] [i_6] [i_6] = ((/* implicit */short) (-(arr_13 [i_4] [i_6])));
            /* LoopSeq 3 */
            for (short i_7 = 1; i_7 < 17; i_7 += 3) 
            {
                var_23 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_4] [i_4] [i_4]))));
                var_24 &= ((/* implicit */unsigned int) ((unsigned char) arr_28 [(short)0] [i_7 - 1] [i_7]));
            }
            for (short i_8 = 2; i_8 < 16; i_8 += 4) 
            {
                var_25 = ((/* implicit */unsigned short) arr_20 [i_8 + 1] [i_8 + 1]);
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    var_26 ^= ((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)-106)) & (((/* implicit */int) var_1))))));
                    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)126))));
                    var_28 -= ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_8])))))));
                    arr_37 [i_4] [i_4] [i_8] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-119))));
                }
                for (short i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    arr_40 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_4]))));
                    /* LoopSeq 3 */
                    for (long long int i_11 = 2; i_11 < 15; i_11 += 2) /* same iter space */
                    {
                        arr_43 [i_4] [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_8])) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)112))))));
                        var_30 = ((/* implicit */unsigned short) arr_22 [i_4] [i_4] [i_8]);
                        var_31 = (((!(((/* implicit */_Bool) arr_20 [i_6] [i_8 - 1])))) ? (((unsigned long long int) arr_32 [i_4])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_36 [i_4] [i_4] [i_4] [i_11])) >= (((/* implicit */int) arr_12 [i_8])))))));
                    }
                    for (long long int i_12 = 2; i_12 < 15; i_12 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (signed char)124)) & (((/* implicit */int) (signed char)106))))))));
                        var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_4] [i_8] [i_12])) ? (arr_19 [i_4] [i_12] [i_10]) : (arr_19 [i_6] [i_8] [i_12 - 1])));
                    }
                    for (long long int i_13 = 2; i_13 < 15; i_13 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) arr_32 [i_4])) : (((/* implicit */int) arr_32 [i_4]))));
                        arr_50 [i_4] [i_10] [i_10] [i_8] [i_6] [i_6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_44 [i_4] [i_6] [i_8] [i_10] [i_10]))))) * (((arr_27 [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        var_35 = ((/* implicit */unsigned short) ((arr_42 [i_4] [i_6] [i_8 - 2] [i_13] [i_13]) >> (((((((/* implicit */int) arr_31 [i_6])) - (((/* implicit */int) arr_30 [i_4])))) + (23421)))));
                    }
                    arr_51 [i_4] [i_4] [i_4] [i_6] [i_4] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)113)) & ((+(((/* implicit */int) (signed char)120))))));
                }
                /* LoopSeq 4 */
                for (signed char i_14 = 2; i_14 < 16; i_14 += 4) 
                {
                    var_36 = ((/* implicit */unsigned char) arr_35 [i_8]);
                    arr_56 [i_4] [i_6] [i_6] [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) + (var_14))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_4])))))));
                }
                for (unsigned char i_15 = 1; i_15 < 16; i_15 += 3) 
                {
                    var_37 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)107))));
                    var_38 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_44 [i_15 + 1] [i_15] [i_15] [i_15] [i_4]))));
                }
                for (signed char i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (signed char)112))))) - (((((/* implicit */_Bool) arr_32 [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_17]))) : (arr_35 [i_8]))))))));
                        var_40 = ((/* implicit */unsigned int) arr_46 [i_4] [i_6] [i_4] [i_8] [i_16] [i_16] [i_16]);
                    }
                    arr_64 [i_4] [i_6] [i_6] [i_6] [i_4] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) / (arr_27 [i_4]))));
                    arr_65 [i_16] [i_16] [i_16] [i_16] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_8] [i_16]))))) && (((/* implicit */_Bool) (signed char)108))));
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (signed char)112))));
                    arr_66 [i_4] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_4])) ? (arr_19 [i_8 + 2] [i_4] [i_8 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_53 [i_8] [i_4]))))));
                }
                for (signed char i_18 = 2; i_18 < 16; i_18 += 2) 
                {
                    arr_70 [i_4] [i_8] [i_18] = ((/* implicit */short) (+(((((/* implicit */int) (signed char)114)) & (((/* implicit */int) (signed char)-107))))));
                    var_42 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_4] [i_4] [i_18] [i_18])) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) arr_53 [i_8 + 3] [i_18 + 2]))));
                    var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) var_6))));
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 1; i_19 < 17; i_19 += 1) 
                    {
                        arr_73 [i_4] [i_4] [i_6] [i_8 + 3] [i_18 + 3] [i_18 + 3] = ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_4)))));
                        arr_74 [i_4] [i_4] [i_8] [i_18 + 3] [i_18 + 3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_54 [i_18 + 2] [i_4] [i_18 + 2] [i_18 - 2])) + (((/* implicit */int) arr_48 [i_18 + 2] [i_18 + 1] [i_18 + 1] [i_18 - 2] [i_18 + 1]))));
                    }
                    for (signed char i_20 = 0; i_20 < 19; i_20 += 4) 
                    {
                        arr_77 [i_6] [i_6] [i_8] [i_18 + 1] [i_20] &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (signed char)91)) || (((/* implicit */_Bool) arr_39 [i_4] [i_4] [i_8] [i_18] [i_20])))));
                        var_44 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) var_11)) : (arr_58 [i_4] [i_4] [i_6] [i_8] [i_18] [i_20])))));
                        var_45 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (signed char)91)))));
                        var_46 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-110))))) ? (((/* implicit */int) ((signed char) arr_42 [i_4] [i_4] [i_4] [i_18] [i_4]))) : (((/* implicit */int) arr_24 [i_8 + 1] [i_8 - 2] [i_8 - 2]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_21 = 1; i_21 < 16; i_21 += 4) 
                    {
                        var_47 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)109))))) | (((/* implicit */int) (signed char)112))));
                        var_48 = ((/* implicit */unsigned short) arr_28 [i_4] [i_21 + 3] [i_21]);
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 2) 
                    {
                        var_49 += ((/* implicit */short) arr_48 [i_4] [i_6] [i_8 - 1] [i_18] [i_22]);
                        arr_83 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (signed char)-92)))));
                        arr_84 [i_18] [i_18] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)77))));
                        var_50 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_38 [i_8 + 3] [i_18]))));
                        var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_18 - 1])) ? (arr_59 [i_18 - 2]) : (arr_59 [i_18 - 2]))))));
                    }
                    for (unsigned short i_23 = 4; i_23 < 16; i_23 += 4) 
                    {
                        arr_88 [i_4] [i_4] [i_6] [i_8] [i_4] [i_4] = ((/* implicit */short) (~(((/* implicit */int) var_4))));
                        var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)70)))))));
                        arr_89 [i_4] [i_6] [i_8] [i_4] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_81 [i_4] [i_6] [i_6] [i_8] [i_18] [i_23])))) | (((/* implicit */int) arr_82 [i_18 - 2] [i_4]))));
                    }
                }
            }
            for (unsigned char i_24 = 1; i_24 < 17; i_24 += 3) 
            {
                arr_92 [i_4] [i_6] [i_24] = ((/* implicit */unsigned int) (signed char)-127);
                var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) arr_34 [i_4] [i_6] [i_6] [i_24] [i_24 - 1] [i_24]))));
            }
        }
        var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_24 [i_4] [i_4] [i_4]))) && (((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)109)))))))));
        arr_93 [i_4] = ((/* implicit */long long int) ((unsigned int) ((signed char) arr_29 [i_4] [i_4])));
    }
}

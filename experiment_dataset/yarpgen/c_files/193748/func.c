/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193748
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(var_6)))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_5)))) ? (((long long int) 1592191782)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_14))))))))));
                    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) 355782667374879668LL));
                }
                for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 4) 
                {
                    var_19 = ((/* implicit */int) ((((_Bool) ((unsigned int) var_4))) ? (arr_8 [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-((~(arr_11 [i_1] [i_1] [i_1] [i_1]))))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) var_14)))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (+(-362892051))))) ? (((/* implicit */int) arr_15 [i_0] [24] [i_3] [i_1] [(unsigned char)0])) : (var_13)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_14))));
                    var_23 = ((/* implicit */unsigned char) ((unsigned int) (+(arr_12 [i_3] [i_1] [i_1] [i_1] [(unsigned short)12] [14ULL]))));
                }
                var_24 = ((/* implicit */unsigned char) 3254307759U);
                var_25 = ((/* implicit */signed char) min((min((((/* implicit */int) min((((/* implicit */short) (unsigned char)98)), (arr_15 [i_0] [i_0] [18U] [18U] [18U])))), (((int) (unsigned char)151)))), (((/* implicit */int) var_16))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        var_26 = ((/* implicit */unsigned short) ((int) arr_0 [i_6]));
        var_27 = ((((/* implicit */_Bool) (-(arr_4 [i_6] [i_6] [i_6])))) ? (arr_4 [i_6] [i_6] [i_6]) : ((+(arr_4 [i_6] [i_6] [i_6]))));
        var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) var_16)))));
        var_29 = ((/* implicit */long long int) (~(max((arr_18 [i_6]), (((/* implicit */unsigned int) arr_9 [i_6] [i_6] [14]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) ((((long long int) min((var_6), (((/* implicit */unsigned int) (unsigned char)98))))) <= (((/* implicit */long long int) var_4))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (int i_10 = 2; i_10 < 18; i_10 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29496))) : (((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_28 [i_6] [i_8] [i_6])))))), (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8] [i_8] [i_7] [i_8]))) >= (0LL))))));
                                var_32 |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_7] [i_9 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 5929478126575431791LL)) : (arr_25 [i_6] [i_6] [i_6] [i_6])))))))));
                                var_33 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073709056U)) ? (((/* implicit */long long int) var_7)) : (-4058162852620554265LL)))) ? (arr_22 [i_10 + 2] [i_10 + 2]) : (-4058162852620554265LL)))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3221258239U)) ? (((/* implicit */int) (_Bool)1)) : (var_4)))) & (7475471460373616778ULL))));
                                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_26 [i_9 + 1] [i_9] [i_9] [i_9] [i_9 + 1])))))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_0)))))) ? (((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) var_14))))) ? (((/* implicit */unsigned long long int) 6943930226263047100LL)) : (arr_25 [i_6] [i_6] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                    var_36 = var_13;
                    var_37 = ((/* implicit */unsigned short) arr_0 [i_6]);
                }
            } 
        } 
    }
    for (unsigned char i_11 = 1; i_11 < 12; i_11 += 2) 
    {
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) var_12))));
        /* LoopNest 2 */
        for (long long int i_12 = 3; i_12 < 10; i_12 += 4) 
        {
            for (unsigned int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                {
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_14 [(short)9] [i_11 - 1] [i_12] [i_12 - 3])))) ? (min((((/* implicit */int) arr_20 [i_11] [i_11] [i_11])), (var_4))) : (((/* implicit */int) ((-1078540296) >= (((/* implicit */int) (unsigned char)151))))))))));
                    var_40 = ((/* implicit */signed char) 4294967295U);
                }
            } 
        } 
    }
    for (signed char i_14 = 3; i_14 < 10; i_14 += 1) 
    {
        var_41 = ((/* implicit */unsigned int) ((((long long int) (~(1034157379U)))) << (((((((/* implicit */_Bool) (~(var_10)))) ? (max((2822329074U), (((/* implicit */unsigned int) (short)855)))) : (min((((/* implicit */unsigned int) var_14)), (var_6))))) - (2822329049U)))));
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1073709070U)) ? (((/* implicit */int) (short)15030)) : (((/* implicit */int) ((short) max((1073709056U), (((/* implicit */unsigned int) arr_12 [i_14] [i_14] [i_14] [i_14] [i_14 - 2] [i_14]))))))));
    }
    for (unsigned short i_15 = 1; i_15 < 8; i_15 += 1) 
    {
        var_43 *= ((((/* implicit */int) max((arr_10 [4ULL]), (arr_10 [(unsigned char)24])))) & (((/* implicit */int) ((((/* implicit */_Bool) (~(3221258230U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_15 + 2])) ? (((/* implicit */long long int) var_7)) : (6943930226263047106LL))))))));
        /* LoopNest 2 */
        for (signed char i_16 = 4; i_16 < 7; i_16 += 3) 
        {
            for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        for (unsigned int i_19 = 2; i_19 < 9; i_19 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_16])) ? (((/* implicit */int) arr_9 [i_16] [i_16 - 3] [i_19 - 2])) : (((/* implicit */int) arr_10 [i_16])))))));
                                var_45 = ((/* implicit */unsigned short) 5U);
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */unsigned int) (unsigned char)7);
                    var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 261120U)) ? (432908216) : (((/* implicit */int) (unsigned short)9008))))) ? (3299042167U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25283)))));
                }
            } 
        } 
    }
}

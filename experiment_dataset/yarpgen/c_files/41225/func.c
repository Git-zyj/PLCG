/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41225
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
    var_10 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) arr_2 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2054014766U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) 1644925841)) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)141)) : (var_4)))));
                    arr_7 [i_0] [(unsigned char)4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((int) var_0)) - (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)46390))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) + (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40018)))));
                    arr_8 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) / (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)139)))) == (((/* implicit */int) ((_Bool) var_0)))))))));
                    var_13 = ((/* implicit */int) (unsigned short)23656);
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    arr_19 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (var_4)))), (((((/* implicit */_Bool) (unsigned short)28004)) ? (8985876289991680710LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [(unsigned char)12] [i_5] [(unsigned char)1] [(unsigned char)12])))))))) ? (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) / (((arr_16 [15]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52354))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531)))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_17 [i_4] [i_7] [i_7] [i_4])), ((unsigned char)141)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)1118)))) : ((+(724980378))))));
                                arr_26 [i_4] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)12288)) ? (arr_11 [i_7] [i_3]) : (arr_11 [i_6] [i_6]))), (((/* implicit */int) ((signed char) arr_11 [i_3] [(unsigned short)11])))));
                            }
                        } 
                    } 
                    arr_27 [i_3] [i_5] [(_Bool)1] = ((long long int) 1330553010434332591LL);
                    var_15 = ((/* implicit */_Bool) max((var_15), (((((/* implicit */int) ((signed char) arr_12 [i_5]))) != (((/* implicit */int) var_0))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_8 = 3; i_8 < 21; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                {
                    arr_33 [i_3] [i_9] = ((/* implicit */_Bool) (unsigned short)37531);
                    arr_34 [i_9] [(unsigned char)10] [i_9] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_24 [i_9])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_9])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        arr_37 [(unsigned short)10] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_6)) <= (arr_10 [i_3])))) != (((/* implicit */int) ((681194313U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))));
                        arr_38 [i_9] = ((/* implicit */int) (signed char)-99);
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        arr_41 [i_3] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) (-((+(952009577)))));
                        arr_42 [i_3] [(unsigned char)12] [i_3] [i_3] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_8 + 3] [i_11 - 1]))));
                    }
                    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) min((((unsigned int) var_6)), (((/* implicit */unsigned int) ((unsigned short) var_8)))))) : (((((/* implicit */_Bool) (unsigned short)1008)) ? (-1LL) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_36 [i_3] [(unsigned char)19] [i_3] [i_8 - 3]))))))));
                }
            } 
        } 
        arr_43 [0] = ((/* implicit */int) min((((/* implicit */long long int) var_4)), (min((((/* implicit */long long int) 2836869716U)), (-1LL)))));
    }
    for (signed char i_12 = 1; i_12 < 12; i_12 += 1) 
    {
        arr_48 [i_12] = ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)55)))))))) ? (((((/* implicit */_Bool) -1330553010434332572LL)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (-724980378))) : (((/* implicit */int) ((signed char) var_0))))) : ((+(((((/* implicit */int) var_3)) >> (((-2) + (21))))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_2))));
        arr_49 [(unsigned short)4] [i_12] = ((/* implicit */_Bool) ((int) max((1U), (((/* implicit */unsigned int) max((var_2), (((/* implicit */int) (unsigned char)240))))))));
    }
    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        arr_54 [i_13] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_14 [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (min((-6192105586475242645LL), (((/* implicit */long long int) var_5))))))) ? (((/* implicit */long long int) ((int) arr_10 [i_13]))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) / (max((6619369033582899921LL), (((/* implicit */long long int) var_9))))))));
        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_4) - (((/* implicit */int) (unsigned char)255)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) var_1)), (8U))))) : (min((((/* implicit */int) (unsigned short)65530)), (((((/* implicit */int) var_3)) / (((/* implicit */int) (signed char)123))))))));
    }
}

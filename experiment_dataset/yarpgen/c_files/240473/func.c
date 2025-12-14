/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240473
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */long long int) 4294967295U)) : (-6238123366403764430LL)));
                        var_11 = ((/* implicit */_Bool) ((6238123366403764430LL) / ((~(6238123366403764430LL)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((arr_13 [i_0] [i_0] [i_1 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3677)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((_Bool) var_0)) && (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_4])))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_13 [7U] [i_2] [i_4]))) ? (((-6238123366403764438LL) - (-6238123366403764430LL))) : ((-(6238123366403764424LL)))))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 2; i_5 < 10; i_5 += 3) 
                        {
                            arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (unsigned short)32)), (var_6))))))));
                            arr_21 [(signed char)1] [i_1] [i_2] [i_0] [i_5 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (min((2286942940202690929LL), (arr_19 [i_0] [i_1] [i_2] [i_4] [i_5] [i_5 - 2]))) : (-6238123366403764430LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-15)), (arr_13 [(signed char)4] [(signed char)4] [i_2])))), (max((((/* implicit */long long int) (_Bool)1)), (6238123366403764425LL)))))));
                        }
                        for (unsigned int i_6 = 3; i_6 < 12; i_6 += 2) 
                        {
                            var_12 = ((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1)));
                            arr_24 [(short)13] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_17 [i_0] [i_1] [i_2] [i_4] [i_6 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) (short)-16654))))) ? (arr_12 [i_0] [i_1 + 1] [i_2] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_2] [i_0]))))))))));
                            arr_25 [i_0] [i_0] [i_2] [i_4] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) arr_11 [i_1] [i_1] [i_1 - 1] [i_1 + 2]))), ((~(((/* implicit */int) var_9))))));
                            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_7), (((/* implicit */short) (signed char)99)))))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) == (((long long int) (_Bool)1))))))));
                            arr_26 [i_6] [i_6] [i_0] [i_0] [i_1] [i_0] = arr_22 [i_0] [i_1] [i_2] [i_6];
                        }
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_5))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-99)))))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (+((~(((/* implicit */int) arr_15 [i_4] [i_2] [i_1] [i_0])))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16642))) & (4985338938318041298ULL))) << (((3588640720499070484LL) - (3588640720499070445LL))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) ^ (((unsigned long long int) (signed char)30))))));
                        var_17 = ((/* implicit */signed char) max((9298370962700599189ULL), (((/* implicit */unsigned long long int) 20))));
                        arr_30 [(unsigned short)2] [i_7] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)))) ? (((arr_2 [i_7] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) (-(arr_8 [i_0])))))), (((((/* implicit */long long int) (-(arr_7 [i_0] [i_1] [i_2])))) & (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_1] [i_7]) : (arr_2 [i_1] [i_2])))))));
                    }
                    var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)16657)), ((-2147483647 - 1))))) % (((unsigned long long int) arr_1 [i_0])))))));
                }
            } 
        } 
        arr_31 [i_0] = min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((int) var_6))), (((unsigned int) (_Bool)1))))), ((-(arr_17 [i_0] [i_0] [3LL] [i_0] [i_0]))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((var_0) << (((arr_28 [i_0]) - (6602653170026081249LL)))))) ? (arr_13 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (arr_28 [i_0]))))))))));
        var_20 &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)117)) << (((((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (-1007076712)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [9U])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))) - (6621)))));
        /* LoopNest 2 */
        for (short i_8 = 1; i_8 < 11; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -1007076712)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_8 + 3] [i_8 - 1]))) : (((3588640720499070484LL) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) == (0ULL)));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) ((short) (~(((/* implicit */int) var_1)))))) + (2147483647))) << (((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)99)) >= (((/* implicit */int) var_1))))), (max((((/* implicit */unsigned long long int) arr_35 [i_10 + 1] [i_8] [i_0] [(signed char)8])), (11218399732791687119ULL))))) - (11218399732791687119ULL)))));
                        var_23 &= ((/* implicit */_Bool) var_1);
                        var_24 *= ((/* implicit */_Bool) (+(6238123366403764429LL)));
                        arr_39 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-16657)) == (((/* implicit */int) (_Bool)1)))))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_33 [i_0])) : (var_6))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_8 + 3] [i_10 + 1]))))));
                        arr_40 [i_0] [i_8] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1007076695)) ? (((/* implicit */int) (short)-8428)) : (((/* implicit */int) var_8))))) ? (max((var_6), (((/* implicit */unsigned int) (unsigned char)84)))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-105), ((signed char)-85))))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_11 = 4; i_11 < 14; i_11 += 3) 
    {
        arr_44 [i_11] [i_11] = ((/* implicit */unsigned char) ((11033039425644256446ULL) << (((/* implicit */int) (unsigned char)0))));
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_48 [i_11] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_45 [i_11]) % (((/* implicit */unsigned long long int) 2147483647)))))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (unsigned short)59219)) : (((/* implicit */int) arr_43 [i_11] [i_11 + 2]))));
        }
        var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_43 [i_11 + 2] [i_11 - 2]))));
        arr_49 [i_11] = ((/* implicit */unsigned int) (signed char)60);
    }
    var_27 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))), (((var_6) % (var_6))))) | (((/* implicit */unsigned int) -20))));
    var_28 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (max((((long long int) var_6)), (((((/* implicit */_Bool) var_1)) ? (-3177576801512445155LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned short i_13 = 4; i_13 < 13; i_13 += 2) 
    {
        for (int i_14 = 2; i_14 < 13; i_14 += 2) 
        {
            for (signed char i_15 = 3; i_15 < 10; i_15 += 2) 
            {
                {
                    var_29 = ((/* implicit */int) min((((/* implicit */long long int) (signed char)-63)), (max((((-6238123366403764430LL) | (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) (-2147483647 - 1)))))));
                    arr_58 [i_13] [(signed char)10] [i_13 - 4] = ((((/* implicit */_Bool) (unsigned char)132)) ? (((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)73), (((/* implicit */unsigned char) arr_14 [i_13] [i_13] [i_13] [i_14] [i_15])))))) & (arr_6 [i_13 - 4] [i_13] [i_13 - 4]))) : (((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned short)43090), (((/* implicit */unsigned short) var_2)))))))));
                }
            } 
        } 
    } 
}

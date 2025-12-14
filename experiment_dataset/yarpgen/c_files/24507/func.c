/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24507
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (!((((-(4294967295U))) == (((/* implicit */unsigned int) ((int) var_12))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) min((var_11), (((_Bool) var_12))))) >> (((min(((~(((/* implicit */int) arr_0 [i_0] [i_1])))), (((/* implicit */int) (short)-14447)))) + (14466)))));
                var_15 *= var_0;
                /* LoopSeq 1 */
                for (int i_2 = 4; i_2 < 21; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) var_11);
                        var_17 *= ((/* implicit */signed char) (~(18446744073709551609ULL)));
                    }
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
                    {
                        var_18 -= ((((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) (signed char)-123)))) >> ((((~(((/* implicit */int) var_6)))) + (29444)))))) : (var_8));
                        var_19 *= ((/* implicit */_Bool) arr_9 [20ULL] [i_1] [i_1] [i_2 - 3] [20ULL]);
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 4; i_5 < 18; i_5 += 4) 
                        {
                            arr_13 [(unsigned short)9] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_0] [i_5 + 2])))) >= (((((/* implicit */_Bool) (+(arr_12 [i_0] [i_1 + 2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) arr_1 [i_0]))))));
                            arr_14 [i_0] = ((/* implicit */long long int) arr_6 [i_0]);
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((arr_11 [i_6] [i_2] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
                        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_2 + 1]))));
                    }
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_22 &= var_3;
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_15 [i_0] [i_1 + 2] [i_0] [i_7]))))), (((1064498516U) ^ (var_8))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_0]))))))));
                        var_24 += ((/* implicit */int) var_0);
                        var_25 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_7] [i_1]))), (arr_12 [i_0] [10LL] [i_0]))) - (((/* implicit */unsigned long long int) (+(min((-2030572095), (((/* implicit */int) (unsigned char)30)))))))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_1 + 1] [i_1 + 1])))))));
                    var_27 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned short) arr_17 [i_0] [(unsigned short)15]))), (((((/* implicit */_Bool) (-(arr_9 [i_2] [i_1 - 1] [i_1] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-3102145637996107796LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_15 [(unsigned char)21] [(unsigned char)21] [i_2] [i_1])))))))));
                    var_28 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((((/* implicit */_Bool) 6291456U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53193))) : (arr_19 [i_0] [i_0]))) > (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)18000), (((/* implicit */unsigned short) var_2))))))))), ((~(min((-1788207257), (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))))));
                }
                var_29 = ((/* implicit */_Bool) (+((~((+(((/* implicit */int) var_6))))))));
                var_30 -= ((/* implicit */_Bool) (signed char)-93);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 3; i_8 < 11; i_8 += 2) 
    {
        for (unsigned int i_9 = 1; i_9 < 9; i_9 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    for (unsigned int i_11 = 2; i_11 < 10; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */int) min(((+(13044141977743804844ULL))), (((/* implicit */unsigned long long int) (+((-(9U))))))));
                                arr_34 [i_8] [i_8] [i_10] [i_11] [i_12] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (unsigned short)65521)), ((-(3042914915U))))), (((/* implicit */unsigned int) (_Bool)0))));
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((8775506865810454583LL) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_8] [20ULL] [i_10] [i_10] [(unsigned short)0])))))) ? (min((var_8), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)8] [(unsigned char)0] [i_10] [i_10] [i_12]))))))))));
                            }
                        } 
                    } 
                } 
                arr_35 [i_8 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) (unsigned short)16128))))) ? (((var_8) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))) : ((+(((30U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [20U])))))))));
                arr_36 [i_9] = ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_33 [i_8] [i_8] [i_9 - 1] [i_8] [i_9 + 1]))))) > (((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_9] [i_9 + 1] [i_8 - 3] [i_8]))) : (var_4)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_13 = 2; i_13 < 10; i_13 += 3) 
    {
        for (long long int i_14 = 2; i_14 < 11; i_14 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 2; i_16 < 9; i_16 += 3) 
                    {
                        for (signed char i_17 = 2; i_17 < 11; i_17 += 2) 
                        {
                            {
                                var_33 &= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) min((arr_6 [i_13]), ((signed char)16)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_11 [(short)18] [i_17] [i_13]))))))));
                                var_34 = ((/* implicit */signed char) 3923001444U);
                            }
                        } 
                    } 
                    var_35 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) min(((unsigned char)164), (((/* implicit */unsigned char) var_11))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) min(((unsigned char)166), (var_12)))))), (((/* implicit */int) var_0))));
                }
                arr_49 [i_13 + 1] [i_13] [i_14 - 1] = ((/* implicit */unsigned short) var_6);
                var_36 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (var_8)));
                var_37 = ((/* implicit */unsigned short) max((var_37), (var_5)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_18 = 2; i_18 < 20; i_18 += 4) 
    {
        for (signed char i_19 = 3; i_19 < 21; i_19 += 3) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (~(var_10))))));
                                var_39 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [(unsigned char)16] [i_19 - 1] [i_19] [(_Bool)1] [i_22]))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_60 [i_22] [i_20] [i_20] [i_18 + 2]))))), (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                                var_40 &= ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)113)), ((+(((/* implicit */int) var_9))))));
                                arr_65 [i_18] [i_21] [i_21] [i_20] [i_19] [i_18] [i_18] = ((/* implicit */_Bool) (unsigned short)61887);
                                var_41 = ((/* implicit */unsigned char) arr_16 [i_20]);
                            }
                        } 
                    } 
                    arr_66 [17LL] [i_20] [17LL] = ((/* implicit */unsigned int) (-((~(((long long int) (short)(-32767 - 1)))))));
                }
            } 
        } 
    } 
}

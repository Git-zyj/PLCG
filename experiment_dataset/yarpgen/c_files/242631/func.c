/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242631
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
    var_14 = ((/* implicit */unsigned char) ((var_1) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_12)))) / (var_5)))));
    var_15 = ((/* implicit */long long int) (short)-7822);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [4LL] [i_2 - 1] [i_0] [i_0] [(unsigned short)4] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_10) ? (-157017406) : (((/* implicit */int) (short)28949))))) ? ((-(((/* implicit */int) arr_5 [1U] [i_2] [i_3])))) : (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_0)) - (17179)))))));
                        arr_10 [i_0] [0ULL] [(unsigned short)3] [i_2] [i_0] = ((/* implicit */unsigned short) (~(arr_8 [i_2 + 3] [i_0])));
                        var_16 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_6))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_5] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) : (var_9)));
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) 769520153U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3520))) : (5313866066576365231ULL))))));
                        arr_20 [17] [i_4] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)8] [15LL]))))) : (((/* implicit */int) (unsigned char)3))));
                        arr_21 [i_0] = ((/* implicit */unsigned int) var_7);
                    }
                } 
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        var_20 = (+(min((((/* implicit */unsigned long long int) (unsigned char)255)), (17974948071820829935ULL))));
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            var_21 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)251)))))));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [(short)10])))))) ? (((/* implicit */int) ((((/* implicit */long long int) 18U)) > (var_9)))) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (~(3232119551190143570LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) arr_17 [i_7] [i_8] [i_10] [i_11])))))))));
                            arr_36 [i_10] = ((/* implicit */short) (-(1933939411U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        {
                            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */int) max(((short)127), (((/* implicit */short) (unsigned char)252))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3366029433U)))))));
                            var_24 = ((/* implicit */_Bool) (((-(928937856U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_12])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    var_25 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_7] [5U])) >= (arr_12 [i_7] [i_8]))))));
                    var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)32745)) ? (((/* implicit */unsigned int) max((2097151), (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_0)) ? (251658240U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25922)))));
                }
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
                {
                    for (unsigned char i_16 = 4; i_16 < 14; i_16 += 3) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_34 [i_7] [i_7] [i_9] [(_Bool)1] [i_16]))))))) >= ((+(-909040445)))));
                            arr_50 [i_7] [i_7] [i_9] [i_9] [(unsigned char)7] [(short)9] = ((/* implicit */long long int) ((_Bool) (_Bool)1));
                            arr_51 [i_7] [i_8] [i_9] [8ULL] [i_16] = ((/* implicit */signed char) ((var_11) ? (((((/* implicit */_Bool) (+(3984287847U)))) ? (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (((18446744073709551593ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (min((var_1), (((/* implicit */unsigned long long int) var_3))))));
                        }
                    } 
                } 
            }
            var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((1520075810), (var_6))) & (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))) ? (max((((((/* implicit */int) (unsigned short)9)) >> (((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned short)12)))) : (var_6)));
        }
        arr_52 [i_7] = ((/* implicit */unsigned char) arr_18 [i_7] [i_7] [i_7] [i_7]);
    }
    var_29 = ((/* implicit */unsigned int) var_10);
}

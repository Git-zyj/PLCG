/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215565
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
    var_12 = ((/* implicit */unsigned int) (~(8180462644621731506LL)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [5] [i_2] [i_2] = arr_3 [i_0] [i_1];
                    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-83))));
    var_15 = ((/* implicit */short) var_5);
    /* LoopSeq 1 */
    for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
    {
        var_16 -= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (short)1016)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) 1603330077)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */short) arr_14 [i_3 - 1] [i_4] [i_4]);
            arr_17 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3 - 2] [i_4]))));
        }
        for (int i_5 = 2; i_5 < 13; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            arr_29 [i_3 - 2] [i_8] [(unsigned char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((short) arr_14 [i_5 + 1] [i_6] [i_8]))) : (((((/* implicit */_Bool) (short)16383)) ? (-92303901) : (((/* implicit */int) (_Bool)0))))));
                            arr_30 [i_8] [i_5 + 2] [i_8] = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_1))))));
                            var_17 = ((/* implicit */unsigned char) arr_21 [i_5 + 3] [i_5 + 2]);
                            arr_31 [i_3 - 2] [i_3] [i_8] [i_3 - 1] [i_3] [i_3] [(short)7] = ((int) ((((/* implicit */_Bool) arr_14 [i_3] [i_5] [i_5])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        {
                            arr_36 [i_3] [i_5 - 1] [i_6] [i_10] [i_10 - 1] = ((/* implicit */short) ((unsigned short) (((-2147483647 - 1)) / (((/* implicit */int) min((((/* implicit */unsigned short) (short)-23286)), (arr_8 [i_9])))))));
                            arr_37 [i_10] [i_5] [i_6] [i_6] [i_9] [i_10 - 1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)20571)) ? (((/* implicit */int) (short)20571)) : ((-(((/* implicit */int) (signed char)88))))))));
                            var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 2528385531U)) ? (497150175) : (((/* implicit */int) arr_35 [i_3])))) : (((/* implicit */int) (signed char)115)))))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned int i_11 = 1; i_11 < 13; i_11 += 4) 
            {
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_47 [i_3] [i_13] [i_11] &= max((((/* implicit */unsigned long long int) (short)9832)), (arr_21 [i_3 - 1] [i_5]));
                            arr_48 [i_3] [i_5] [i_11] [i_12] [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) max((arr_19 [i_11 + 3]), (arr_19 [i_11 + 2]))))));
                            arr_49 [i_3] [(_Bool)1] [i_11] [i_13] = ((/* implicit */signed char) (~((~(max((2999995252850220210ULL), (((/* implicit */unsigned long long int) (signed char)-22))))))));
                        }
                    } 
                } 
            } 
            arr_50 [i_3] [i_5] = ((/* implicit */_Bool) ((short) (~(((((/* implicit */_Bool) -1203589262)) ? (arr_25 [i_5] [i_3 + 1] [i_3 - 1]) : (((/* implicit */int) var_10)))))));
            arr_51 [i_3 + 1] [i_3] [i_5] = ((((/* implicit */_Bool) 12257029121418963571ULL)) ? (((/* implicit */unsigned long long int) ((unsigned int) (signed char)118))) : ((+(((((/* implicit */_Bool) arr_18 [i_3] [i_5])) ? (((/* implicit */unsigned long long int) -6163695448272222492LL)) : (7395349811445734527ULL))))));
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_20 = ((/* implicit */long long int) (signed char)88);
                        /* LoopSeq 3 */
                        for (short i_16 = 0; i_16 < 16; i_16 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)23286))))), (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-20571)) + (2147483647))) << (((((/* implicit */int) arr_44 [i_3] [i_5 + 3] [i_14] [8LL] [i_15] [i_16] [i_16])) - (148)))))) ? (((/* implicit */unsigned long long int) 1858521307U)) : (arr_57 [i_3] [i_5 + 3] [i_5] [i_15] [i_15] [(signed char)12])))));
                            arr_58 [i_3] [i_5] [i_15] [i_15] [i_16] [i_16] = ((/* implicit */_Bool) 1874076227U);
                            arr_59 [i_15] [4LL] = ((/* implicit */short) max(((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6))))), (((/* implicit */long long int) max(((+(((/* implicit */int) var_1)))), ((+(((/* implicit */int) (short)11172)))))))));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((min((1530216636U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_3] [i_3] [(signed char)9])) ? (var_0) : (arr_9 [i_3])))))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_32 [i_15] [i_15] [i_15] [i_15])))))))))))));
                            arr_64 [i_15] [i_15] [i_14] [i_14] [i_14] [i_5 - 2] [i_15] = ((/* implicit */unsigned short) (~(((unsigned int) var_3))));
                            var_24 ^= ((/* implicit */unsigned long long int) max(((+(min((((/* implicit */long long int) arr_55 [i_3] [i_14] [i_3] [i_3 - 2] [i_3])), (arr_27 [i_17] [i_15] [i_14] [i_5]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3434352976U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 2) 
                        {
                            arr_67 [6U] [i_15] [i_15] [i_15] [i_18] = ((/* implicit */short) (+(((unsigned long long int) var_0))));
                            arr_68 [(short)7] [i_5] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-8254761229693465530LL) ^ (((/* implicit */long long int) 2147483647))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [i_15] [i_3 - 2] [i_3 - 2]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (arr_12 [i_5])))))) : (((((/* implicit */_Bool) max((((/* implicit */short) arr_66 [i_3 - 2] [(signed char)6] [i_14] [i_15] [i_15] [i_18])), ((short)(-32767 - 1))))) ? (-5517744466797531116LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5917)))))));
                            arr_69 [i_15] [i_15] [i_15] = ((/* implicit */short) arr_61 [i_3] [i_3 - 1] [i_3] [i_14] [i_14] [i_15] [i_15]);
                        }
                        var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_21 [i_3 + 1] [i_5 + 3])))) ? (6628748637737364388LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6573)))));
                    }
                } 
            } 
        }
    }
}

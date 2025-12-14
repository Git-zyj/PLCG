/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242084
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
    var_18 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) 1654992071)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_19 ^= ((/* implicit */short) (~(-1654992072)));
                    var_20 = ((/* implicit */signed char) ((((unsigned int) -1332059200)) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (short)-17291))) ^ (3622215780U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_1] [2ULL] [i_1] [(short)12] = max((((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17291))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))));
                                var_21 = ((/* implicit */signed char) (~(min((((/* implicit */int) (unsigned char)135)), (-23)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_5 = 2; i_5 < 14; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 4) 
        {
            for (int i_7 = 1; i_7 < 13; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_7 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18091841801952201520ULL)));
                        arr_28 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 1089994099U)) ? (2531254577U) : (((/* implicit */unsigned int) 2136279902))));
                        arr_29 [i_8] [i_8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_10 [i_5 + 1] [i_6] [i_7 + 2] [i_8] [i_8])))) ? (((/* implicit */int) arr_24 [i_7 - 1] [i_6 - 2] [i_6 - 1] [i_5 - 2])) : (((/* implicit */int) (unsigned char)135))));
                        arr_30 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */int) var_5)) : (((var_14) ^ (((/* implicit */int) var_3))))));
                        arr_31 [i_5] [i_6 + 1] [i_7 - 1] [i_8] [i_8] &= ((/* implicit */unsigned int) ((unsigned short) var_6));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_5] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 2]))));
    }
    for (short i_9 = 2; i_9 < 14; i_9 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_9 + 3])) ? (2973214773U) : (((/* implicit */unsigned int) var_9))))), (max((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_9 + 2] [i_9 + 2] [13U] [(unsigned short)9] [i_9 + 4] [i_9])))))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 1919807450U)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (signed char)127))))))) <= (max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) - (2782764484U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-2368)))))))));
        var_26 -= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)46260))));
    }
    for (short i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        var_27 += ((/* implicit */signed char) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(short)0] [i_10] [i_10] [i_10]))) : (672751532U))), ((+(4294967295U)))));
        var_28 += ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) 12522659736060454264ULL))) / (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_4 [i_10] [i_10] [i_10])) : (2147483647)))));
        arr_39 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_2)))) ? (((arr_3 [i_10] [i_10]) * (672751515U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)46278), (((/* implicit */unsigned short) (unsigned char)6))))))))) ? (((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) arr_19 [i_10] [(unsigned short)8]))))) ? (var_9) : (((/* implicit */int) arr_25 [7] [i_10] [i_10] [i_10])))) : (((/* implicit */int) min((var_10), (((/* implicit */short) (signed char)31)))))));
    }
    var_29 = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((unsigned char) (short)4880))) << (((((/* implicit */int) ((unsigned char) var_2))) - (140)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232943
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
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_1] [6LL] = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) (short)-1)), (18446744073709551613ULL)))));
                arr_6 [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) >> ((((+(((/* implicit */int) var_4)))) - (61017)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                arr_14 [i_2] = ((/* implicit */_Bool) min(((+(((/* implicit */int) var_0)))), ((+(((/* implicit */int) (short)-1))))));
                arr_15 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_2 + 4] [i_2 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), ((+(arr_7 [i_2])))));
                arr_16 [i_2] [i_3] = ((/* implicit */short) ((((_Bool) 4294967295U)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-8))))) ? (((/* implicit */int) (short)1)) : (((arr_7 [i_2]) & (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 23; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            arr_22 [i_5] [14LL] [i_4] [i_4] [i_2] [i_2 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) 9223372036854775800LL)) : (((18446744073709551615ULL) >> (((max((arr_12 [i_2]), (((/* implicit */unsigned int) var_3)))) - (144470056U)))))));
                            /* LoopSeq 3 */
                            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                            {
                                arr_26 [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) var_10);
                                arr_27 [i_2 - 1] [i_3] [i_4] [i_2 - 1] [i_2] = ((((/* implicit */int) (_Bool)1)) >> ((((+(((/* implicit */int) arr_8 [i_4 - 3] [i_2 + 2])))) + (21839))));
                            }
                            for (short i_7 = 1; i_7 < 22; i_7 += 4) 
                            {
                                arr_30 [(short)0] [(unsigned char)19] [(unsigned char)19] [(unsigned char)19] [i_4] = ((/* implicit */signed char) min((((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) arr_29 [i_7 + 2] [i_5] [i_5] [i_4 - 2] [i_2 + 1])) - (65330))))), (((((var_14) + (2147483647))) >> (((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_8)) : (arr_7 [i_4]))) - (30777)))))));
                                arr_31 [i_2] [i_3] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)165)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) >> (((((/* implicit */int) (short)25436)) - (25415)))));
                                arr_32 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (short)-28947)) - (((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (((9223372036854775807LL) >> (((arr_19 [i_2] [i_7]) - (3535014318958319164LL)))))));
                            }
                            for (short i_8 = 3; i_8 < 22; i_8 += 1) 
                            {
                                arr_37 [i_2] [i_2] [i_4] [i_5] [i_4] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                                arr_38 [i_2] [i_3] [i_4] [i_3] [i_5] [i_3] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) min((arr_17 [i_3]), (((/* implicit */short) (_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -613947187)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)8))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) var_7)) ? (2660315496927427472ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38036)))))))));
                                arr_39 [i_2] [i_4] = ((short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32746))))) ? (-1) : (((/* implicit */int) var_3))));
                            }
                            arr_40 [i_5] [i_4 + 1] [i_4] [i_2] [i_2] = ((/* implicit */int) arr_25 [i_5] [i_4] [i_3]);
                            arr_41 [i_4] [i_4 - 3] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_8);
}

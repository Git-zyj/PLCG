/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190142
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (-((-((~(((/* implicit */int) (unsigned char)226))))))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((min((((/* implicit */unsigned int) (short)-13164)), (var_9))) < (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_4))))))))));
                                var_15 = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) (unsigned char)226)))));
                                var_16 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_9 [(short)11] [(short)11] [i_1 - 1] [(short)11]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_23 [i_1] [i_5] [i_5] [i_0] = ((/* implicit */short) var_2);
                                arr_24 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] [i_5] = ((/* implicit */short) (~(((/* implicit */int) (short)13171))));
                                arr_25 [i_0] [i_0] [i_2] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_22 [i_1 - 1] [i_5]) : (arr_22 [i_1 + 2] [i_5])))) ? (((((/* implicit */_Bool) arr_22 [i_1 - 1] [i_5])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_22 [i_1 + 3] [i_5])) ? (arr_22 [i_1 - 1] [i_5]) : (arr_22 [i_1 + 2] [i_5])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        var_17 ^= ((/* implicit */unsigned short) ((int) (+(arr_21 [8] [i_7]))));
        arr_29 [i_7] = ((/* implicit */unsigned short) min(((~(arr_14 [i_7] [i_7] [i_7] [i_7] [i_7]))), (((/* implicit */unsigned long long int) (!((_Bool)0))))));
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */int) arr_7 [i_7])) : (((/* implicit */int) arr_6 [i_7] [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_7] [i_7]), (var_10))))) : (((unsigned int) var_14))));
        var_18 = ((/* implicit */unsigned char) (signed char)-7);
    }
    for (short i_8 = 2; i_8 < 17; i_8 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 2; i_10 < 16; i_10 += 3) 
            {
                for (signed char i_11 = 2; i_11 < 18; i_11 += 4) 
                {
                    {
                        arr_42 [i_8] [i_9] [i_9] = ((/* implicit */short) max(((-(((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_14))))))), (((/* implicit */int) (_Bool)1))));
                        var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_10 + 4]))))), (((((/* implicit */int) arr_35 [i_11 + 1] [i_10 + 3])) % (((/* implicit */int) min((arr_34 [(unsigned char)19] [i_11]), (((/* implicit */short) arr_35 [i_10] [i_11])))))))));
                        arr_43 [(_Bool)1] [(_Bool)1] [i_9] = ((/* implicit */unsigned char) max((arr_37 [i_9]), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (341218585) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((arr_39 [i_9] [i_9] [i_9]), (((/* implicit */signed char) arr_35 [i_10 + 4] [i_10 + 4]))))))))));
                        arr_44 [i_8] |= ((/* implicit */_Bool) arr_32 [7U] [7U]);
                        var_20 *= ((/* implicit */unsigned char) (_Bool)1);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            for (signed char i_13 = 4; i_13 < 17; i_13 += 1) 
            {
                {
                    arr_51 [i_8 - 1] [i_13] [i_13] = ((/* implicit */signed char) var_1);
                    var_21 = ((/* implicit */_Bool) var_4);
                    arr_52 [i_13] [i_13] [i_8] = ((/* implicit */signed char) (((~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)226)), ((unsigned short)61811)))))) | (((/* implicit */int) arr_31 [i_8] [i_13]))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) 15547088083879818362ULL)) ? (((((/* implicit */_Bool) 1533550706U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13834))) : (arr_38 [i_8] [i_12] [i_13] [i_13]))) : (((/* implicit */long long int) (~(1404578612)))))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((min((((/* implicit */long long int) (_Bool)1)), (-5780620506809147121LL))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61809)))))))) ? (((unsigned long long int) (~(((/* implicit */int) (unsigned short)3724))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)31744))))))))))));
    }
    var_24 = ((/* implicit */long long int) var_9);
    var_25 = ((/* implicit */_Bool) (~((~(max((var_8), (((/* implicit */long long int) var_1))))))));
    var_26 = ((/* implicit */_Bool) (short)-1918);
}

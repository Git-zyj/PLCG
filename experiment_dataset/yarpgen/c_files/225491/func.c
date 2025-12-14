/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225491
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
    var_11 |= var_4;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((long long int) (_Bool)1));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2 - 2] [(unsigned char)13] [i_2 - 2] [i_4] [i_4] = ((/* implicit */unsigned char) var_10);
                                arr_14 [i_0] [i_1 - 2] [i_0] [i_3] [i_4] = ((/* implicit */short) arr_3 [i_1] [i_1] [i_1]);
                                arr_15 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)74))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_2)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (short)-6))))) & (((/* implicit */int) (!(var_3))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [i_2] [i_2] [i_1] [9U])), ((((!(((/* implicit */_Bool) (short)8191)))) ? (min((arr_7 [i_2]), (((/* implicit */long long int) (unsigned char)249)))) : (((/* implicit */long long int) min((arr_9 [i_1] [i_1]), (((/* implicit */int) arr_4 [i_2] [i_1 + 1] [i_0])))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (unsigned short i_7 = 1; i_7 < 24; i_7 += 2) 
            {
                {
                    arr_24 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_4)))))));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        arr_28 [i_5] [i_6] [i_7] [i_8] = ((unsigned int) arr_25 [i_6] [i_6] [i_6] [i_6]);
                        var_13 = ((/* implicit */unsigned char) (((~(1768799424U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5682276802212529656LL)) ? (((/* implicit */int) (short)-8198)) : (844286934))))));
                        arr_29 [i_6] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_1)))));
                        arr_30 [i_5] [i_8] [i_8] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_7] [i_7] [i_7 + 1]))));
                        arr_31 [i_6] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned short)29991)))) + (2147483647))) >> (((((unsigned int) var_1)) - (155U)))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_35 [(short)22] [i_6] [(short)22] [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17495)) ? (0U) : (((/* implicit */unsigned int) arr_32 [i_6] [i_7])))))));
                        arr_36 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2052915356)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65531)) <= (((/* implicit */int) var_2))))) : (((((/* implicit */int) (unsigned short)10928)) >> (((((/* implicit */int) var_5)) - (79)))))));
                    }
                }
            } 
        } 
        arr_37 [i_5] = ((/* implicit */int) ((short) ((int) var_3)));
        /* LoopNest 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                {
                    arr_44 [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))));
                    var_14 = ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
    }
    for (signed char i_12 = 1; i_12 < 20; i_12 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) (unsigned short)61953);
        arr_47 [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((274609471488LL), (((/* implicit */long long int) (signed char)-81)))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned int) (+(arr_23 [i_12] [i_12] [i_12] [i_12])))))));
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_12 + 2] [i_12 + 4])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_8))))) - (arr_27 [i_12] [i_12 + 2] [i_12] [i_12])));
    }
    /* LoopSeq 2 */
    for (unsigned short i_13 = 2; i_13 < 22; i_13 += 3) 
    {
        arr_51 [i_13] = ((/* implicit */long long int) max((((unsigned char) arr_49 [i_13])), ((unsigned char)127)));
        arr_52 [i_13] [i_13] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (short)-8198))))));
        var_18 = var_3;
        arr_53 [i_13] = ((/* implicit */unsigned short) ((short) (_Bool)1));
    }
    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) 
    {
        arr_56 [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)27)), (((((/* implicit */int) (signed char)-51)) + (((/* implicit */int) (signed char)34)))))))));
        /* LoopNest 3 */
        for (unsigned int i_15 = 1; i_15 < 21; i_15 += 2) 
        {
            for (unsigned int i_16 = 2; i_16 < 19; i_16 += 1) 
            {
                for (long long int i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    {
                        arr_63 [i_14] [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_17 [i_15 + 1] [i_15 - 1]))))) >= (((/* implicit */int) (short)-8205)))))));
                        arr_64 [1LL] [i_16] [i_15] [i_14] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) var_3)), (var_4))) % (((/* implicit */long long int) 1320648540))));
                    }
                } 
            } 
        } 
        var_20 = arr_26 [i_14];
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215735
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
    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_7) : (var_9)))) : (((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (~(var_17))))) ? (((/* implicit */unsigned int) var_15)) : (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_16)))) : (min((var_9), (((/* implicit */unsigned int) var_13))))))));
        var_20 = ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */long long int) arr_0 [i_0])) - (var_17)))), (((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_21 ^= ((unsigned short) ((((/* implicit */_Bool) arr_4 [(short)9])) ? (749834789U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) arr_4 [i_1]))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) var_8))))) ? ((+(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */int) ((((_Bool) ((int) arr_3 [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_10 [i_1] [i_1] [i_3] [i_3]), (arr_10 [i_1] [i_2] [i_2] [i_1])))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_6))))))) : (max((var_1), ((+(var_11)))))));
                    var_24 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) 3534011697U)))))))));
                    arr_11 [i_1] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_3 [i_3]))))) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_6 [i_3])))))));
                }
            } 
        } 
        arr_12 [i_1] [i_1] = ((long long int) ((unsigned short) (~(var_0))));
    }
    var_25 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_13)) + (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_1))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) arr_9 [i_4]))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_21 [i_4] [i_5] [i_6])) ? (var_17) : (var_1))) - (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)16))))));
                    arr_22 [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) arr_4 [i_5])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)81))));
                                var_29 = ((/* implicit */unsigned char) ((((_Bool) arr_26 [i_4] [i_6] [i_7] [1])) ? (((((var_10) + (2147483647))) << (((var_0) - (1373725861U))))) : (((/* implicit */int) arr_3 [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_28 [i_4] = ((/* implicit */signed char) arr_24 [i_4] [i_4]);
        var_30 = ((/* implicit */short) ((arr_16 [i_4]) + (var_9)));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned short) ((_Bool) var_13));
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 9; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            {
                                arr_41 [i_9] [i_10] [i_11] [i_11] [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_27 [i_9] [i_9] [2LL] [i_11] [i_12] [i_13]))));
                                var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned short)36429)) : (((/* implicit */int) (unsigned short)51620))));
                                arr_42 [i_9] [(unsigned char)4] [i_9] [i_9] = ((/* implicit */unsigned short) ((var_16) ? (((/* implicit */int) arr_32 [i_10 - 1] [(unsigned short)3] [i_10 - 1])) : (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */int) min((var_34), ((~((+(((/* implicit */int) var_4))))))));
                                var_35 = ((/* implicit */_Bool) (-(var_8)));
                                var_36 += ((/* implicit */long long int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119)))));
                            }
                        } 
                    } 
                    var_37 = ((((/* implicit */_Bool) arr_17 [i_10 - 2])) ? (arr_8 [i_9]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_9] [i_10] [i_11])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_25 [(unsigned short)4]))))));
                }
            } 
        } 
    }
    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
    {
        arr_50 [i_16] = ((/* implicit */unsigned char) var_10);
        var_38 = ((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned short)23711)))), (min(((+(((/* implicit */int) arr_29 [i_16])))), (((/* implicit */int) ((short) var_13)))))));
    }
    var_39 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_15)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_10)) : (var_9))))), (((/* implicit */unsigned int) var_13))));
}

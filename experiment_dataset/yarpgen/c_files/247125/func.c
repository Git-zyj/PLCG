/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247125
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_4] [11] [i_4] = ((/* implicit */short) var_16);
                                arr_14 [i_4] [i_4] [i_4] [(short)3] [i_2] [i_4] = ((/* implicit */unsigned int) var_9);
                                arr_15 [i_4] [i_1 + 1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */int) var_0);
                                var_17 = min((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) var_13)) : (max((((/* implicit */long long int) var_11)), (9223372036854775799LL))))), (((/* implicit */long long int) ((max((((/* implicit */int) (unsigned char)243)), (var_5))) > (((/* implicit */int) arr_0 [i_1 - 2]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) var_9);
                                arr_20 [6] [i_1 - 3] [i_2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2147483632)))) ? (((/* implicit */int) (unsigned char)48)) : (((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) (unsigned char)224)) : (536870912)))));
                                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (((/* implicit */unsigned long long int) var_6)) : (18446744073709551603ULL))) >> (((469762048U) - (469762019U)))));
                                arr_21 [i_0] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1 - 2] [i_6] [i_6] [i_6])) ? (((((/* implicit */int) (signed char)51)) & (((/* implicit */int) (unsigned char)241)))) : (((/* implicit */int) (unsigned char)13)))))));
                                arr_22 [i_0] [i_1 + 2] [i_2] [(unsigned short)0] [i_6] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (var_11) : ((((((-(((/* implicit */int) var_8)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)251)) - (251)))))));
                            }
                        } 
                    } 
                    arr_23 [(signed char)3] [1U] = ((/* implicit */int) (unsigned char)241);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((min(((!(((/* implicit */_Bool) var_10)))), ((!(((/* implicit */_Bool) 2147483625)))))) ? (var_11) : (((((((((/* implicit */_Bool) var_7)) ? (var_5) : (var_11))) + (2147483647))) >> (((var_13) - (2916580528U)))))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        for (long long int i_8 = 2; i_8 < 14; i_8 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_25 [i_8 - 2] [i_8 - 2]) / (((/* implicit */long long int) var_13))))) ? (((((/* implicit */_Bool) arr_24 [i_8 - 2])) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1966080)) ? (var_5) : (((/* implicit */int) (signed char)127))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)104))) >= (2333130063033672383LL)))))));
                /* LoopSeq 4 */
                for (signed char i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) (+((~((-(arr_25 [i_7] [i_7])))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)30306), (((/* implicit */short) arr_26 [i_8 - 2]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_26 [i_8 + 1])) > (((/* implicit */int) arr_26 [i_8 - 1]))))) : (((var_11) / (((/* implicit */int) var_15))))));
                }
                for (int i_10 = 3; i_10 < 12; i_10 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 14; i_12 += 4) 
                        {
                            {
                                arr_41 [i_7] [i_8] [i_10] [i_11] [i_7] |= var_11;
                                var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 2822375215013375399LL)))) ? (max((arr_32 [i_12 + 1]), (arr_32 [i_12 + 1]))) : (((((/* implicit */_Bool) var_6)) ? (arr_32 [i_12 + 1]) : (arr_32 [i_12 - 1])))));
                                var_25 = ((/* implicit */unsigned char) var_14);
                                arr_42 [i_10] [i_10] [i_11] = ((/* implicit */short) arr_37 [7ULL] [i_8 - 2] [7ULL] [i_11 + 3] [i_12]);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) 18446744073709551611ULL);
                    var_27 *= ((/* implicit */long long int) ((((/* implicit */_Bool) max((4552399072053099701LL), (((/* implicit */long long int) arr_35 [i_8 + 1] [i_8 + 1] [i_10 + 3] [i_10 - 1]))))) ? (((((/* implicit */_Bool) arr_35 [i_8 + 1] [i_8 - 2] [i_10 + 3] [i_10 - 2])) ? (((/* implicit */int) var_4)) : (1185358687))) : (((/* implicit */int) ((var_11) != (((/* implicit */int) arr_35 [i_8 + 1] [i_8 + 1] [i_10 + 3] [i_10 + 3])))))));
                    var_28 = ((/* implicit */int) (+(18446744073709551611ULL)));
                }
                for (int i_13 = 3; i_13 < 12; i_13 += 4) /* same iter space */
                {
                    var_29 = min((4294967288U), (((((/* implicit */_Bool) (short)30720)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_11)) : (3627927913U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_7] [(unsigned char)5])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) (unsigned char)241);
                                arr_52 [i_13] [4U] [i_13 + 2] = ((/* implicit */short) arr_24 [i_7]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_16 = 0; i_16 < 15; i_16 += 3) 
                {
                    arr_55 [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)248)) % (((/* implicit */int) arr_37 [i_7] [0] [i_7] [i_8 - 2] [i_8 + 1]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))) : (((var_4) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_16])))))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((544721455) & (-2147483618)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)));
                }
            }
        } 
    } 
}

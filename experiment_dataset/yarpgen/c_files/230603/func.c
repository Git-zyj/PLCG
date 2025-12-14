/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230603
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
    var_11 = ((/* implicit */short) (((!(((var_2) == (690861407U))))) ? (4236347389U) : (((/* implicit */unsigned int) 1543340506))));
    var_12 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) (unsigned short)22110)))));
                        arr_10 [i_3] [i_2] |= ((/* implicit */long long int) ((unsigned int) (+(var_9))));
                        var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)43451)) ? (((/* implicit */int) arr_3 [(signed char)8] [i_2] [i_1])) : (((/* implicit */int) arr_3 [i_3] [i_2] [i_1]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) var_5)) > (2900718872U)))) != (((/* implicit */int) arr_2 [i_0] [i_0]))));
                        var_16 = (!(((/* implicit */_Bool) (+(-1670701715)))));
                        var_17 |= ((/* implicit */unsigned short) arr_0 [i_1]);
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_5)) : (arr_6 [i_0] [1U] [i_2] [i_4] [i_1] [i_0])));
                        var_19 = ((/* implicit */signed char) (+(((arr_4 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30952)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        arr_15 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (6498800630500482045ULL) : (16597001535863493260ULL))))));
                        var_20 += ((/* implicit */unsigned long long int) ((int) var_4));
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)14501)) * (((/* implicit */int) (unsigned char)121))));
                    }
                    var_21 = ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (long long int i_6 = 4; i_6 < 21; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) 16597001535863493241ULL)))));
                                arr_21 [i_1] [i_1] [i_2] [i_6 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_0))))))) == ((-(1849742537846058356ULL)))));
                                var_23 = ((((/* implicit */_Bool) (-(max((arr_7 [i_7] [i_6] [i_2] [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_6))))))) ? ((+(((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) (-(arr_5 [i_2] [i_1] [i_2])))));
                                arr_22 [i_1] [3] = ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-14496)))))) * ((-(arr_18 [i_0] [18] [i_2] [18]))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_5 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) (short)-14520)) : (((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (+(var_6)));
    var_26 = var_0;
}

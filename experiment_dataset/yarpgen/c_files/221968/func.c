/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221968
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
    var_11 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)159)), (min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) var_7)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_12 -= ((/* implicit */unsigned int) arr_2 [8]);
        var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)10])) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_6)) ? (arr_2 [4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))) && (((/* implicit */_Bool) arr_2 [(unsigned char)10]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */int) ((short) var_6));
        var_14 *= ((/* implicit */unsigned int) (+(-6054481079888858626LL)));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    arr_16 [i_2] [i_2] [i_3] [i_4] |= ((/* implicit */int) ((short) arr_14 [i_3 + 1] [i_3 + 1] [i_3] [i_3]));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+((-(var_9))))))));
                                arr_22 [i_2] [i_4] [(signed char)7] [i_4] [(signed char)7] = ((/* implicit */unsigned int) arr_13 [i_2] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 ^= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (signed char)-73)) ? (7865496364051890104LL) : (var_2))));
        arr_23 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (unsigned short)25407)))));
    }
    for (unsigned int i_7 = 1; i_7 < 19; i_7 += 4) 
    {
        var_17 = ((unsigned char) ((((/* implicit */_Bool) (-(arr_24 [i_7] [i_7])))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) ((_Bool) (short)0)))));
        var_18 = ((/* implicit */int) var_0);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            for (unsigned int i_9 = 2; i_9 < 18; i_9 += 2) 
            {
                {
                    arr_31 [i_7] [i_7] [i_9] = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_7] [i_7] [i_7]))))))));
                    var_19 *= ((/* implicit */_Bool) (+(min((arr_25 [i_8]), (max((((/* implicit */unsigned long long int) -263508439952449891LL)), (arr_25 [i_8])))))));
                    arr_32 [i_7] [(unsigned short)2] [i_9] [i_7] = ((/* implicit */short) (~(min((min((((/* implicit */unsigned int) (signed char)0)), (arr_24 [i_8] [i_9]))), (arr_29 [i_7] [16LL])))));
                }
            } 
        } 
        arr_33 [i_7] = arr_26 [i_7 + 1] [i_7 + 1];
        arr_34 [i_7] = ((/* implicit */short) (((+(arr_25 [i_7]))) | (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (((1695452540U) - (((/* implicit */unsigned int) arr_27 [i_7] [i_7])))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)21)))))) > (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (-7865496364051890088LL))))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
}

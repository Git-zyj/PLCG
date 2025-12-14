/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192281
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((486133289U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)4886)))))) << ((((-(((/* implicit */int) var_15)))) + (33846))))))));
        var_19 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) var_18)) >= (var_2)))) < ((+(((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */long long int) ((unsigned int) var_12))) * (((((/* implicit */long long int) ((/* implicit */int) var_14))) % (var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : ((+(var_7))))))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((8664911956882831191ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_16)))))))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                for (signed char i_4 = 3; i_4 < 13; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [i_2] [i_3] [i_1] |= ((/* implicit */unsigned char) var_2);
                        var_21 = ((/* implicit */unsigned long long int) var_7);
                        arr_16 [i_1] [i_4] [i_3] [i_4 - 2] = (~(((/* implicit */int) var_11)));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 4; i_6 < 8; i_6 += 2) 
        {
            for (unsigned char i_7 = 3; i_7 < 8; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        arr_30 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))));
                        arr_31 [(signed char)3] [i_6 - 4] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(var_0)))) : (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2163006994U))))))));
                        arr_32 [i_5] [1U] [i_8] [i_8] [i_6 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-24)) ? (2802924037U) : (3478489659U)));
                        arr_33 [i_5] [i_8] [i_8] = ((/* implicit */unsigned long long int) var_11);
                    }
                } 
            } 
        } 
        var_22 -= ((/* implicit */int) var_18);
        arr_34 [0ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_18)))) - (((((/* implicit */int) var_18)) - (((/* implicit */int) var_11))))));
    }
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
}

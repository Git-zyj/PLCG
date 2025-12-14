/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215132
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
    var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_10)) - (((/* implicit */int) (signed char)-70))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_12)));
    var_19 *= ((/* implicit */unsigned short) var_17);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        var_20 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) -2550551893510746019LL)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (signed char)75))))));
        var_21 += ((/* implicit */unsigned int) (+(var_16)));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_0] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) ((short) (signed char)127))) : (((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-75)))))), ((+(((/* implicit */int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (arr_12 [(signed char)17] [(signed char)23])))) ? ((+(((/* implicit */int) (unsigned char)192)))) : (((/* implicit */int) arr_14 [i_0] [i_0 - 1])))), (((/* implicit */int) arr_3 [i_1] [i_1] [i_2]))));
                            arr_16 [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(var_14)))) ? ((+(10188656704499245687ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1])) * (((/* implicit */int) (unsigned char)63))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)192)) & (((((/* implicit */_Bool) 9223372036854775801LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)0)))))))));
                            var_22 ^= ((/* implicit */signed char) 4294967295U);
                            arr_17 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(short)11] [(short)11])) >> (((((/* implicit */int) var_6)) - (57)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) (signed char)16))))) : (((((/* implicit */long long int) arr_10 [i_0] [(_Bool)1] [i_2] [(_Bool)1] [i_4])) + (-31710495942682183LL))))) - (((/* implicit */long long int) min((((/* implicit */int) (signed char)116)), ((-(((/* implicit */int) var_10)))))))));
                        }
                    }
                } 
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0]))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */long long int) (unsigned char)255)), ((-9223372036854775807LL - 1LL))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_22 [i_5] [i_5]), (((/* implicit */unsigned short) var_2)))))) <= (((((/* implicit */_Bool) arr_24 [i_5] [i_7] [(unsigned short)8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5] [(_Bool)1] [i_7]))) : (524287LL))))))));
                    var_24 = ((/* implicit */unsigned short) (+((~(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (4294967293U)))))));
                    var_25 *= ((/* implicit */signed char) (+((+(max((((/* implicit */int) (unsigned char)124)), (755189632)))))));
                }
            } 
        } 
        arr_28 [i_5] = ((/* implicit */signed char) -9223372036854775793LL);
    }
    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -5))));
        var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)2))));
    }
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? ((+(((/* implicit */int) var_1)))) : ((+(((/* implicit */int) (unsigned char)255))))))) && (((/* implicit */_Bool) -6256994269860971476LL))));
    var_29 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104)))))))) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) max(((unsigned char)119), (var_4)))) : (((/* implicit */int) var_15)))) : (((/* implicit */int) (unsigned short)10094))));
}

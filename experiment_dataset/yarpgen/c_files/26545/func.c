/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26545
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_19 += ((/* implicit */short) ((((/* implicit */_Bool) (((+(arr_0 [18U]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (short)22121)))))))) ? (arr_2 [i_0]) : (max((arr_2 [i_0]), ((+(-7708249503525753732LL)))))));
        var_20 = ((/* implicit */unsigned short) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
        var_21 = ((/* implicit */unsigned int) (unsigned short)44327);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_1 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_7 [i_1] [8ULL] &= ((/* implicit */signed char) var_11);
        arr_8 [3ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 9223372036854775782LL)) ? (((/* implicit */long long int) var_11)) : (7708249503525753731LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && ((_Bool)1)))))))) ? ((+(((/* implicit */int) (unsigned short)10713)))) : (((/* implicit */int) ((short) 0LL))));
        arr_9 [i_1] = min((((/* implicit */long long int) (+(arr_4 [i_1])))), (((long long int) (+(arr_0 [i_1])))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((9223372036854775782LL) - (9223372036854775770LL)))))) & (((var_10) & (((/* implicit */long long int) arr_5 [i_1]))))))) : (((((/* implicit */unsigned long long int) ((arr_2 [i_1]) & (((/* implicit */long long int) ((/* implicit */int) (short)30491)))))) ^ (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54817))) : (var_5)))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 3; i_4 < 23; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) (-(arr_18 [i_2] [i_3] [i_4 + 1] [i_5])));
                        var_24 = ((((/* implicit */_Bool) ((signed char) 3787729702083946022LL))) ? ((+(((/* implicit */int) arr_15 [i_3 - 1])))) : (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
        arr_19 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_18 [i_2] [i_2] [i_2] [i_2]))) : (arr_18 [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7708249503525753731LL)) ? (((/* implicit */unsigned long long int) 7708249503525753725LL)) : (var_5)))) ? (arr_18 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) (short)13686)) + (((/* implicit */int) (signed char)-51)))))))));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [i_2])) + (2147483647))) << (((((arr_16 [i_2] [i_2] [i_2]) + (7849626610866641019LL))) - (14LL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)10838))))) : (((unsigned long long int) (short)22998)))))));
    }
    var_26 = ((/* implicit */signed char) 7708249503525753733LL);
    var_27 = ((/* implicit */unsigned short) var_16);
    var_28 = ((/* implicit */unsigned char) var_14);
    var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -7708249503525753732LL)) ? (((/* implicit */int) (unsigned short)21788)) : (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (unsigned char)246)))))) + (((/* implicit */int) ((short) var_8)))));
}

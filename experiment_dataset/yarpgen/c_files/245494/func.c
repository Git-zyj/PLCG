/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245494
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_9)), (0ULL)))))) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) (signed char)61)))) : ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) < (18446744073709551609ULL)))))))))));
    var_16 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >= ((~(65535)))))), (var_6)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) (unsigned char)100);
        var_18 = ((/* implicit */signed char) var_8);
        arr_2 [i_0] &= ((/* implicit */long long int) (+((+(((/* implicit */int) arr_1 [9] [9]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_4);
        arr_4 [i_0] = ((/* implicit */int) ((signed char) (+(((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 8; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    arr_16 [i_3] [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_10 [i_1 + 1]) : (arr_10 [i_1 - 1]))));
                    arr_17 [(signed char)3] |= ((/* implicit */unsigned long long int) ((18446744073709551610ULL) >= (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (_Bool)1)))), (arr_7 [i_1 + 1]))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8)))) >= (18446744073709551614ULL)))) >= (((/* implicit */int) var_5))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 4; i_4 < 9; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (unsigned short i_6 = 1; i_6 < 9; i_6 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) var_11);
                        var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min(((signed char)124), (((/* implicit */signed char) ((6ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [(unsigned char)6]))))))))), (min((3151957624439779996ULL), (18446744073709551615ULL)))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)-10)), (1065353216)));
        var_23 = (+((-(((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 3])))));
        var_24 += ((/* implicit */_Bool) ((unsigned long long int) max((arr_19 [i_1 + 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8693674296135911375LL))))))));
    }
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_0))))) : (((((/* implicit */_Bool) -102881110789291558LL)) ? ((+(((/* implicit */int) var_0)))) : (min((((/* implicit */int) (unsigned short)0)), (31)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247784
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) min((((arr_0 [i_0 + 1] [i_0 - 1]) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-17241))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-17236)) & (((/* implicit */int) (short)8191))))))))));
        var_21 = ((/* implicit */int) (short)3635);
        arr_2 [i_0] = ((/* implicit */unsigned int) (unsigned char)14);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (+(-7056127129112883835LL)));
        var_22 = ((/* implicit */short) (-(arr_4 [i_1])));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7846912090300567433LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-17236)) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) (short)-8191)))))));
        var_25 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-8191))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_9 [i_3]))));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)17236), (((/* implicit */short) (signed char)-1))))) || (((/* implicit */_Bool) (short)32767))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            arr_15 [i_4] = ((/* implicit */unsigned long long int) ((((var_19) ? (((/* implicit */int) var_4)) : (-1129679135))) == (((/* implicit */int) (short)32767))));
            var_28 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 644953709)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))) : (arr_6 [i_4 + 1] [i_4 + 1])));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_4 + 1])) ? (arr_7 [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 + 1])))));
            var_30 = (-(arr_3 [i_4 + 1] [i_4 + 1]));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) 4194304U))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34652))) : (arr_3 [i_3] [i_3])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_18 [i_3] [i_5]))));
                var_33 = (-(((/* implicit */int) arr_10 [i_4 + 1])));
            }
        }
        for (unsigned short i_6 = 3; i_6 < 15; i_6 += 1) 
        {
            var_34 = ((/* implicit */_Bool) min(((-(((/* implicit */int) (short)26657)))), (((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) >> (((var_16) - (410463900863616648ULL))))) <= (((/* implicit */int) var_10)))))));
            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) -9223372036854775791LL))))), (arr_16 [i_3]))))));
        }
        var_36 = ((/* implicit */unsigned int) ((var_14) != (((/* implicit */int) min((((/* implicit */unsigned short) (short)13692)), ((unsigned short)65535))))));
        var_37 += ((/* implicit */_Bool) (+(arr_14 [(_Bool)1])));
    }
    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (!(((/* implicit */_Bool) var_12)))))));
    var_39 = ((/* implicit */unsigned short) ((var_8) ? (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) var_8))))))) : (min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))));
}

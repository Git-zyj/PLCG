/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47030
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
    var_17 = ((/* implicit */unsigned short) min((var_2), (((/* implicit */short) var_10))));
    var_18 = ((/* implicit */short) var_10);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0])), ((-9223372036854775807LL - 1LL))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))));
        var_20 = ((/* implicit */_Bool) (~((~(9223372036854775807LL)))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_1 [6U] [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_6 [16ULL] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_5 [i_1] [(unsigned short)14]))))) ? (((/* implicit */int) (unsigned short)12288)) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */int) (short)(-32767 - 1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4)) ? (arr_4 [i_1] [(short)8]) : (arr_4 [1U] [i_1])))) ? ((+(arr_4 [i_1] [(_Bool)0]))) : (((long long int) arr_4 [(signed char)17] [(signed char)17]))))));
        arr_7 [(short)19] [(short)19] = ((/* implicit */unsigned short) (-(((536870911LL) | (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0)))))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_11 [i_2] [i_1] [i_1] = ((/* implicit */long long int) (+(4294967289U)));
            var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (-8) : ((-2147483647 - 1))))) ? (((((/* implicit */int) (unsigned char)0)) * (arr_8 [i_2]))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) arr_8 [i_1])))));
        }
        for (short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            arr_14 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_3] [i_1])) * (((/* implicit */int) arr_12 [i_1] [i_1])))) + (arr_8 [i_3])));
            arr_15 [(short)6] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1] [i_3]))))), (((short) (+(36028797018931200LL))))));
        }
    }
    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_23 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)246)))))), (max((((/* implicit */int) (signed char)127)), (2147483647)))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_4])) * (((((/* implicit */_Bool) min((arr_4 [(unsigned short)10] [(unsigned char)7]), ((-9223372036854775807LL - 1LL))))) ? ((-(((/* implicit */int) (short)32767)))) : (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_5 [(signed char)5] [i_4])) : (((/* implicit */int) (_Bool)0))))))));
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [(_Bool)1] [(unsigned short)11] [i_4])) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) arr_0 [i_4])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)3] [(unsigned short)1])) || (((/* implicit */_Bool) arr_0 [i_4])))))))))))));
        var_26 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_10 [i_4])))) | (max((((/* implicit */int) (unsigned short)65535)), (((((/* implicit */_Bool) (signed char)-2)) ? (0) : (((/* implicit */int) (signed char)-117))))))));
    }
    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_27 -= ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (short)32751))) * ((+(-1LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)102))))) ? (((/* implicit */unsigned int) (-(-17)))) : (((unsigned int) (unsigned short)53248)))))));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) 15U);
        var_28 *= ((/* implicit */unsigned long long int) ((signed char) (-((+(9223371899415822336LL))))));
    }
    var_29 = ((/* implicit */signed char) (-2147483647 - 1));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217467
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
    var_15 = ((/* implicit */_Bool) var_4);
    var_16 &= ((/* implicit */int) ((unsigned long long int) -8462977926015011797LL));
    var_17 = ((/* implicit */_Bool) (unsigned char)255);
    var_18 = ((/* implicit */short) var_13);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1811480635778904885ULL)) ? (-8462977926015011770LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4339)) && (((/* implicit */_Bool) (signed char)116))))) : (((((/* implicit */_Bool) 0ULL)) ? (arr_0 [i_0]) : (arr_0 [i_0]))))) * (((((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0]))) / (arr_1 [i_0 - 3] [i_0 + 2])))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((min((min((3840ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))), (((/* implicit */unsigned long long int) (signed char)127)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709547776ULL)) && (((/* implicit */_Bool) 12048197811772900230ULL))))))));
        var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned char)158)), (2634003316U)));
        var_20 = (+((+(arr_0 [i_0 - 1]))));
    }
    for (unsigned char i_1 = 4; i_1 < 10; i_1 += 2) 
    {
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & ((~(0ULL)))));
        arr_8 [(unsigned short)6] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1])) ? (arr_4 [i_1 - 2] [i_1 + 2]) : (arr_4 [i_1 - 2] [i_1 - 3])))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 + 2]))) : (0ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
            arr_12 [i_1 + 2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0LL))))), (arr_4 [i_1 + 1] [i_1 + 1])));
            arr_13 [i_1] [i_2] [(unsigned char)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((-1) / (-1201570080))) & (((/* implicit */int) (unsigned char)97))))) : (min((-8462977926015011770LL), (((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)-127)), ((unsigned char)193))))))));
            var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)65535)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1]))) : (arr_4 [i_1 - 2] [i_1 - 4])))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)11472)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_1] [(unsigned char)4])) : (((/* implicit */int) (_Bool)0)))))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_2))));
            var_24 &= ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)97))))));
        }
        var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) var_2)) : (arr_0 [i_1 - 3]))), (((/* implicit */int) var_9))));
    }
}

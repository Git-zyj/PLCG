/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3532
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_13))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)229)))) : (((unsigned int) var_19))))) ? (((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) & ((~(var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_22 *= (unsigned char)78;
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (220276549U) : (arr_2 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        var_24 *= ((/* implicit */unsigned char) max((((long long int) arr_3 [i_0])), (((/* implicit */long long int) var_17))));
        arr_4 [10LL] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)62))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1 + 1])) != (((/* implicit */int) var_12)))))));
        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1]))));
        arr_7 [i_1] = ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)117))) : (arr_6 [i_1 - 1]));
    }
    for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
    {
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) -8870901397506058904LL))));
        arr_12 [(unsigned char)4] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_15))));
        var_29 = ((unsigned char) (+(((((/* implicit */int) (unsigned char)229)) * (((/* implicit */int) (signed char)-54))))));
    }
    var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_5)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) > (-8386541071303039905LL)))))))));
}

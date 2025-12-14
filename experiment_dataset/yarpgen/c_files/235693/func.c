/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235693
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) var_4))))) ? (((var_15) ? (((/* implicit */long long int) var_12)) : (var_8))) : (((/* implicit */long long int) var_0))))) * (((((/* implicit */_Bool) min((var_14), (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_9)))))) : (var_2))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 -= ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) << (((var_1) - (1428539346)))))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_5)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max(((!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_9)))))), (((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))));
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_11))))) << (((min((var_6), (((/* implicit */long long int) arr_0 [11LL])))) + (1492437060227536842LL)))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((0LL) | (((/* implicit */long long int) max((-24), (((/* implicit */int) (signed char)29))))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-46)))))));
        var_21 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (max((((/* implicit */unsigned int) arr_0 [(signed char)4])), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */unsigned char) arr_4 [i_1] [i_1])))))))))));
    }
    for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) min(((~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) != (((/* implicit */int) var_4))))))), (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)76), (((/* implicit */unsigned char) (signed char)-42))))))))));
        var_22 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) arr_0 [i_2 + 3])))))));
        arr_9 [i_2 + 1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4)) || (((/* implicit */_Bool) (unsigned char)19)))) ? (((/* implicit */int) (unsigned char)9)) : (534578486)))) ? ((-(((((/* implicit */long long int) var_10)) + (arr_6 [i_2 - 1] [i_2 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2 + 3])) && (((/* implicit */_Bool) var_4))))))));
        var_23 = (!(((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_7 [i_2]))))));
    }
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) max((max((-9223372036854775801LL), (((/* implicit */long long int) (unsigned char)246)))), (max((((/* implicit */long long int) (signed char)-29)), (-1LL)))));
        arr_15 [i_3] = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_3 + 1] [i_3 - 1]))))), (max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)0))))));
    }
}

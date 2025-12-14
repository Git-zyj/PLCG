/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213902
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
    var_17 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (unsigned short)4826))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((min((max((((/* implicit */unsigned int) arr_2 [i_0])), (var_16))), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) max((arr_0 [(unsigned short)11]), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) arr_2 [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_2 [i_0])), (((int) ((arr_2 [0LL]) ? (var_9) : (((/* implicit */unsigned long long int) var_1)))))));
        var_19 = arr_0 [i_0];
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */int) var_9);
        arr_7 [i_1] = ((/* implicit */short) min((((arr_2 [i_1]) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((arr_5 [i_1] [i_1]) - (14031967494190686285ULL)))))) : (arr_5 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) != (arr_1 [i_1] [i_1]))))));
        arr_8 [(signed char)1] [i_1] = ((/* implicit */int) max((min(((~(arr_5 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((short) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)53)) < (((/* implicit */int) (unsigned short)65535)))))));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)52989))));
    }
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) ((var_10) | (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1)))) ? (((var_15) ? (617037740197249830ULL) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)25))))))))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)68)))) ^ (((((/* implicit */int) var_15)) + (((/* implicit */int) var_15))))))) | (max((var_1), (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) var_13)))))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53704)) ? (var_5) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((int) var_9)) : ((-(((/* implicit */int) (_Bool)1))))))));
}

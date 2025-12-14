/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198423
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8070928961037063699LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) arr_1 [12ULL])) ^ (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(arr_1 [i_0]))))))));
        var_11 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2305842940494217216ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_3) == (((/* implicit */long long int) min((arr_4 [i_1]), (((/* implicit */int) var_0))))))))) : (var_3)));
        arr_5 [(unsigned short)1] = ((/* implicit */unsigned int) ((unsigned short) 4912060311158998694LL));
    }
    /* LoopSeq 2 */
    for (unsigned int i_2 = 4; i_2 < 7; i_2 += 1) 
    {
        var_13 = ((/* implicit */long long int) var_5);
        arr_8 [(_Bool)1] [i_2] = ((/* implicit */unsigned char) (+(8070928961037063699LL)));
    }
    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) -8070928961037063700LL)) ? (((((/* implicit */_Bool) (unsigned short)24036)) ? (16140901133215334400ULL) : (((/* implicit */unsigned long long int) arr_11 [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        var_15 |= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50276))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3))), (((/* implicit */long long int) 789948833U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4912060311158998695LL)) ? (16140901133215334399ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (max((var_9), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((4912060311158998702LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_8))))) ? (max((var_1), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((var_3) >> (0U)))) ? (((((/* implicit */_Bool) (unsigned char)120)) ? (830273817883820786LL) : (var_1))) : (((/* implicit */long long int) var_6))))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_8))));
}

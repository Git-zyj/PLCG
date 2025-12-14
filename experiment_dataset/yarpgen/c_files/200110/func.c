/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200110
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
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11292875008060238958ULL)) ? (11292875008060238984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) == (((/* implicit */int) arr_1 [i_0 - 2])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (7153869065649312635ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)96)))))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_4)))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (arr_0 [i_0])))))) ? (((/* implicit */int) arr_3 [i_1] [14ULL])) : (((/* implicit */int) (unsigned short)7995)))))));
        }
        var_21 *= min((((((/* implicit */unsigned long long int) var_5)) | (((((/* implicit */_Bool) arr_1 [i_0])) ? (11292875008060238958ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))), (min((12881562348388057635ULL), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0])), (2147483644)))))));
    }
    for (unsigned char i_2 = 3; i_2 < 23; i_2 += 4) 
    {
        arr_9 [i_2 + 1] = ((/* implicit */unsigned char) (-((-(arr_7 [(unsigned char)18] [i_2 - 1])))));
        arr_10 [(_Bool)1] [i_2 - 2] = ((/* implicit */unsigned char) (~(min((((/* implicit */int) arr_8 [i_2] [i_2])), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)57541)) : (arr_7 [i_2] [i_2])))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) max(((unsigned short)0), ((unsigned short)35282)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)12556))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (13543844899593382847ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(var_11)))), (var_7)))))));
}

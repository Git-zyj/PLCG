/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195614
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (((/* implicit */long long int) ((2) & (872104453))))));
        arr_2 [i_0] = ((/* implicit */short) max((((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_0 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2974423585U)) ? (2949489744U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18338))))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_0 [(unsigned char)2]) : (arr_0 [(_Bool)1])));
        var_14 &= ((/* implicit */unsigned long long int) ((short) arr_0 [2LL]));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */short) (+((+(((/* implicit */int) arr_6 [i_2]))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((unsigned short)65504), (((/* implicit */unsigned short) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
        var_16 = ((/* implicit */short) arr_6 [i_3]);
    }
}

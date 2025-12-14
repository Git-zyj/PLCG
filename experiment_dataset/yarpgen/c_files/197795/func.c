/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197795
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
    var_12 ^= ((/* implicit */int) max((((var_7) ? (max((var_0), (((/* implicit */unsigned long long int) var_3)))) : (var_6))), (((/* implicit */unsigned long long int) (unsigned short)52842))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)12694))));
        arr_3 [(signed char)2] = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52842))) != (arr_0 [i_0]))) || (((/* implicit */_Bool) (unsigned char)226)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_0 [(signed char)7])))) ? (((/* implicit */long long int) ((int) arr_2 [i_0]))) : (-8787952124334445265LL)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52845)) ? (((/* implicit */int) (unsigned short)12696)) : (((/* implicit */int) (_Bool)1)))))))));
    }
}

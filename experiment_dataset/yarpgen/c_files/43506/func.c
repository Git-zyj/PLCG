/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43506
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
    var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((-(18446744073709551597ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 5509465076691033828ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)19696)) <= (((/* implicit */int) var_7))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [(_Bool)1] |= ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [i_0] [(unsigned short)6])))))));
        arr_3 [(unsigned short)2] |= ((/* implicit */unsigned short) ((max((((((/* implicit */int) (signed char)-99)) + (-1599648695))), (((/* implicit */int) var_5)))) << (((/* implicit */int) (_Bool)1))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200003
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)58758))))))) - (max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50535))) > (var_7)))), (((((/* implicit */_Bool) var_13)) ? (4066567055U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32740)))))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3)) / (((/* implicit */int) var_1))))) * (max((((/* implicit */long long int) (unsigned short)65535)), (var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15000))) : (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)15001), (((/* implicit */unsigned short) (signed char)-114)))))) : (15196257425796576516ULL)))));
                var_21 = ((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) arr_4 [(unsigned short)11]))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_13);
}

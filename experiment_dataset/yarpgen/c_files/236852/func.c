/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236852
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] |= var_6;
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((17ULL) >> (((3867411391461755902ULL) - (3867411391461755853ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_3)))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (18446744073709551592ULL))) >> (((((/* implicit */int) var_10)) - (42536)))))));
    }
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (3498948137018584437ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)48637)))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5818))) != (var_8))))) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) 3426335035966205572LL)))))) : (((/* implicit */unsigned long long int) var_0))));
    var_12 = ((/* implicit */short) ((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) var_0)) : (var_1))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) >> (((((/* implicit */int) (unsigned short)48637)) - (48633)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196048
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
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (unsigned char)217);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */int) var_13);
            var_18 = (unsigned short)63;
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(2147483647)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 854016520)) && (((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) 4194272)) : (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_0])))))) : (((2287828610704211968LL) - (((/* implicit */long long int) var_5))))))));
        }
    }
    var_19 = ((/* implicit */unsigned short) var_17);
    var_20 = ((/* implicit */unsigned long long int) var_1);
}

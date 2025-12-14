/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242024
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
    var_20 = ((/* implicit */unsigned long long int) (unsigned short)30404);
    var_21 = ((/* implicit */short) var_11);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (short)-1)) + (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_0 [i_0])))))));
        arr_3 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) << (((max((var_16), (((/* implicit */int) arr_0 [i_0])))) - (46690)))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (max((18014398509481968ULL), (((/* implicit */unsigned long long int) (unsigned short)35664))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) << (((((max((var_16), (((/* implicit */int) arr_0 [i_0])))) - (46690))) + (11356)))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (max((18014398509481968ULL), (((/* implicit */unsigned long long int) (unsigned short)35664)))))));
    }
}

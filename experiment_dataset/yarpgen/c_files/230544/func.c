/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230544
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [14] = ((/* implicit */unsigned int) 13743342822417639545ULL);
        var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) 1009955893617972129ULL)) ? (var_6) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        var_19 ^= ((/* implicit */int) 7076679820452269058ULL);
        var_20 = ((/* implicit */long long int) (unsigned char)0);
    }
    for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        var_21 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-18504))));
        arr_8 [i_2] [0ULL] = ((/* implicit */int) (+(((unsigned int) arr_4 [i_2 + 2] [i_2]))));
    }
    var_22 *= ((/* implicit */short) min((((/* implicit */unsigned int) var_11)), (27U)));
}

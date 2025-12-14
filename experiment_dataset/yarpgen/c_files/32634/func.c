/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32634
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_14 &= min((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) min((var_7), (arr_0 [(_Bool)1])))), (var_9))));
        var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (min((var_9), (var_10)))));
        arr_2 [3U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_11))))), (min((var_10), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [(unsigned short)1]), (((/* implicit */short) var_11)))))) : (min((2585024182U), (((/* implicit */unsigned int) (unsigned char)173))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_16 -= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16140))) / (arr_3 [i_1] [4U]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_6) : (((/* implicit */int) var_13)))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((unsigned long long int) var_6)))));
        var_18 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (2314149316922846865LL)));
        arr_6 [i_1] = ((/* implicit */_Bool) var_9);
        var_19 = (signed char)117;
    }
}

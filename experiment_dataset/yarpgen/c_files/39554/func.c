/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39554
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
    var_17 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_13)) ? (2832197114U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) == (var_5))) ? (max((((((/* implicit */_Bool) var_12)) ? (8687906558845647359LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) 536868864)))) : (((((/* implicit */long long int) ((/* implicit */int) var_13))) & (min((-8687906558845647373LL), (((/* implicit */long long int) var_16))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = (~(((((/* implicit */long long int) (~(2832197101U)))) & (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (8687906558845647358LL))))));
        var_18 = ((/* implicit */long long int) ((min((max((((/* implicit */unsigned long long int) -8687906558845647369LL)), (12794997537520950284ULL))), (((/* implicit */unsigned long long int) (short)4)))) == (min((((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)10])) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) (~(-8687906558845647349LL))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 4; i_1 < 10; i_1 += 1) 
    {
        var_19 = ((((/* implicit */_Bool) (-(arr_7 [i_1])))) ? ((-(arr_3 [10]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (2832197099U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241)))))));
        var_20 = ((/* implicit */signed char) (-(var_11)));
    }
    for (long long int i_2 = 3; i_2 < 21; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) arr_9 [i_2]);
        arr_12 [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned long long int) arr_9 [(unsigned short)0]);
    }
}

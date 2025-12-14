/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4202
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
    var_16 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) 16186512204551682970ULL);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (short)-17602))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (max(((~(arr_3 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)13)) << (((arr_3 [i_1]) - (12605615320728492694ULL)))))))) : (((((/* implicit */_Bool) min((arr_3 [i_1]), (1352008777266957126ULL)))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((arr_3 [i_1]) - (12605615320728492704ULL))))))))));
        var_20 = ((/* implicit */int) max((3635804372730852564LL), (((/* implicit */long long int) (short)-6750))));
        var_21 = ((/* implicit */_Bool) ((unsigned int) ((-1995569890) >= (0))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205634
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((288195191779622912LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((arr_0 [i_0] [i_0]) ? (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0])), ((short)-1)))) : (((/* implicit */int) arr_0 [i_0] [i_0])))) + (2147483647))) >> (((((unsigned long long int) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26))) : (arr_2 [i_0])))) - (18446744073709551585ULL)))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_2 [i_0]))))) : (max((arr_1 [i_0]), (arr_1 [i_0]))))), (min((arr_2 [i_0]), (((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0]))))))))));
        arr_6 [i_0] = ((/* implicit */int) ((min((arr_2 [i_0]), (((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26))) : (7220453290844693730ULL))))) % ((+(min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)20606))))))));
    }
    var_17 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_5)) : (7220453290844693730ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26))))), (((/* implicit */unsigned long long int) var_7))));
}

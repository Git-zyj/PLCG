/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205844
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((+(max((2531628008098679983ULL), (((/* implicit */unsigned long long int) (signed char)99)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))))));
        var_15 = ((/* implicit */unsigned int) ((((((var_2) >= (((/* implicit */long long int) ((/* implicit */int) (short)-11646))))) ? ((+(5878241447872407941ULL))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (7651926760335196105ULL))))) > (max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0])), (var_3)))));
    }
    var_16 = ((/* implicit */unsigned int) min((var_16), (3089227583U)));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (short)11631))) & (4846021830237264928LL))), (((/* implicit */long long int) var_0))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 12568502625837143674ULL)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (unsigned short)48074))))), ((+(var_6))))) : (var_1)));
}

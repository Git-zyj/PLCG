/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229119
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
    var_11 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((max((((/* implicit */unsigned long long int) var_8)), (14463820366874286997ULL))) - (((/* implicit */unsigned long long int) ((long long int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (short)0)) : (arr_2 [i_0])))) - (max((((/* implicit */unsigned long long int) 566391711780803058LL)), ((+(18446744073709551611ULL)))))));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 566391711780803059LL)) || (((/* implicit */_Bool) var_3)))))) : (max((((/* implicit */long long int) arr_1 [i_0])), (arr_3 [i_0])))));
                var_14 = (-(98059243301581924ULL));
            }
        } 
    } 
}

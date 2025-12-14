/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231171
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) max((var_12), (((((/* implicit */long long int) ((((/* implicit */int) (signed char)-32)) & (((/* implicit */int) (signed char)-32))))) | (((arr_2 [i_0]) | (((/* implicit */long long int) var_9))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((-2514683265541182072LL) % (var_8))) != (((/* implicit */long long int) var_5)))))) <= (-7622839499216506393LL)));
        arr_6 [i_0] [(signed char)7] = ((/* implicit */unsigned int) min(((unsigned short)20933), (((/* implicit */unsigned short) (short)21989))));
    }
    var_13 = ((/* implicit */short) (-(var_8)));
}

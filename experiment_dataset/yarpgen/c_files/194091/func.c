/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194091
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((unsigned int) arr_0 [i_0 - 2] [i_0 - 2])))));
        arr_2 [i_0] [(unsigned short)7] = ((/* implicit */unsigned short) ((arr_0 [i_0 + 1] [i_0 - 2]) > (arr_1 [11LL])));
    }
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((134217727LL) < (((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (var_14)))))) && (((/* implicit */_Bool) (-((-(((/* implicit */int) var_1)))))))));
        arr_5 [i_1] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) -83842425)) & (3236879447U))));
    }
    var_17 = ((/* implicit */unsigned short) (-(((min((var_14), (((/* implicit */int) var_6)))) - (((/* implicit */int) var_11))))));
    var_18 |= ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26563))) & (2423045356U))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) -228362402)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26563))) : (968221462U)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190406
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
    var_14 = ((/* implicit */long long int) var_13);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_15 -= ((/* implicit */unsigned int) min((min((((arr_2 [i_0]) & (((/* implicit */long long int) arr_0 [i_0])))), (min((((/* implicit */long long int) arr_0 [i_0])), (arr_2 [5ULL]))))), (max((((/* implicit */long long int) arr_1 [i_0 + 3])), (max((arr_2 [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))))));
        var_16 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0])), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_2 [i_0 - 1])))));
    }
    var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (((max((var_0), (var_0))) % (((/* implicit */unsigned int) ((var_12) >> (((var_3) - (2951644593U))))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) var_9)) ^ (var_10))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (var_5)))))))) ^ (((/* implicit */int) ((((0U) == (((/* implicit */unsigned int) -1211498981)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_2)))))))));
}

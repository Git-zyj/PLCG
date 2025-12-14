/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234147
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
    var_10 = ((/* implicit */unsigned int) 18446744073709551595ULL);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0 - 4] = ((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10780895943818665686ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0 - 2]))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (16904276992224680063ULL))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 3])))))) ? (max((16904276992224680062ULL), (((/* implicit */unsigned long long int) -1712724729750417026LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 3])) + (((/* implicit */int) arr_0 [i_0 + 1])))))));
    }
    var_11 = ((/* implicit */_Bool) max((var_6), ((((!(((/* implicit */_Bool) (short)-32737)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29740))) : (min((16904276992224680051ULL), (16904276992224680062ULL)))))));
}

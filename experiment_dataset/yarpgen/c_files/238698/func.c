/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238698
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = max(((-((~(0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-19046)) == (((/* implicit */int) (signed char)28))))));
        arr_4 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((var_8) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0])))))));
    }
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)56)) >> (((((/* implicit */int) var_2)) - (159)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((((/* implicit */_Bool) -257558222)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) != (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_8)))))))));
}

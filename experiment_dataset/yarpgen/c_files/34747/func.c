/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34747
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [(unsigned char)11]))))) != (((18446744073709551615ULL) | (13822389523993263986ULL))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) arr_0 [i_0])))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (arr_0 [16ULL])))) && (((/* implicit */_Bool) max((14601408987604401301ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))))));
    }
    var_13 += ((/* implicit */long long int) 1265911383U);
}

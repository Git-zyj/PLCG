/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212901
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((-1LL) + (12LL))))))));
    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))), (var_4)));
    var_14 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) (_Bool)1);
        var_16 = ((/* implicit */short) min(((-(((/* implicit */int) (signed char)50)))), ((-(((/* implicit */int) (!((_Bool)0))))))));
        var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) (signed char)46))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_3 [i_1]) <= (arr_3 [i_1])))), (min((arr_3 [i_1]), (arr_3 [i_1])))));
        var_19 = ((/* implicit */unsigned long long int) min((max((arr_4 [i_1]), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32762))) > (14ULL))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218343
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
    var_19 = ((/* implicit */short) ((unsigned long long int) var_11));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((17592186028032ULL) < (((/* implicit */unsigned long long int) ((long long int) (unsigned short)48227))))))) | (min((((unsigned long long int) arr_0 [i_0])), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0])), (var_14))))))));
        var_21 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
    }
    var_22 = (-(((/* implicit */int) var_13)));
    var_23 = ((/* implicit */short) max((max((((/* implicit */long long int) var_4)), (var_0))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)150)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181)))))))))));
    var_24 = ((/* implicit */unsigned char) var_4);
}

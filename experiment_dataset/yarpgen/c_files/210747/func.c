/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210747
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
    var_20 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31392)) ? (1264837900U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) : (((((/* implicit */_Bool) 2047ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12898))) : (arr_0 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+((~(arr_0 [i_0 - 4])))));
        var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)159)), (15546777664867576527ULL)));
    }
    var_22 = ((/* implicit */int) (((_Bool)1) || (var_3)));
}

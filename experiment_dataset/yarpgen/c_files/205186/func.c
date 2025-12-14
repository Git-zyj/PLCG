/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205186
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((((/* implicit */_Bool) (signed char)60)) ? (min((((((/* implicit */_Bool) 6445503977720176835ULL)) ? (7679745528222402543ULL) : (7679745528222402543ULL))), (12001240095989374777ULL))) : (((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (10766998545487149092ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5110))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 2])) >> (((((/* implicit */int) arr_2 [i_0 + 1])) - (64974)))))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_2))));
    }
    var_20 &= ((/* implicit */short) var_3);
    var_21 &= ((/* implicit */unsigned short) 10766998545487149072ULL);
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 12001240095989374775ULL))) ? (31U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
}

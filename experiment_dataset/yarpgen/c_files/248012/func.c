/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248012
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
    var_19 = ((/* implicit */int) (+(((long long int) min((((/* implicit */unsigned long long int) 4029529877U)), (18446744073709551615ULL))))));
    var_20 = ((/* implicit */signed char) var_10);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((max((((/* implicit */unsigned long long int) (signed char)1)), (7ULL))) | (((/* implicit */unsigned long long int) 2147483647))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) min((2023342085997581292ULL), (((/* implicit */unsigned long long int) (signed char)-45)))))), (((int) ((signed char) var_16)))));
        arr_4 [i_0] = ((((/* implicit */_Bool) (signed char)4)) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (unsigned short)65535)));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224596
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
    var_13 = ((/* implicit */signed char) ((short) var_8));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1538492064)) ? (max((18005602416459776ULL), (134217600ULL))) : (((/* implicit */unsigned long long int) 3104296207U))));
        arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (-7471149779503551426LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0])))))))))));
        var_15 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)8)), (18005602416459775ULL)));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 18005602416459775ULL))))) != (((/* implicit */int) arr_0 [15ULL] [i_1]))));
        arr_8 [i_1] = ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18428738471293091840ULL))))) : (((/* implicit */int) arr_1 [(_Bool)1] [(unsigned short)0])));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 3])) ? (((/* implicit */int) arr_5 [i_1 + 4])) : (((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2]))));
    }
}

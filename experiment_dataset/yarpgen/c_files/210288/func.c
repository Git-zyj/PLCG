/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210288
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57271)) ^ (((/* implicit */int) (unsigned short)57271))));
        arr_3 [(unsigned short)9] [i_0] = ((/* implicit */int) (!(var_2)));
        var_14 &= ((/* implicit */unsigned char) var_8);
    }
    var_15 = ((/* implicit */long long int) max((var_15), (((576460752303423487LL) / (((/* implicit */long long int) (+(((((/* implicit */_Bool) 1855465404759197983LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)57272)))))))))));
}

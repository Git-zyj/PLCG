/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22820
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [(signed char)15] = ((/* implicit */signed char) (+(((long long int) max((var_5), (((/* implicit */unsigned int) (_Bool)1)))))));
        var_17 = ((/* implicit */signed char) ((long long int) ((arr_0 [i_0] [i_0 + 1]) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1])))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_5 [(_Bool)1] [(_Bool)1] = arr_4 [(unsigned char)12];
        arr_6 [14LL] [15LL] = ((/* implicit */long long int) (signed char)-25);
        var_18 = ((/* implicit */_Bool) var_5);
    }
    var_19 = ((/* implicit */signed char) (_Bool)1);
}

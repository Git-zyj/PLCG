/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34308
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [(unsigned char)0] = ((/* implicit */unsigned long long int) (+((~(arr_1 [i_0] [i_0])))));
        var_20 = ((/* implicit */unsigned char) var_14);
    }
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((var_18) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4))))))), (max(((-(12173465669628260176ULL))), (((/* implicit */unsigned long long int) var_4))))));
}

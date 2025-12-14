/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26127
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_13))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) min((((long long int) (_Bool)0)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (arr_0 [i_0]))))));
        arr_3 [8U] = ((/* implicit */long long int) (_Bool)0);
    }
    for (short i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        var_21 = ((/* implicit */short) 72057559678189568ULL);
        var_22 = (-(arr_4 [i_1 + 1]));
    }
    var_23 = var_9;
}

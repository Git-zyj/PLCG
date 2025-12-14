/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2940
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
    var_20 = ((/* implicit */unsigned int) var_11);
    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_22 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (((var_11) | (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) var_1)));
        arr_4 [i_0] = ((/* implicit */unsigned char) (~((((_Bool)1) ? (8022414222116955527ULL) : (((/* implicit */unsigned long long int) 3398905765808786914LL))))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_9);
}

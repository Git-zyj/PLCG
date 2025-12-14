/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33995
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
    var_11 = ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (6972525111684347465LL)))) ? (var_8) : (((/* implicit */unsigned long long int) ((5435641096607071402LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_1 [i_0 - 3]))))) < ((+(min((var_0), (((/* implicit */unsigned long long int) var_9))))))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (min((((/* implicit */long long int) arr_0 [i_1 + 1])), (8272623899231210606LL)))));
                var_14 = ((/* implicit */long long int) var_10);
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_9)) & (((((/* implicit */_Bool) ((long long int) 2505556502677875876LL))) ? (((/* implicit */unsigned long long int) 2505556502677875858LL)) : ((+(var_8)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200358
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned char)144);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_12 [i_1] = ((/* implicit */signed char) max((min((var_15), (((/* implicit */long long int) var_12)))), (var_15)));
                    arr_13 [10LL] [i_1] [i_0] [10LL] &= ((/* implicit */int) min(((unsigned short)10688), (((/* implicit */unsigned short) min(((unsigned char)120), (((/* implicit */unsigned char) var_4)))))));
                }
            } 
        } 
    }
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((var_16), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (8853145834225025487ULL))));
}

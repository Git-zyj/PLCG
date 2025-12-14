/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41645
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) arr_1 [i_0]);
                    var_12 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 19LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [6]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((-5466829674497945146LL), (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) >> (((11631602196292032255ULL) - (11631602196292032236ULL)))))) <= (max((((/* implicit */unsigned long long int) var_1)), (arr_6 [i_0] [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
    var_13 = var_5;
    var_14 = ((/* implicit */unsigned long long int) var_3);
    var_15 &= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_9)), (var_4)));
}

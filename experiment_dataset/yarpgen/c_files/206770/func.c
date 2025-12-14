/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206770
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
    var_19 = ((/* implicit */unsigned int) var_9);
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (+(var_13))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [(unsigned short)8] [(unsigned short)8] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_3 [14ULL] = ((/* implicit */signed char) var_18);
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)-72)))), (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 759140672))) || (((/* implicit */_Bool) var_11)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) | (((var_11) ^ (var_17)))))));
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_15))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228415
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (((+(((/* implicit */int) var_12)))) << ((((+(((unsigned int) var_3)))) - (2907783694U))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_16 |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-32)), (1774893855U)))) ? (((/* implicit */int) min((var_1), (arr_1 [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0] [i_0])))))), ((~((-(((/* implicit */int) (unsigned char)7))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((((((/* implicit */_Bool) ((signed char) 571957152676052992ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (unsigned char)245))))) : ((~(var_4))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned char)192)))), (((/* implicit */int) (unsigned char)255)))))))));
    }
}

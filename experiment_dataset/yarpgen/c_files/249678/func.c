/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249678
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
    var_10 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((short) (+(arr_1 [i_0]))))), (((long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))))));
        var_11 = (unsigned short)50605;
    }
    var_12 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (7018292948271462620LL))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5)))))));
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (var_3) : (((/* implicit */unsigned int) 285087377))))) ? (-3660487543796335378LL) : (((/* implicit */long long int) var_2)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189874
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((5655508249027681129LL) % (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
        arr_3 [i_0 + 2] = ((/* implicit */_Bool) arr_1 [10] [i_0 - 1]);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-72)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (5655508249027681129LL)));
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
    }
    var_17 = ((/* implicit */_Bool) (~(8883025481228028183ULL)));
    var_18 = ((/* implicit */_Bool) ((var_0) >> (((((/* implicit */int) (signed char)-1)) + (5)))));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_13)), (max(((+(5655508249027681125LL))), (((/* implicit */long long int) var_7))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236795
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] &= (-(var_7));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3)))))) && (((/* implicit */_Bool) ((signed char) var_4))))) ? (((/* implicit */int) var_3)) : (max((((/* implicit */int) ((arr_2 [i_0] [(signed char)5]) < (((/* implicit */unsigned long long int) var_0))))), ((-(((/* implicit */int) (signed char)(-127 - 1)))))))));
    }
    var_10 += ((/* implicit */signed char) var_5);
}

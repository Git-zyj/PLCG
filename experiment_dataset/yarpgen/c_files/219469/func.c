/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219469
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_4 [8U] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) ((arr_1 [i_0 + 1]) << (((((/* implicit */int) arr_0 [i_0])) - (33647)))))));
        arr_5 [i_0 - 2] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-98)) + (2147483647))) >> (14ULL)));
        arr_6 [i_0] [(unsigned char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 2])) <= (((/* implicit */int) arr_2 [i_0 - 2] [(short)9]))))) : (((/* implicit */int) min(((signed char)-98), ((signed char)24))))));
    }
    var_11 = ((/* implicit */unsigned long long int) var_3);
    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-24)) == (((/* implicit */int) max(((signed char)-20), ((signed char)23))))))), (var_1)));
}

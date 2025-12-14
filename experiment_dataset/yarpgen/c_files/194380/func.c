/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194380
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) ((unsigned long long int) ((int) ((((/* implicit */int) (signed char)-93)) + (1574448344)))));
                arr_5 [i_1] [i_0] = ((unsigned long long int) (-(((/* implicit */int) min((var_10), ((signed char)-81))))));
                arr_6 [i_0] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) -1144391590)), (((arr_3 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (14019040816587213419ULL))) : (((/* implicit */unsigned long long int) var_5))));
}

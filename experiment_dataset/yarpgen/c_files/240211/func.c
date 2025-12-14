/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240211
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
    var_10 -= ((/* implicit */unsigned char) min((-150391968434538506LL), (-150391968434538506LL)));
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-39)) ? (-3855673738717888123LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
    var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((331943910025777186LL) ^ (var_7)))) ? (max((4811984106238521244LL), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)18505)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) ((arr_9 [i_0]) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) var_6))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15429792694010132263ULL)) ? (-331943910025777186LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-58)))));
                    var_14 = max((((/* implicit */long long int) var_2)), (331943910025777180LL));
                }
            } 
        } 
    } 
}

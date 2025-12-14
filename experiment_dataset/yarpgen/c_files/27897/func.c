/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27897
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
    var_14 = ((/* implicit */int) 9U);
    var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)19))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38598))) : (var_10))), ((+(4899247609157802262ULL)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) 4294967293U))))));
                    arr_9 [i_0] [i_2] = max((((/* implicit */unsigned long long int) (+(min((2U), (((/* implicit */unsigned int) var_13))))))), (max((arr_5 [i_0] [i_1] [i_2] [i_0]), (arr_5 [i_2] [i_2] [i_1] [i_0]))));
                }
            } 
        } 
    } 
}

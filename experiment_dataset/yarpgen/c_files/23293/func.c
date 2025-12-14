/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23293
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
    var_11 &= var_2;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1 - 1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [1])) && (((/* implicit */_Bool) arr_1 [i_1 + 1])))) && (((/* implicit */_Bool) var_1))));
                arr_5 [i_1] [i_0] [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)0) ? (1552420545) : (((/* implicit */int) (_Bool)1)))))));
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (+(3350445607U))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max(((signed char)-11), (((/* implicit */signed char) var_10))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)34))))))));
}

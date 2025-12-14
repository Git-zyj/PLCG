/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214579
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [17ULL] [i_1] [10LL] = ((/* implicit */short) var_2);
                    arr_10 [i_1] [i_0] [i_2] [i_1] = ((/* implicit */int) max((max((var_3), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)16322)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_8);
    var_13 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned int) var_9))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)62)) * (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)76)), (-1)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_0)) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    var_14 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)33213)) >= (((/* implicit */int) (signed char)-62))));
}

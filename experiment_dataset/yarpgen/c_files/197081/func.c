/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197081
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_10)) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) var_4)) ? (-2121552709184986930LL) : (((/* implicit */long long int) var_10))))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) > (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 3791590589U)) : (3152038452342961075ULL)))))))));
                arr_6 [12ULL] [i_1] [i_0] = ((/* implicit */unsigned char) (unsigned short)12);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_4))));
}

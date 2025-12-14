/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54522
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))) : (511916089258498513ULL)))) || (((/* implicit */_Bool) 17934827984451053112ULL)))) ? (max((((((/* implicit */_Bool) 17934827984451053112ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (1891171857991354116LL))), (((/* implicit */long long int) (unsigned char)113)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1])))));
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (short)21239))));
                }
            } 
        } 
    } 
    var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_6) : (min((((/* implicit */long long int) var_5)), (var_6)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249812
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
    var_10 -= ((/* implicit */short) max((var_9), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (var_9)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 3178878106656040751ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3178878106656040751ULL)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3)))));
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [(unsigned char)0] [i_0])) ? (max((((/* implicit */int) ((var_3) < (var_3)))), ((~(((/* implicit */int) arr_1 [i_0])))))) : (-1))))));
            }
        } 
    } 
}

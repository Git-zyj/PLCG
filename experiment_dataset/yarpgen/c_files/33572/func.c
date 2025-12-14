/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33572
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
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((511ULL), (((/* implicit */unsigned long long int) 2470775489U)))) >> (((var_5) - (3427512852U)))))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) != (7588203883586242664ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 3]))) : (arr_1 [i_0 - 2] [i_1]))))));
                var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)20] [2U]))) ^ (861921715U)))) / (4313212364679756818ULL)))) && (((/* implicit */_Bool) var_2))));
            }
        } 
    } 
    var_12 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((short) (short)-26719))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)234)), (290833985U)))) : (((((/* implicit */_Bool) 0U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_4)))))));
}

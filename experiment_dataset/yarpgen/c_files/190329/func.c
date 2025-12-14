/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190329
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((9717018486322131473ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31483))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))))))));
                var_16 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [14ULL] [i_1] [i_1])), (var_13)))) ? (((/* implicit */int) min((var_2), (((/* implicit */short) (unsigned char)177))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [12U] [i_1])) != (((/* implicit */int) var_13))))))), (((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_12)))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((max((((/* implicit */int) var_11)), (var_3))), (((/* implicit */int) ((_Bool) var_12)))));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4249553607U)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) ((((/* implicit */int) (short)-1495)) == (var_3)))))))));
}

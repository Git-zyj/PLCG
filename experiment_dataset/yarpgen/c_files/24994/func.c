/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24994
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
    var_14 = ((/* implicit */int) var_8);
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (max((8488181935539803083ULL), (var_2)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = 11519632278380458271ULL;
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((int) arr_2 [i_0] [i_1 - 1])), (((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((int) 0ULL)) : (((((/* implicit */_Bool) 17911187315804047928ULL)) ? (1101852134) : (-1963275955))))))))));
                var_17 = max((((int) ((unsigned long long int) var_5))), (min((1926548261), (-563340033))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((int) 1963275964)))));
}

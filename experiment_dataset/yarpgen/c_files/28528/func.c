/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28528
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_15))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)38570)), (1667854310U)))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)16])))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))) | (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)7)) << (((((/* implicit */int) arr_4 [1LL])) - (15549)))))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)13033))))) != (((unsigned int) var_16))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (var_17)));
}

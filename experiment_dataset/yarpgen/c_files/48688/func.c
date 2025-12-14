/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48688
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
    var_12 ^= ((/* implicit */long long int) var_11);
    var_13 = ((/* implicit */_Bool) ((signed char) min((var_4), (max((((/* implicit */unsigned long long int) 3293679932U)), (var_4))))));
    var_14 = ((/* implicit */unsigned long long int) ((3293679932U) - (3433829033U)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))) - ((+(((/* implicit */int) (unsigned short)26562)))))));
                var_15 *= ((/* implicit */unsigned char) arr_3 [7U]);
                var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) arr_0 [i_0] [i_0]))), (((((((/* implicit */_Bool) -1936505306)) || (((/* implicit */_Bool) 2731503271U)))) ? (arr_3 [i_0]) : (min((((/* implicit */unsigned int) var_10)), (1563464025U)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) (_Bool)0);
}

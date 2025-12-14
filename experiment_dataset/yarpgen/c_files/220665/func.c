/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220665
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */unsigned short) ((min(((~(var_4))), (((((/* implicit */long long int) arr_1 [i_1 - 1])) & (arr_3 [i_0 - 1] [i_0 - 1]))))) ^ (arr_3 [i_1 - 2] [i_0])));
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_0 [i_0 - 2]))))) : ((+(arr_3 [i_0] [i_1])))))) ? (var_16) : (((/* implicit */int) arr_4 [i_0 - 1])));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((-16017872698571562LL), (((/* implicit */long long int) var_3))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)57909)), (-866245473)))) ? (((var_16) / (((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))) : (((/* implicit */int) var_0))));
    var_19 += ((/* implicit */unsigned short) min((((((/* implicit */int) var_6)) * (((/* implicit */int) var_8)))), (min((((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)57915)))), (((/* implicit */int) (short)-1))))));
    var_20 = ((/* implicit */short) var_5);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192212
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [18] = ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_1 [i_0]))))) & (((/* implicit */int) max((arr_0 [i_0] [i_0]), ((signed char)103)))));
        var_18 = ((/* implicit */long long int) (~((((-2147483647 - 1)) & (((/* implicit */int) var_0))))));
        var_19 = (~(((/* implicit */int) arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) var_6);
        arr_6 [i_1] = (-(var_4));
        var_21 -= ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (signed char)103)))));
    }
    var_22 = ((/* implicit */unsigned int) var_9);
    var_23 = ((/* implicit */int) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)79))))), (((2840660581U) >> (((var_15) - (1894365306))))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (signed char)-88)), (var_0)))) > (((/* implicit */int) ((signed char) var_8)))))))));
}

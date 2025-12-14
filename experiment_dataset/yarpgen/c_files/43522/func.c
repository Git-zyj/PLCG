/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43522
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
    var_16 = ((/* implicit */unsigned char) var_3);
    var_17 = ((/* implicit */int) (signed char)0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_15) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) <= (var_8)))));
        var_20 = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) == (895471459625382207LL)));
        arr_3 [i_0] [10ULL] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_4)))) || (((/* implicit */_Bool) ((var_7) + (var_7)))))))) * (((((/* implicit */unsigned long long int) (-(-756357890)))) * (3728591139041287742ULL)))));
        arr_8 [i_1] = ((/* implicit */int) max((((/* implicit */long long int) ((((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 1])))))), (var_7)));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_10) + (2147483647))) >> ((((~(var_15))) - (17393745550879892327ULL)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */int) (signed char)100)) == (((/* implicit */int) var_2))))))) : (((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_1)))) | ((~(((/* implicit */int) (short)1303))))))));
}

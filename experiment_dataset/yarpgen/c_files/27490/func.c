/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27490
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
    var_18 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) (((+(((/* implicit */int) var_3)))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_1 [i_0] [i_0])))) - (202)))))) : (((/* implicit */long long int) (((+(((/* implicit */int) var_3)))) >> (((((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_1 [i_0] [i_0])))) - (202))) + (146))))));
        var_19 = ((/* implicit */unsigned long long int) var_2);
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)4192)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16573)) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) (short)4921))))))) && (((/* implicit */_Bool) (signed char)-4)))))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_1))));
}

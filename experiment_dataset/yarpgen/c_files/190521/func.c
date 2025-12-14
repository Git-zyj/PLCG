/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190521
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)177)))) <= (((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned char)177))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) (-(min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))), (1096712696155303271LL)))));
        arr_7 [i_1] = ((/* implicit */short) ((((arr_1 [i_1] [i_1]) << (((((/* implicit */int) arr_5 [i_1])) - (16834))))) >> (((((/* implicit */int) (unsigned char)78)) - (47)))));
        var_16 = (~(((((/* implicit */_Bool) ((short) var_14))) ? (((/* implicit */int) min(((unsigned char)183), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) min(((unsigned char)79), ((unsigned char)177)))))));
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_2)))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (3221225472U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned char)157)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 456212176)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))) : (4142560323U))))))));
    var_18 = ((/* implicit */_Bool) var_0);
}

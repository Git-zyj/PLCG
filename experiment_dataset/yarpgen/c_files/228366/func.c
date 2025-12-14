/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228366
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)145))))))) ? (((/* implicit */int) ((unsigned char) 333697700U))) : ((+((+(((/* implicit */int) (unsigned char)126))))))));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) 4294967272U)), (13039859364466267063ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19298)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)191))))) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (max((((/* implicit */int) (unsigned char)41)), (1895298005))))))));
        arr_3 [i_0] = ((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)16775))))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)107)))))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_15 = ((/* implicit */_Bool) arr_4 [i_1]);
        var_16 = ((/* implicit */short) ((unsigned char) max((((/* implicit */long long int) ((var_2) <= (var_3)))), (8346296967977846436LL))));
        arr_6 [i_1] [i_1] = ((((((((/* implicit */unsigned int) var_0)) ^ (333697721U))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))) ? (((16398058945235282686ULL) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)69))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)25)) >= (((/* implicit */int) (unsigned char)56))))))));
        var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) max((arr_5 [i_1]), (((/* implicit */unsigned long long int) -3200442138460571587LL))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)19298)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) 7209393811985428014ULL)))))))));
    }
}

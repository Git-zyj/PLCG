/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3965
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) min((var_2), (var_9)))), (arr_0 [i_0]))))) / (((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned long long int) var_3))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))))))));
        var_13 -= ((/* implicit */long long int) (_Bool)0);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15103))) : (arr_4 [i_1] [i_1]))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10381)))))));
        var_15 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) != (((/* implicit */int) var_9)))))) <= (((arr_3 [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_3 [i_1] [i_1])))) || (((/* implicit */_Bool) arr_5 [i_1])))))));
        var_16 += ((/* implicit */long long int) ((((/* implicit */long long int) ((3895746995U) - (arr_4 [i_1] [i_1])))) < (((max((((/* implicit */long long int) arr_4 [i_1] [i_1])), (arr_3 [i_1] [i_1]))) - (((/* implicit */long long int) ((unsigned int) var_2)))))));
    }
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)37721)), (((((/* implicit */_Bool) (~(var_8)))) ? (min((477021446U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))))));
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (-1372766261)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (2211447378790895304LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (var_1))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 477021447U)) ? (-669400150) : (-2062274011)))) : (((7610091079781265731LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11)))))))) : (((unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_2)))))));
}

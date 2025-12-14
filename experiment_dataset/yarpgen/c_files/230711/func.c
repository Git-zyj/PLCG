/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230711
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4887626310966034638LL), (((/* implicit */long long int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((181102241450780023LL), (arr_0 [i_0] [i_0])))))), ((-(min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_5))))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_10), (((/* implicit */short) var_5)))))))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) -181102241450780022LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3508118923U)) ? (181102241450780025LL) : (((/* implicit */long long int) min((4294967279U), (((/* implicit */unsigned int) (unsigned short)5)))))))))))));
        var_17 -= ((/* implicit */unsigned short) ((((arr_1 [i_0]) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))) > (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (4887626310966034652LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ^ (arr_1 [i_0])))));
    }
    var_18 = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) var_6)))))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) var_14))) / (2358531133039845512LL))))) : (((/* implicit */long long int) ((/* implicit */int) (((~(var_1))) == (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (var_5)))))))))));
    var_19 = ((/* implicit */unsigned int) min((var_19), (max((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) 63U))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) var_2))))))))));
}

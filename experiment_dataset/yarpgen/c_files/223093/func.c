/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223093
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) : (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-124)))))) : ((~(108086391056891904LL)))))));
                var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((long long int) arr_2 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))), (((/* implicit */int) var_5))));
                var_15 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) && (((/* implicit */_Bool) -5217122250568160943LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : ((+(-9058915171039811767LL))))), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_1))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [4LL]))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) ((((/* implicit */int) (signed char)122)) >> (((((/* implicit */int) var_3)) - (59619))))))))) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)24)))) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned short)28885))))))));
    var_17 = var_11;
}

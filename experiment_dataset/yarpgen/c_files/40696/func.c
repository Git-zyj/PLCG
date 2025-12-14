/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40696
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) arr_2 [i_0])) : (min((((/* implicit */int) var_5)), (0)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) (signed char)99))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_0])) : (402613103)))));
    }
    var_12 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)29815))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min(((unsigned short)35721), (((/* implicit */unsigned short) (unsigned char)85))))))) + (2147483647))) >> (((min((((/* implicit */unsigned long long int) (unsigned short)21752)), (var_9))) - (21744ULL)))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */short) (_Bool)1))))) ? (min((3701207447U), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209)))))) ? (((((/* implicit */int) (unsigned char)209)) - (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)172)))))));
    var_14 = ((((/* implicit */_Bool) 4023067564545776319LL)) ? (min((((((/* implicit */int) var_10)) << (((var_3) + (8187258280063195308LL))))), (((/* implicit */int) ((short) var_6))))) : (min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_3)) ? (0) : (((/* implicit */int) var_6)))))));
    var_15 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(-4023067564545776319LL)))) ? (min((var_9), (((/* implicit */unsigned long long int) (unsigned short)35711)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)19200))))))) >> (((((((/* implicit */_Bool) ((int) var_10))) ? (var_4) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)43))))))) - (11264365924317795724ULL)))));
}

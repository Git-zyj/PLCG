/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241729
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (arr_1 [10LL]) : (arr_2 [i_0] [i_0]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31423)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (unsigned char)230)))))))) ? (max((var_10), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)230))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        arr_4 [i_0] [i_0] &= ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)26)), (1764500871078894404LL)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = min((((/* implicit */long long int) ((-4102208250596393057LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26)))))), (min((((/* implicit */long long int) var_8)), (arr_2 [i_1] [i_1]))));
        var_11 = ((/* implicit */unsigned char) var_6);
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)31361))))) ? (((((((/* implicit */int) arr_6 [(_Bool)0])) != (((/* implicit */int) (unsigned char)230)))) ? (4050818037U) : (((/* implicit */unsigned int) ((/* implicit */int) ((1764500871078894404LL) > (arr_1 [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8))) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)84))))))))))));
        arr_9 [i_1] = ((/* implicit */signed char) arr_5 [i_1]);
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (((((/* implicit */_Bool) arr_1 [i_1])) ? ((-(arr_2 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) var_8)))))))))))));
    }
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
    var_15 &= ((/* implicit */unsigned char) var_8);
    var_16 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (((long long int) (signed char)-95))))));
}

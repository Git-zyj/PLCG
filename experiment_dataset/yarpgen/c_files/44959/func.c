/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44959
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((min(((~(arr_0 [i_0]))), (((/* implicit */unsigned long long int) -592213138154085477LL)))), (arr_0 [i_0]))))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)31))))) ? (((/* implicit */unsigned long long int) min((592213138154085475LL), (((/* implicit */long long int) (unsigned char)254))))) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)30)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((short) max((arr_0 [i_1]), (arr_0 [i_1])))))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
        var_19 = ((/* implicit */short) min((-6913749496769139629LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)225)))))));
    }
    var_20 = ((/* implicit */long long int) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_12) : (var_10)))) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (short)19932))))));
    var_21 = ((((/* implicit */_Bool) (((_Bool)1) ? (((int) (unsigned char)249)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_3))))) : (max((var_2), (var_0))))));
}

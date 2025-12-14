/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195737
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
    var_17 = ((/* implicit */int) (-(var_0)));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4154607605355202578ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_11)))), (max((((/* implicit */unsigned long long int) var_5)), (var_0)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))));
    var_19 = ((/* implicit */unsigned char) min((var_7), (((/* implicit */short) (((!(((/* implicit */_Bool) var_13)))) && (((var_3) && (((/* implicit */_Bool) var_0)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) var_3);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = (~(((/* implicit */int) arr_3 [i_1])));
        arr_6 [i_1] = ((arr_0 [i_1]) >= (arr_0 [i_1]));
    }
}

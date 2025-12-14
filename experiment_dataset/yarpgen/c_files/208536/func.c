/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208536
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
    var_16 = (-(((/* implicit */int) var_4)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((((/* implicit */int) var_4)) - (((/* implicit */int) var_13)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_0]))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-170)))))))));
        var_19 = ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0]));
        var_20 = ((/* implicit */short) var_3);
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_1] [i_1])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
        var_21 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_15)) ? (var_1) : (var_6))) : (((/* implicit */int) arr_4 [i_1] [i_1])))));
    }
    var_22 = ((/* implicit */unsigned int) ((var_6) > (((/* implicit */int) var_11))));
    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
    var_24 = ((/* implicit */long long int) var_1);
}

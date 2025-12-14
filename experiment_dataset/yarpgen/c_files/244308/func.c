/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244308
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) (!((!(var_4)))))))))));
    var_15 += ((/* implicit */signed char) (-((((+(var_7))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_17 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1])))))) ? (((/* implicit */int) arr_0 [i_1] [(_Bool)1])) : (((var_12) / (((/* implicit */int) arr_4 [i_1])))))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((int) max(((unsigned short)40400), (min((arr_4 [i_1]), (arr_4 [i_1]))))));
        var_19 = ((/* implicit */int) arr_2 [i_1]);
        var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))));
    }
}

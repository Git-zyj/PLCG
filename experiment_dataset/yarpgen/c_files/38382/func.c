/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38382
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
    var_11 = ((/* implicit */int) max((var_11), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)-123)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) arr_0 [(_Bool)1]));
        arr_4 [i_0] [i_0] = var_5;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (+(65408))))));
        var_13 = ((/* implicit */unsigned short) arr_1 [i_1]);
        arr_8 [i_1] = ((/* implicit */int) 14244238741401122209ULL);
        var_14 = ((/* implicit */long long int) max((var_14), (min((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1]))))), (((((/* implicit */_Bool) (~(arr_5 [i_1])))) ? (arr_0 [12U]) : (arr_0 [i_1])))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((3078933919U), (3078933919U))))));
    }
}

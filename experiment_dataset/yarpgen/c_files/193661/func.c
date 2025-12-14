/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193661
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-110)), (arr_1 [i_0] [i_1]))))) : (var_11))) <= (min((((((/* implicit */_Bool) var_5)) ? (var_11) : (var_5))), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))));
                var_13 *= ((/* implicit */int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (short)20906)))), (((/* implicit */int) (unsigned char)255)))))));
                arr_5 [i_1] = ((/* implicit */_Bool) (short)20919);
                arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_1 [i_1] [i_0]))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */short) ((signed char) ((short) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_1))))));
}

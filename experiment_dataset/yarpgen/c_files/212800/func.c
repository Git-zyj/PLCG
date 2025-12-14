/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212800
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 + 1] [i_1])) | (((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])) ? (var_6) : (((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2] [i_1])))) : (((/* implicit */int) arr_2 [i_1 + 1] [i_0]))));
                arr_7 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(signed char)10])) == (((/* implicit */int) arr_3 [(signed char)9] [(unsigned char)18] [i_1 + 1]))));
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [2U] [(unsigned char)16])))) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1]))))) ? (((((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 3])) << (((var_6) + (78630170))))) : (((var_9) ? (var_13) : (var_8)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_15);
    var_19 *= ((/* implicit */unsigned char) var_2);
    var_20 = var_15;
    var_21 = ((/* implicit */_Bool) var_16);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5109
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((int) var_8)))));
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (((unsigned short) var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) max(((unsigned short)33581), ((unsigned short)63713)));
                var_13 = ((/* implicit */_Bool) ((unsigned char) (signed char)65));
                arr_7 [i_1] [i_0] [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [(short)6])) != (((/* implicit */int) (unsigned short)33581)))))))) : (((/* implicit */int) var_4))));
                arr_8 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) arr_0 [i_0])))))));
                arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (signed char)116))));
            }
        } 
    } 
}

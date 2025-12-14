/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196653
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) var_6);
                arr_6 [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_3)) : (arr_5 [0U] [i_1 - 1])))))));
                var_11 = ((/* implicit */unsigned char) min(((~(arr_1 [i_0] [i_0]))), (min((((/* implicit */unsigned int) (_Bool)0)), (arr_1 [i_0] [i_1 - 1])))));
                arr_7 [i_0] [0U] = (((((~(((/* implicit */int) (_Bool)0)))) + (2147483647))) >> (((((/* implicit */int) ((unsigned char) (unsigned char)253))) - (251))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) var_4);
    var_13 = ((/* implicit */short) var_4);
}

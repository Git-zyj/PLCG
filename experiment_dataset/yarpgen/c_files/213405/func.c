/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213405
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
    var_12 = (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */_Bool) 12793538521659754052ULL);
                var_14 = ((/* implicit */unsigned char) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) + (arr_4 [i_0] [i_0 + 1] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (33554431) : (arr_3 [i_0 - 1] [(unsigned char)3])))))), (min((((/* implicit */unsigned long long int) (+(arr_3 [i_0 + 1] [i_0])))), (min((arr_4 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) (signed char)-121))))))));
            }
        } 
    } 
}

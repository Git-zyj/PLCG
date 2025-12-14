/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226708
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
    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)250)) || (((/* implicit */_Bool) ((signed char) var_5))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) ((int) min((min((((/* implicit */unsigned char) arr_4 [i_0] [i_0])), (arr_2 [i_1 - 3]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))))))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(15297070773295538580ULL)))))) - (((((((/* implicit */_Bool) var_9)) ? (2083920670502782952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)6)) - (((/* implicit */int) arr_3 [i_0] [i_1 - 3])))))))));
                var_13 = min((((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_3 [(signed char)12] [(signed char)12])) ^ (((/* implicit */int) arr_4 [i_1] [i_0])))))), (((unsigned char) ((((/* implicit */_Bool) var_3)) ? (arr_6 [i_0] [i_1 + 3] [i_0]) : (var_3)))));
            }
        } 
    } 
}

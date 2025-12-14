/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26967
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) min(((unsigned char)255), ((unsigned char)4)))))), (((((/* implicit */_Bool) min((var_13), (var_8)))) ? (((/* implicit */int) max(((unsigned char)0), ((unsigned char)255)))) : (((/* implicit */int) ((unsigned char) var_9))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (((+(((/* implicit */int) arr_0 [i_1 - 1] [(unsigned char)16])))) <= (((/* implicit */int) (unsigned char)153)))))));
                var_22 |= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_0 [i_1 - 2] [(unsigned char)4])) + (((/* implicit */int) arr_0 [i_1 - 1] [(unsigned char)0])))), (((/* implicit */int) arr_1 [(unsigned char)10] [i_0]))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) var_16)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)153))))) : (((/* implicit */int) var_8))))));
    var_24 &= ((/* implicit */unsigned char) max((((/* implicit */int) max(((unsigned char)153), ((unsigned char)0)))), (((((/* implicit */int) ((unsigned char) var_8))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)62))))))));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)204)) >= (((/* implicit */int) var_19))))) == (((/* implicit */int) var_8)))))));
}

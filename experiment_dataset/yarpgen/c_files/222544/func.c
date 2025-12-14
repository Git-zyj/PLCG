/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222544
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) var_1);
        var_19 = (+(((/* implicit */int) (unsigned short)65524)));
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0]))))) - (((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0])))))))) ? (max((((/* implicit */int) (_Bool)0)), ((~(((/* implicit */int) (unsigned short)12)))))) : (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) arr_0 [i_1])), ((-(((/* implicit */int) (unsigned short)34926)))))));
        var_22 = ((/* implicit */int) max((var_22), ((-2147483647 - 1))));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) ((unsigned short) (unsigned short)37976))))) : (1952628852)));
}

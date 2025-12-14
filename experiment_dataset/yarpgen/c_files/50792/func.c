/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50792
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38921)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) var_11);
        var_21 = ((/* implicit */unsigned short) max((314617345U), (((/* implicit */unsigned int) (unsigned short)40753))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) (-((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_17))))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) var_13))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)120))))))));
            var_24 = ((/* implicit */unsigned short) arr_0 [i_0]);
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((var_11), (var_14))), (var_17)))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 2])))))));
        }
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)40753)) != (((/* implicit */int) (unsigned short)12501))));
            var_27 = ((/* implicit */unsigned short) var_8);
            var_28 = max((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_4 [i_0 + 1]))), (((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned short)64736), ((unsigned short)24783)))), ((-(((/* implicit */int) var_11))))))));
        }
        var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
    }
    var_30 = ((/* implicit */unsigned int) var_17);
    var_31 = ((/* implicit */unsigned int) var_16);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243083
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((unsigned char) var_12)))) / (((/* implicit */int) var_1)))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) min(((unsigned char)250), ((unsigned char)236))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)111))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned char)2)))))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (unsigned char)27)))))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_7))));
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) var_2))), (((((/* implicit */int) var_13)) + ((~(((/* implicit */int) var_14)))))))))));
}

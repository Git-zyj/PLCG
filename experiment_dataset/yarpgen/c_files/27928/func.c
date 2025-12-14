/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27928
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
    var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)0), (var_6)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_7)))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_11))) > (max((((/* implicit */int) (unsigned short)24179)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)6)), (var_7)))) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) max((min(((unsigned short)32768), ((unsigned short)58165))), (((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)0))))))) : (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) ((unsigned char) var_0))) - (225)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0]))))) && (min(((_Bool)1), (var_1))))))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0]));
        arr_5 [i_0] [i_0 + 2] = max((((/* implicit */unsigned short) ((((/* implicit */int) var_0)) == (((((/* implicit */int) var_13)) / (((/* implicit */int) (_Bool)1))))))), (min(((unsigned short)44811), (((/* implicit */unsigned short) arr_1 [i_0])))));
        var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_0 [(unsigned short)12]))))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_2 [(unsigned short)8] [i_1]))) | (((/* implicit */int) arr_0 [i_1]))));
        arr_8 [i_1] = ((/* implicit */unsigned char) var_3);
        arr_9 [i_1] = ((/* implicit */unsigned char) min(((unsigned short)38546), (((/* implicit */unsigned short) ((unsigned char) arr_0 [i_1])))));
    }
}

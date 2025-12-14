/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237229
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
    var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_4), ((unsigned short)0)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)6149))))))), (((((((/* implicit */_Bool) (unsigned short)32314)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) (unsigned short)13650)))) > (((((/* implicit */int) (unsigned short)53024)) % (((/* implicit */int) (unsigned short)33233))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) (unsigned short)12387)) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) (unsigned short)65241))))))));
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0]))))))))));
        arr_2 [i_0] [(unsigned short)0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (unsigned short)22443)))))) * (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [(unsigned short)3])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        arr_7 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)1))) ? (((/* implicit */int) (unsigned short)39050)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)24576)) != (((/* implicit */int) (unsigned short)49845)))))));
        var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_6 [i_1]), (arr_4 [i_1 - 1])))), (max((((((/* implicit */_Bool) (unsigned short)44395)) ? (((/* implicit */int) (unsigned short)48776)) : (((/* implicit */int) (unsigned short)24576)))), (((((/* implicit */int) (unsigned short)1418)) * (((/* implicit */int) (unsigned short)0))))))));
    }
}

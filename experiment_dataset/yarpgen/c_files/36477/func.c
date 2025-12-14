/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36477
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
    var_15 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_0)))))), (((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) var_0))), (min((((/* implicit */unsigned short) (unsigned char)109)), ((unsigned short)33873))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [(_Bool)1])))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) (unsigned short)42171)) ? (((/* implicit */int) (unsigned short)59666)) : (((/* implicit */int) (unsigned char)104))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) min(((unsigned char)151), (((/* implicit */unsigned char) (_Bool)1)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) << (((((/* implicit */int) (unsigned short)42155)) - (42130)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)146)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) ^ (var_10))))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) min(((unsigned char)138), (((/* implicit */unsigned char) (_Bool)1)))))));
        var_18 = max((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))))), (((int) arr_2 [i_1])));
        var_19 = ((/* implicit */signed char) max(((~(((/* implicit */int) ((unsigned short) arr_2 [i_1]))))), ((((_Bool)0) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((_Bool) 2655355846U)))))));
        var_20 -= ((/* implicit */unsigned short) (+(min((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (signed char)4)))), ((+(((/* implicit */int) (_Bool)1))))))));
    }
    var_21 = (+(var_9));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)176), (max((((/* implicit */unsigned char) (_Bool)1)), (var_6)))))) ? (((((var_9) - (var_9))) >> (((((/* implicit */int) var_5)) - (63636))))) : (max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15321)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))))));
}

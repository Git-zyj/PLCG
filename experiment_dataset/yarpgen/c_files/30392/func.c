/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30392
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
    var_13 = var_11;
    var_14 = ((/* implicit */short) (~(((/* implicit */int) var_12))));
    var_15 = ((/* implicit */unsigned char) (~(var_10)));
    var_16 = -1367934178;
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1])))));
        var_18 -= ((/* implicit */unsigned int) arr_1 [i_0] [i_0 - 1]);
        arr_3 [i_0] [(unsigned char)6] = var_1;
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) (_Bool)1);
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)8191))))))));
        var_21 &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) arr_4 [i_1])) : (var_7)))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2]))))), (var_11)));
        var_23 = ((/* implicit */unsigned short) arr_4 [0U]);
        var_24 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (var_6) : (((/* implicit */int) (short)-26631))))) : (1727943246U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) (short)26631)) : (((/* implicit */int) arr_5 [i_2] [i_2])))))));
    }
}

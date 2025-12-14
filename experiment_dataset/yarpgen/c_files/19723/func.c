/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19723
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
    var_20 = var_8;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0]);
        var_21 = ((/* implicit */int) min((var_21), ((+(((/* implicit */int) ((((/* implicit */int) min(((unsigned short)0), ((unsigned short)65535)))) != (((((/* implicit */int) (unsigned short)14165)) << (((((/* implicit */int) var_8)) - (47992))))))))))));
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (unsigned char)224)) : (var_10))) : (arr_1 [i_0 + 3]))) + (((((arr_1 [i_0]) / (((/* implicit */int) var_0)))) / (((var_9) - (((/* implicit */int) arr_0 [i_0]))))))));
    }
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) << (((/* implicit */int) ((var_18) > (((((/* implicit */_Bool) (unsigned short)767)) ? (((/* implicit */int) (unsigned short)34735)) : (var_3)))))))))));
    var_24 = ((/* implicit */int) (unsigned char)0);
}

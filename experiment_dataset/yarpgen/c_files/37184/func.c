/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37184
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
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_5)) : ((+(-1615174573)))))), (((unsigned int) ((unsigned int) var_15)))));
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) != (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (unsigned short)17))))))) || ((((!(((/* implicit */_Bool) (unsigned short)8)))) && (((/* implicit */_Bool) 33292288))))));
    var_19 -= ((/* implicit */unsigned long long int) ((unsigned short) min((max((((/* implicit */unsigned int) var_7)), (var_9))), (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_20 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)124))));
        var_21 = ((/* implicit */signed char) arr_1 [i_0 - 1] [i_0 + 3]);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248601
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) ((((arr_1 [i_0] [9LL]) + (9223372036854775807LL))) << (((((arr_1 [i_0] [i_0]) + (7497174701382533405LL))) - (20LL)))));
        arr_3 [(unsigned short)12] = ((/* implicit */unsigned long long int) arr_1 [i_0] [(unsigned short)8]);
        arr_4 [(unsigned char)1] [i_0] = ((/* implicit */unsigned short) (+(arr_1 [i_0] [i_0])));
        var_17 = ((/* implicit */unsigned char) (~(11U)));
        var_18 = ((/* implicit */unsigned int) min((var_18), (arr_0 [i_0] [i_0])));
    }
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) ((short) (unsigned char)19))) ? (min((14U), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
}

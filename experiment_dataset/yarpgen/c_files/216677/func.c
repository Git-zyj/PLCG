/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216677
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned short) (((-(((/* implicit */int) var_4)))) <= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_17 = var_9;
    }
    for (short i_1 = 2; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) 4572350344066992402ULL);
        var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (8297524241020083740ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)141)) | (((/* implicit */int) arr_0 [i_1 + 1])))))))), (((signed char) (short)13185))));
        arr_6 [i_1] = ((unsigned short) max(((-(((/* implicit */int) (short)-23722)))), (((/* implicit */int) min((arr_0 [i_1]), (var_3))))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))));
}

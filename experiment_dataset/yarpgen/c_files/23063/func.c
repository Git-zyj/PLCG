/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23063
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
    var_10 = ((/* implicit */signed char) max((((/* implicit */int) var_3)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)30190))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_5 [i_0] = ((/* implicit */int) (signed char)15);
        var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_6)) < (arr_0 [i_0])))), (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) (short)-1)))))))));
        var_12 = ((/* implicit */unsigned short) ((var_3) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (-1710295535)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)0)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)20821)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (_Bool)1)))))))));
        arr_6 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
    }
    var_13 = ((/* implicit */unsigned char) var_4);
    var_14 = ((/* implicit */_Bool) var_1);
}

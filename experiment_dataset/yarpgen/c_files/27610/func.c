/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27610
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
    var_12 &= max(((-(((11449615364681209345ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))))))), (((((((/* implicit */unsigned long long int) var_2)) + (11100219936576471169ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))))));
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (var_2)))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (-3373338910278295099LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)26206)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 = arr_1 [i_0];
        var_15 = ((/* implicit */unsigned char) var_11);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_5 [i_1]))))), (arr_5 [i_1])));
        var_17 = ((/* implicit */unsigned char) var_0);
    }
}

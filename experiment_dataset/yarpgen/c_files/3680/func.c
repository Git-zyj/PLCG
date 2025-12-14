/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3680
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 1]))))) ? (6844803425506819595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4700)) && (((/* implicit */_Bool) arr_2 [i_0 + 1])))))));
                arr_5 [i_0] [(signed char)0] [(unsigned char)1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 - 1]))));
                arr_6 [i_0] = ((/* implicit */signed char) (-(2831148820697783006ULL)));
                var_15 = ((/* implicit */unsigned short) max((min((12646688865758587297ULL), (((/* implicit */unsigned long long int) arr_1 [i_1])))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-92))))) ? (max((((/* implicit */unsigned long long int) (signed char)-29)), (10007070250540788361ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48671)))))));
                var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (6982356286387167183ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) / (18446744073709551593ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) != (var_8)))) : ((-(((/* implicit */int) arr_2 [i_1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) : (((min((((/* implicit */unsigned long long int) (signed char)104)), (6328316090229580191ULL))) - (var_12)))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_10)) && (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_3)))))), (((((/* implicit */int) (unsigned short)5981)) <= (((/* implicit */int) var_6)))))))));
}

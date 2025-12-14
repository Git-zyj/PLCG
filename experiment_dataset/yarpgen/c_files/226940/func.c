/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226940
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
    var_16 |= ((/* implicit */long long int) var_2);
    var_17 = ((/* implicit */_Bool) (short)30881);
    var_18 &= ((/* implicit */int) max((((/* implicit */unsigned char) ((var_1) && (((/* implicit */_Bool) var_11))))), (var_0)));
    var_19 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7101)) ? (((/* implicit */int) var_6)) : (min((((/* implicit */int) (short)-31344)), (384115399)))))) & (var_4)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [9ULL] [(unsigned char)9] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)8450))) ? (((/* implicit */unsigned long long int) 4764237U)) : (18002323681251462255ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6468))))))));
                var_20 = ((/* implicit */int) 36028797018439680LL);
                arr_6 [i_0] [(unsigned short)6] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_3 [i_1 + 1] [(short)8] [(_Bool)1]), (arr_3 [i_1 - 2] [i_1 - 2] [i_0])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-92)), (-400348681)))) : (max((4168247356296598123ULL), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_1] [i_0]))))));
                var_21 &= ((/* implicit */signed char) arr_4 [i_1 - 2] [i_1 - 3]);
                arr_7 [i_0] [(unsigned char)8] [(signed char)8] |= ((/* implicit */unsigned long long int) ((short) (short)19731));
            }
        } 
    } 
}

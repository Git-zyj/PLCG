/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210425
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165)))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? ((-(((/* implicit */int) (unsigned char)181)))) : (((/* implicit */int) ((unsigned char) arr_2 [i_1 + 1] [i_1])))));
                arr_8 [i_0] = ((/* implicit */long long int) ((unsigned long long int) max((arr_6 [i_1 - 1] [i_1 + 1]), (((unsigned long long int) (signed char)100)))));
                arr_9 [i_0] [i_0] = max((max((3643208959800579196ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)90)) | (((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */long long int) (unsigned char)221))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_6)), (var_7)));
    var_18 = ((/* implicit */long long int) max((((14803535113908972423ULL) & (((/* implicit */unsigned long long int) max((3LL), (var_15)))))), (((((/* implicit */_Bool) var_14)) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) > (-9223372036854775807LL)))))))));
    var_19 = var_2;
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(arr_1 [i_3])))) & (max((((unsigned long long int) -8490366904345418953LL)), (max((14803535113908972420ULL), (((/* implicit */unsigned long long int) (signed char)-31))))))));
                arr_15 [12ULL] [i_3] [(signed char)18] = max((((max((8506305348033059823LL), (((/* implicit */long long int) (unsigned char)41)))) >> (((((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) - (7839992437005173765ULL))))), (((/* implicit */long long int) (unsigned char)205)));
                var_21 -= ((/* implicit */long long int) (~(((/* implicit */int) max((((unsigned char) (signed char)-31)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned char)221))))))))));
            }
        } 
    } 
}

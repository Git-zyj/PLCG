/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248902
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 ^= ((/* implicit */signed char) ((long long int) (unsigned short)15));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_2 [i_0 - 1])) | (((/* implicit */int) var_8)))));
                var_19 ^= var_10;
                arr_7 [(short)7] [i_0] |= ((/* implicit */signed char) var_1);
            }
        } 
    } 
}

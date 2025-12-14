/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206785
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned long long int) 0LL))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 8157952333838005102LL)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (_Bool)1)))))) & ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))))));
    var_20 = ((/* implicit */unsigned char) var_15);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) arr_2 [i_0] [i_1 - 1]);
                var_22 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (-8157952333838005103LL) : (((/* implicit */long long int) var_11)))))));
                var_23 = ((((/* implicit */_Bool) ((long long int) arr_5 [i_1 + 2] [i_1]))) ? (arr_5 [i_1 + 1] [(signed char)7]) : (((arr_5 [i_1 + 3] [i_1 + 1]) + (161438206U))));
            }
        } 
    } 
    var_24 ^= ((/* implicit */long long int) var_12);
}

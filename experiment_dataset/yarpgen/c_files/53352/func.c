/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53352
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
    var_18 = ((/* implicit */unsigned char) var_11);
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)26240)))) ? (var_15) : (var_15)));
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) / ((-(min((((/* implicit */unsigned long long int) (signed char)39)), (11894188071814710826ULL)))))));
                    var_22 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_2] [i_2])) >> (((((/* implicit */int) (unsigned short)39285)) - (39279)))))) ? (arr_5 [i_2] [i_1 - 3] [i_1 - 3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0] [i_1 - 1])))))));
                }
            } 
        } 
    } 
}

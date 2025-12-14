/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200752
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
    var_17 = ((/* implicit */signed char) var_14);
    var_18 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) max(((-(3777051437U))), (min((((/* implicit */unsigned int) arr_5 [i_0 + 4] [i_0] [(signed char)10])), (3777051437U)))));
                var_20 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(-1)))) * (0U)));
                var_21 = ((/* implicit */int) var_6);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) ? ((~(var_7))) : (((/* implicit */unsigned int) ((int) 445398013)))));
    var_23 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)26348)))) ? (((((/* implicit */_Bool) -3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_11)))) ^ (((/* implicit */int) (((+(var_16))) <= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (0U)))))))));
}

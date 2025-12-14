/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193961
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? ((+(((2007568601674125469LL) / (((/* implicit */long long int) ((/* implicit */int) var_15))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((9223372036854775807LL) / (-2007568601674125494LL))) == ((~(-5772489518148234042LL)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) min((-8612998261032958820LL), (5772489518148234036LL)))))))))));
                    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (arr_5 [i_2])))) ? (max((6278310281331265983LL), (((/* implicit */long long int) arr_8 [i_0] [(unsigned short)7] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 3])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) arr_4 [i_2 + 3] [4LL] [i_2 - 3])) ? (-5772489518148234014LL) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1])))))))))));
                }
            } 
        } 
    } 
}

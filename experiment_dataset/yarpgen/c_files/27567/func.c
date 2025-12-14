/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27567
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
    var_15 *= ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */long long int) ((var_11) ? (((/* implicit */int) (unsigned short)62669)) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (9068312358324549318LL))))));
    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) / (((/* implicit */int) var_12)))) - (((/* implicit */int) max((((/* implicit */signed char) var_11)), (var_6))))))), (13074447289428869867ULL)));
    var_17 = (+(9068312358324549318LL));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) ((-9068312358324549311LL) == (((/* implicit */long long int) -2038492335))));
                    var_18 = (unsigned short)65535;
                    var_19 = ((/* implicit */int) max((var_19), (var_4)));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) : (max((((/* implicit */unsigned int) ((arr_1 [i_0]) / (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned int) 2147483647)) : (arr_9 [i_0] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30220
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)76)) ? (-4) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) -1587020653)))))))))));
                    arr_7 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_0])) ? (max((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2])), (3))) : (((var_0) & (((/* implicit */int) arr_5 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                    var_15 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1761157570U)) ? (var_11) : (var_11)))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2 - 1])) : (((((/* implicit */int) var_9)) * (((/* implicit */int) var_7)))))), (((/* implicit */int) (unsigned short)29178))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((5568219850609300404ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1026))))))));
                    arr_8 [i_2 - 1] [i_1] [i_2 - 1] [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_3 [(signed char)9] [i_1] [i_2])), (12878524223100251203ULL))), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_17 = max((((/* implicit */int) var_9)), (var_0));
}

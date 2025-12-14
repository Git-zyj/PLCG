/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212716
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) var_3))));
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_8)), (var_2)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_13 = min((min((4468778721175477537ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)511))))));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_0 [i_3]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))) != (((/* implicit */int) arr_1 [i_0]))))) >> (((max((((/* implicit */unsigned long long int) ((arr_4 [i_2]) >> (((arr_4 [(signed char)10]) - (928913814U)))))), (var_4))) - (10169241975425287942ULL)))));
                        var_16 = ((/* implicit */unsigned int) (+(((((((/* implicit */int) var_9)) * (((/* implicit */int) var_8)))) >> (((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4])) ? (8828031566148672800ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_4]))))) - (8828031566148672789ULL)))))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_8);
}

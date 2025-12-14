/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54377
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min(((unsigned short)33247), ((unsigned short)65535)));
                    arr_11 [i_0] [i_1 + 2] [i_1] = ((/* implicit */int) (!((!(((_Bool) var_8))))));
                    arr_12 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))))), (min((var_10), (((/* implicit */unsigned long long int) arr_10 [1ULL] [i_1 - 3] [i_0] [i_0]))))))) ? ((((-(arr_1 [i_1]))) + (((/* implicit */long long int) ((int) 5196038049136890213LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) != (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) var_2))))))))));
        var_22 = ((unsigned int) (!((!(((/* implicit */_Bool) (unsigned short)1))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned long long int) arr_2 [i_0])), (((var_3) / (((/* implicit */unsigned long long int) var_12))))))) ? (((unsigned int) ((((/* implicit */_Bool) (signed char)-44)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23)) * (((/* implicit */int) (unsigned short)65533)))))))))));
    }
    var_24 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((unsigned char) var_10)))))));
}

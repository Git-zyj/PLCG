/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228911
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        arr_3 [(unsigned char)11] [i_0 - 1] = ((/* implicit */unsigned int) var_7);
        arr_4 [3U] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_8) : (1072228251)))), (min((var_0), (var_0)))))), (min((var_10), (((var_10) >> (((var_1) - (1245510063U)))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [(unsigned char)13] [0]);
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(var_2))))));
        var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_2)))) || (((var_10) < (((/* implicit */long long int) var_0))))));
        var_15 = ((unsigned int) (~(var_8)));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) min((var_7), (var_11)))) - (min((max((var_1), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) var_11))))));
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(var_1)))), (var_10)));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (long long int i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((((long long int) max((var_12), (((/* implicit */long long int) var_11))))), (((/* implicit */long long int) var_1)))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((int) (~(var_8)))))));
                }
            } 
        } 
    } 
    var_20 = var_6;
}

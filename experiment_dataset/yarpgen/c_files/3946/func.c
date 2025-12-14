/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3946
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
    var_14 = ((((_Bool) var_7)) ? (((var_10) ? (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_6))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((unsigned int) var_12))) : (var_6))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned short) arr_8 [i_3] [i_2] [i_1] [i_0])), (min((var_11), (((/* implicit */unsigned short) arr_5 [i_0] [i_2 - 1] [i_0 - 1]))))));
                        var_16 = ((/* implicit */_Bool) (~(min((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */long long int) var_1))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_2] [i_0] [i_3])) ? (max((((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])))), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) min((max((var_12), (((/* implicit */int) arr_6 [i_3] [i_2] [2U] [(unsigned char)12])))), (((int) arr_0 [i_0])))))));
                    }
                } 
            } 
        } 
        var_18 = arr_8 [14LL] [i_0] [i_0] [i_0];
    }
}

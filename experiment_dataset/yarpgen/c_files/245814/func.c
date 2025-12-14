/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245814
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_10 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
        var_11 = ((/* implicit */signed char) (+(arr_2 [i_0 - 2] [i_0 - 3])));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)8] [i_1]))) | (arr_4 [i_0] [i_0])))))))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] [i_2] [9LL] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) arr_8 [i_0])) & (var_3))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))));
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_2] [i_3 - 1])) + (((/* implicit */int) arr_0 [i_1 - 1] [i_2])))))));
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_8))));
    var_15 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1))))), (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_3)))))));
}

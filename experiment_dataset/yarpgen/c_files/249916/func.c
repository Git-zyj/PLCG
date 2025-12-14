/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249916
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
    var_14 *= ((/* implicit */signed char) max((var_4), (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)21412)) > (arr_7 [(signed char)6] [i_2]))) ? (((arr_4 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(signed char)17] [i_2])))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((var_3) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))))));
                    var_16 &= ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */unsigned int) arr_6 [i_1])) > (var_12)))) + (((((/* implicit */int) arr_1 [i_0] [i_2])) + (((/* implicit */int) arr_0 [i_0] [i_1])))))) + (((/* implicit */int) var_0))));
                    arr_9 [4] [i_2] [i_2] = min((max((((/* implicit */unsigned int) arr_7 [i_1] [i_2])), (2228551319U))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (2066415977U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) 2066415976U)) ? (2228551319U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))))))));
                }
            } 
        } 
    } 
}

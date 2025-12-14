/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30101
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
    var_10 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_11 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3396268448U)) ? (1762675209U) : (2532292063U)))) ? (((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [2LL] [(signed char)14]))))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1 - 1]))))));
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [(short)5] [i_1 - 1] [i_1 - 1] [(unsigned short)8]))))) ? (((((/* implicit */_Bool) 1762675209U)) ? (4275285735U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0])) < (((/* implicit */int) (unsigned char)10)))))))))))));
                }
            } 
        } 
    } 
}

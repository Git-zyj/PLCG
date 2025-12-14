/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51284
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
    var_11 = ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) var_4)))))))), ((~(((/* implicit */int) var_1)))))))));
                    var_13 -= ((/* implicit */signed char) arr_5 [12ULL] [i_0] [i_2]);
                    var_14 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [4ULL] [i_2 + 2] [i_0])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 += ((/* implicit */unsigned int) var_4);
                        var_16 = ((((/* implicit */_Bool) 995276769U)) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_1] [i_2] [(short)19])) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_0] [15] [i_2] [i_2] [i_2 - 1] [i_3])), (arr_1 [i_2 + 1]))))))));
                    }
                    var_17 = ((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_2])))))));
                }
            } 
        } 
    } 
}

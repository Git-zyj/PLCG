/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219871
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (arr_0 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 - 1] [i_0])) / (((/* implicit */int) arr_8 [i_0 + 1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_5 [i_0]))))) : (((/* implicit */int) var_8))));
                                arr_11 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((max((max((((/* implicit */long long int) var_1)), (arr_4 [i_0]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) >= (arr_10 [i_4] [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1])))))) < (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_2] [i_3]))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)26))) : (arr_4 [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((var_1), (((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
}

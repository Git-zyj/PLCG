/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224838
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_2] [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2 - 1])) ? (arr_7 [i_2 + 1]) : (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((arr_3 [(_Bool)1] [i_1] [i_2]), (((/* implicit */unsigned int) var_1))))));
                    var_15 = ((/* implicit */unsigned int) min((arr_6 [i_2]), (((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_0] [i_2 - 1]))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+(arr_7 [i_2 - 1]))))));
                    }
                    arr_13 [15LL] [i_2] [i_1] [i_1] = ((/* implicit */short) arr_7 [i_0]);
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) var_12))));
    var_18 &= ((/* implicit */signed char) var_4);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39919
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
    var_18 = var_15;
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) min((var_8), (var_10))))) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : ((-(var_16))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)27))))), (var_9)))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (33550336U))))) <= (var_13))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) (+(arr_1 [(signed char)2]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_7 [10U] [3U] [(signed char)4] [10U]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        arr_12 [(unsigned char)0] [i_1] [i_2] [i_3 + 1] &= ((/* implicit */unsigned int) ((arr_6 [i_3] [(_Bool)1] [i_3 - 1] [i_1]) & (arr_6 [i_2] [i_2] [i_3 - 1] [i_3 - 1])));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_2 [(unsigned char)10])))))));
                    }
                }
            } 
        } 
        var_22 &= ((/* implicit */unsigned long long int) arr_2 [(short)8]);
    }
    var_23 = ((/* implicit */int) 1116892707587883008ULL);
}

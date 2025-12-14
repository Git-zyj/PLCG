/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35400
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (unsigned char)124);
                    var_14 = ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)209)))) / (((/* implicit */int) arr_5 [i_1] [i_1 - 1] [i_1 - 1]))))) : (max((((/* implicit */unsigned int) (_Bool)1)), ((+(1715664219U))))));
                    var_15 = ((/* implicit */_Bool) max(((-(((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) >> (((/* implicit */int) arr_9 [i_0])))))), (((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)15]))));
                    arr_11 [(signed char)13] = ((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) var_1))))), (arr_2 [i_0])));
                    arr_12 [i_0] [(signed char)7] [(signed char)7] = ((/* implicit */unsigned short) ((long long int) (+(((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned char)132)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            {
                arr_19 [i_3] [i_4] = ((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned char)67)))), (((/* implicit */int) ((arr_8 [i_3] [(_Bool)1] [i_4]) < (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (arr_3 [i_4] [i_3])))))))));
                var_16 = max(((+(((var_0) ? (arr_7 [i_3] [i_4] [(unsigned short)13] [i_3]) : (((/* implicit */int) var_7)))))), (((/* implicit */int) ((signed char) arr_16 [i_4]))));
            }
        } 
    } 
}

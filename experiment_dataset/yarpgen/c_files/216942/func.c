/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216942
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) (short)11))))), (((arr_1 [i_0]) / (arr_4 [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))) : (max((((/* implicit */long long int) (signed char)-65)), (2147483616LL)))));
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (+(min((((/* implicit */long long int) arr_3 [i_0])), (arr_4 [i_1] [i_1] [i_1]))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 2; i_2 < 16; i_2 += 2) 
    {
        var_12 = ((((/* implicit */long long int) arr_8 [i_2 - 1])) - (var_3));
        arr_9 [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_2 + 1] [i_2])) ^ (((/* implicit */int) arr_5 [i_2 - 2] [i_2 - 1]))));
        var_13 = ((/* implicit */long long int) max((var_13), (((((/* implicit */_Bool) ((arr_1 [i_2]) / (((/* implicit */long long int) arr_0 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_2 + 1])))) : (arr_7 [i_2])))));
    }
}

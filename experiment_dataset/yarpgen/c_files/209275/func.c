/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209275
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0 + 1]))))), (arr_0 [i_0 + 2])));
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_0 + 2]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 2; i_2 < 7; i_2 += 4) 
    {
        arr_7 [5LL] [4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 + 1])))))));
        arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((157140630U) << (((((/* implicit */int) arr_1 [i_2 - 1])) - (160)))))) ? (min((((((/* implicit */_Bool) arr_6 [(_Bool)1])) ? (((/* implicit */int) (signed char)-80)) : (-1124036732))), (arr_2 [i_2 + 3] [i_2]))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) >= (((((/* implicit */_Bool) arr_2 [(signed char)13] [9ULL])) ? (((/* implicit */int) arr_6 [i_2 + 4])) : (((/* implicit */int) arr_6 [i_2])))))))));
    }
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((var_3) ? (var_9) : (var_4))))));
}

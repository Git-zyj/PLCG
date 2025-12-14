/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28380
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_1 - 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2]))) | (arr_3 [i_1 - 1] [i_1 + 1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 2])))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) (short)6154)) - (((/* implicit */int) (signed char)-101))));
                arr_5 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_0])) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_3 [3ULL] [i_1 - 1])) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : ((+(arr_0 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            {
                arr_13 [i_2] = ((/* implicit */short) var_1);
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4] [(_Bool)1]))) - (4294967295U))));
        arr_19 [i_4] = ((/* implicit */short) 17800564084714968993ULL);
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((var_14) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((3793670819U) - (3793670809U)))))))))))));
        var_20 -= ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */signed char) arr_15 [i_4] [(_Bool)1])), (((signed char) arr_3 [i_4] [i_4])))))));
    }
}

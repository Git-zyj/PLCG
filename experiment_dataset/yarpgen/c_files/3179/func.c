/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3179
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0]))) / (var_1))))));
                arr_4 [i_0] [i_1] [9LL] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 2])) ^ (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                arr_5 [i_1] [(short)1] [3U] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_18)), (var_6)))) && (((/* implicit */_Bool) arr_0 [i_1 - 1])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 2])) >= (((/* implicit */int) arr_2 [i_1 - 1])))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 - 1])) <= (((/* implicit */int) arr_1 [i_0] [i_0]))))) << ((((+(((/* implicit */int) arr_3 [0LL] [i_0])))) - (17463)))));
            }
        } 
    } 
    var_21 += ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (int i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            {
                arr_13 [i_2] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30682))) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43568))) : (((arr_9 [i_3] [i_3 - 2]) * (arr_9 [i_3] [i_3 - 1])))));
                var_22 += ((/* implicit */unsigned int) (short)28722);
                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_11 [i_2] [i_3 - 2] [i_3]) / (((/* implicit */long long int) arr_10 [i_3 - 3] [i_2] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_10 [i_2] [i_2] [i_3])))) || (((/* implicit */_Bool) arr_11 [i_2] [i_2] [14])))))) : (568643265432731824ULL)));
            }
        } 
    } 
}

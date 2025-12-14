/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191834
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
    var_13 += ((/* implicit */unsigned int) (unsigned short)2616);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 |= ((/* implicit */signed char) ((int) max((((/* implicit */unsigned short) (unsigned char)112)), (arr_0 [i_0]))));
                var_15 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [(_Bool)1])) != (var_11)))))) << (((max((arr_1 [i_0]), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))))) - (5887460704519944923LL)))))) : (((/* implicit */long long int) ((max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [(_Bool)1])) != (var_11)))))) << (((((max((arr_1 [i_0]), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))))) - (5887460704519944923LL))) + (5887460704520000239LL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((arr_5 [i_2] [i_3]) / (((/* implicit */long long int) ((((/* implicit */_Bool) -1989251180)) ? (arr_2 [i_2] [i_3]) : (((/* implicit */int) arr_9 [i_2] [i_3]))))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (1989251186))))))))));
                var_17 = ((/* implicit */short) var_5);
                arr_11 [2U] &= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned short) arr_7 [i_2 + 2] [i_3]))), (min((((/* implicit */long long int) arr_7 [i_2 + 3] [i_3])), (arr_1 [i_3])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_4] [(short)4] [i_4])) ? (arr_5 [2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [(signed char)16] [(signed char)16]))))))));
        arr_15 [i_4] = ((/* implicit */unsigned long long int) var_3);
    }
    var_19 = ((/* implicit */int) var_5);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51302
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0 - 1] [i_1])) | (((/* implicit */int) arr_1 [i_0] [i_1])))) | (((((/* implicit */_Bool) (-(24U)))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 2])) ? (-1686107925) : (arr_7 [i_0 + 1] [i_1]))) : (arr_7 [i_0] [i_1]))))))));
                arr_8 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_0 + 2]), (((/* implicit */unsigned long long int) var_7))))) ? (max((((/* implicit */unsigned int) arr_7 [1ULL] [i_1])), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_4))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (var_16))), (((((/* implicit */_Bool) var_13)) ? (arr_4 [i_0 + 2]) : (((/* implicit */int) (signed char)-104)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            {
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_11 [i_2 - 1]) ? (((/* implicit */int) arr_11 [i_2 + 1])) : (((/* implicit */int) arr_11 [i_2 + 1])))))));
                arr_18 [i_2] = ((((unsigned int) ((((/* implicit */_Bool) arr_13 [8ULL] [i_3])) && (((/* implicit */_Bool) arr_10 [i_2 - 1] [i_3]))))) | (((/* implicit */unsigned int) ((int) (!(arr_11 [i_2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        for (short i_5 = 1; i_5 < 18; i_5 += 4) 
        {
            {
                arr_24 [i_4] = 2494249596U;
                arr_25 [i_4] = ((/* implicit */unsigned int) arr_11 [i_4]);
            }
        } 
    } 
}

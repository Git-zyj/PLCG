/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237863
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((-(arr_4 [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0]))) : (((((/* implicit */_Bool) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_10)), (arr_2 [i_0] [i_1]))))) : (arr_4 [i_0] [i_0])))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)67)) ? (((((/* implicit */_Bool) -4096526649844459734LL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1]))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1] [i_0])))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        for (short i_3 = 2; i_3 < 23; i_3 += 4) 
        {
            {
                arr_13 [i_3] &= ((/* implicit */_Bool) (+(var_0)));
                arr_14 [i_2] [i_2] = ((/* implicit */short) (+(arr_12 [i_2 + 1] [i_2 + 1] [i_3 - 1])));
                arr_15 [i_2] [i_2] [i_2] = ((unsigned int) var_2);
                var_13 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((70368744177663LL) % (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1429312457660829375ULL)) && (var_8))))) : (arr_7 [i_2 + 3])))) < (max((((14368747469838125348ULL) + (((/* implicit */unsigned long long int) 4751992355062070592LL)))), (((/* implicit */unsigned long long int) ((2602841688034113306LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220983
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
    var_16 = ((/* implicit */unsigned char) ((_Bool) var_6));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(_Bool)1] |= ((/* implicit */short) 7386316556959100265LL);
                arr_5 [6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 - 1])), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64723))) : (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) arr_1 [i_1])), (var_4)))) << (((((unsigned int) var_0)) - (3611550124U)))))) : (((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */long long int) (+(arr_2 [i_1] [i_0] [(unsigned char)10])))) : (((var_14) | (-7386316556959100265LL))))));
                arr_6 [i_0] [i_0] [(short)10] = ((/* implicit */signed char) ((int) ((((/* implicit */long long int) arr_3 [i_0 + 1])) | (var_0))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_11 [i_2] = ((/* implicit */int) ((var_3) / (((((/* implicit */_Bool) 5253568892196558349ULL)) ? (((/* implicit */long long int) var_5)) : (arr_7 [i_3])))));
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned int) arr_9 [i_2] [i_3]);
            }
        } 
    } 
    var_17 = (-(((var_7) ? (11176988283125978793ULL) : (((/* implicit */unsigned long long int) var_3)))));
}

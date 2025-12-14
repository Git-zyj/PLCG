/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215066
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
    var_13 ^= ((/* implicit */signed char) var_11);
    var_14 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (signed char)98))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) var_2);
                var_16 = max((arr_0 [i_1]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))));
                arr_6 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned int) var_1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (int i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            {
                arr_11 [i_2] [i_2] &= ((/* implicit */unsigned short) (~(15)));
                var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) 6463140421347963736ULL)) ? ((~(9059703646000083750ULL))) : (min((((/* implicit */unsigned long long int) var_5)), (arr_7 [i_3 + 2] [i_3 + 2])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(11983603652361587879ULL)))))))));
}

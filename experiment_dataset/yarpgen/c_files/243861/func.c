/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243861
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((min((var_6), (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1 + 1] [i_2])), (var_12)))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) var_2))))))));
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1597251449056389332LL)) ? (arr_0 [i_1 - 1] [i_1 + 1]) : (arr_7 [i_1 + 3] [i_1 + 1] [i_1] [i_1 - 2]))) | (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (-1301460287)))) : (((arr_3 [i_1 + 2] [i_1 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                    arr_9 [(_Bool)1] [(signed char)2] [i_1] [i_1] = (unsigned short)11165;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)54358)) ^ (((/* implicit */int) var_18))))) : (1597251449056389332LL)))));
}

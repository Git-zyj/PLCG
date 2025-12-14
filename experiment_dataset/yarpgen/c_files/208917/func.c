/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208917
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
    var_12 = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) var_9)))), (max((var_1), (((/* implicit */int) var_11))))))));
    var_13 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)116)), (((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (-1047313889)))) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (signed char)-87))))) : (((((/* implicit */int) var_5)) ^ (((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] &= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((max((((/* implicit */long long int) -400776593)), (arr_3 [i_2]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) (unsigned short)54005))))))))));
                }
            } 
        } 
    } 
}

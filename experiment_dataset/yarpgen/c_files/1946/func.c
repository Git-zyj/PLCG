/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1946
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) | (var_13)))) : (var_17)))) ? (((((/* implicit */_Bool) var_17)) ? ((-(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) != (2762304976U))))))) : ((+(2762304976U)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (~(arr_4 [i_2] [i_1])));
                    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_2]))))))) ? (((((/* implicit */long long int) 2762304979U)) / (-5462529173523162818LL))) : (((/* implicit */long long int) arr_3 [i_2] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) min((var_23), (((int) var_14))));
    var_24 = ((/* implicit */unsigned int) var_15);
}

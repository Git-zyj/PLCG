/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218022
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
    var_17 = ((/* implicit */short) var_9);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */int) var_12)) != (((((/* implicit */_Bool) var_13)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)255)))))))));
    var_19 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) (unsigned char)4);
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (var_3) : (((/* implicit */long long int) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) (~(arr_4 [i_0])))) : (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                var_22 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) max((max((max((((/* implicit */unsigned int) (unsigned char)253)), (arr_4 [i_0]))), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0])))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_0])))) && (((/* implicit */_Bool) var_7)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((var_10) % ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_1))))))));
}

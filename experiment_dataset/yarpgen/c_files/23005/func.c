/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23005
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
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)6))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (max((min((((/* implicit */unsigned int) var_17)), (var_8))), (((/* implicit */unsigned int) (unsigned char)252))))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)0] [i_1])))) ? (var_4) : (((/* implicit */unsigned long long int) arr_2 [2LL]))))))))));
                arr_8 [i_0] = ((/* implicit */int) (-(arr_5 [i_0] [i_0] [i_0])));
                arr_9 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))))) ? (arr_2 [i_0]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_6))))))));
            }
        } 
    } 
}

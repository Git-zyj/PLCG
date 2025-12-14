/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219160
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
    var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (min((-7809050948197168059LL), (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) ((((/* implicit */int) var_13)) - (((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_12)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [(unsigned short)16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 3]))) & (arr_2 [i_1])))) || (((/* implicit */_Bool) arr_0 [i_1]))));
                arr_7 [i_0 + 1] = ((/* implicit */unsigned long long int) arr_2 [i_0 - 2]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (((+(var_5))) % (((/* implicit */int) max((max((((/* implicit */unsigned short) var_7)), ((unsigned short)50291))), (max((var_13), (((/* implicit */unsigned short) var_12)))))))));
}

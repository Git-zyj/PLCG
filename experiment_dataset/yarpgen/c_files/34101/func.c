/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34101
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 = max((((((/* implicit */_Bool) ((int) arr_1 [i_0] [i_0]))) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_2])))), (((/* implicit */int) max((((/* implicit */short) arr_2 [i_1 + 1])), (arr_9 [8ULL] [8ULL] [i_2])))));
                    arr_10 [8LL] [i_0] [i_0] [(short)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */int) arr_3 [i_0])))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_5 [(short)10] [i_1 + 2] [i_2]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_6);
    var_20 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */int) var_8)) >> (((var_2) - (177281257))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))))), (max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (var_12)))), (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
}

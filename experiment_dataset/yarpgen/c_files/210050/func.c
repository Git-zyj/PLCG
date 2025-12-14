/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210050
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) var_12)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23991)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) : (max((3088801087542302057LL), (((/* implicit */long long int) var_8))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1609102245)) ? (arr_2 [i_1] [i_1 - 4] [i_1]) : (2985618025902423376LL)))) ? (((((/* implicit */int) arr_1 [i_0] [i_1])) | (((/* implicit */int) var_3)))) : (((/* implicit */int) var_6))))) / (arr_2 [i_0] [i_1 - 3] [i_1])));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_0))))) / (((long long int) (unsigned short)44070))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_1 [12LL] [i_0]))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)21466))))), (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [2LL]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1] [i_1 + 1])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_1]))))) || (((((/* implicit */_Bool) (signed char)64)) && (((/* implicit */_Bool) var_5))))))))));
            }
        } 
    } 
}

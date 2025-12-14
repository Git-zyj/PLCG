/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248752
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_1] [i_1] [i_1])) : (arr_1 [i_1 + 1])))) ? ((-(1884260824U))) : (((/* implicit */unsigned int) (-(var_4))))))) / (((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [(unsigned char)12] [i_0] [i_0]))))) ? (((/* implicit */long long int) var_7)) : ((+(7831338873596100853LL)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((arr_0 [i_1 - 2]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)255)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_1 + 1])) - (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0] [1U] [i_1])), (var_14))))))) : (var_12)));
                var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_6);
    var_18 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) var_12)), ((~(var_2)))))));
}

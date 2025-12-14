/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249063
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
    var_10 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned char)37))))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2581286040U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((1484349555U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1713681239U)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) (unsigned short)1288)))))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1713681253U)) ^ (9223372036854775807LL)));
                var_14 = (((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [13LL])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0])))))))) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))) : (var_4))), ((+(arr_6 [i_0] [i_1]))))));
                arr_7 [0ULL] [0ULL] [i_1] = (-(((/* implicit */int) ((2581286056U) < (((/* implicit */unsigned int) ((((/* implicit */int) (short)29616)) << (((((((/* implicit */int) (short)-13453)) + (13474))) - (8))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) 2581286040U);
}

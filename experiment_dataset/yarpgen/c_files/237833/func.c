/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237833
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
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_1] [i_2]))) ? (((/* implicit */unsigned long long int) ((arr_1 [8LL]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) - (10381566902942317561ULL)))))) ? (((((/* implicit */_Bool) (short)-19854)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) > (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))) : (min((((/* implicit */long long int) arr_8 [i_0] [i_0])), (var_14))))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))))));
                    arr_9 [9] [i_1] [i_0] [0U] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -5074974329011700250LL)) < (8065177170767234055ULL))))))), (((((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (3696005069652056146LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_10 [(unsigned char)0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) arr_7 [i_0] [i_2 - 1] [i_2 - 1] [i_0]);
                    var_19 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [i_1] [i_2 + 1] [i_2 - 3] [i_2 - 3])) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_2 - 2] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */long long int) (unsigned char)41)), (var_8)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241839
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? ((+(879473857))) : (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */unsigned short) max((((_Bool) arr_3 [i_0])), (((_Bool) arr_3 [i_0]))));
                arr_4 [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((((/* implicit */int) (unsigned char)29)) > (((/* implicit */int) arr_0 [i_0]))))) * (((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_2 [i_1] [i_1] [i_1])) - (37488)))))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((((/* implicit */int) (unsigned char)29)) > (((/* implicit */int) arr_0 [i_0]))))) * (((((/* implicit */int) var_6)) << (((((((/* implicit */int) arr_2 [i_1] [i_1] [i_1])) - (37488))) - (19640))))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34)))))));
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) ^ (((((/* implicit */_Bool) max(((unsigned short)50084), (((/* implicit */unsigned short) (_Bool)1))))) ? ((+(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])))))))))))));
            }
        } 
    } 
}

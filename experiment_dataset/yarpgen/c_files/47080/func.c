/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47080
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
    var_13 = ((/* implicit */long long int) (-(var_0)));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_1])) >> (((((long long int) (unsigned short)8537)) - (8517LL))))), (((/* implicit */int) (signed char)98))));
                    var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((min((-7350119590069636873LL), (((/* implicit */long long int) (signed char)98)))) == (min((4294934528LL), (((/* implicit */long long int) (unsigned short)46494))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_1] [i_1])), (arr_4 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))) : (min((((/* implicit */long long int) arr_1 [i_2])), (arr_6 [i_0 - 1] [i_1] [19LL] [i_2])))))));
                    arr_7 [i_1] = 7350119590069636889LL;
                }
            } 
        } 
    } 
}

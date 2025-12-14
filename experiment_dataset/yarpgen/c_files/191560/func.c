/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191560
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
    var_20 = ((/* implicit */short) (~(var_18)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_21 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1065353216)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_0 + 3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61781))))) | (((/* implicit */int) (!(((/* implicit */_Bool) 1205469904766761740LL)))))))) : (((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 + 3] [i_2 + 3])) / ((~(16867266964612695074ULL))))));
                    arr_10 [i_1] [i_1] [i_2 + 3] [i_2 + 3] = ((/* implicit */short) (-(-814407667)));
                    arr_11 [i_0] = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) (short)-1037)) ? (-1065353206) : (arr_6 [i_0] [i_0] [(short)18]))) / ((~(((/* implicit */int) (unsigned char)245))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1205469904766761758LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))))))))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((3561795260437754041ULL) > (((((/* implicit */_Bool) (-(var_17)))) ? (3ULL) : (((/* implicit */unsigned long long int) max((-1516250972), (var_10)))))))))));
}

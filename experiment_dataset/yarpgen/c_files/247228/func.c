/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247228
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((arr_3 [i_2 - 1] [i_1]) ? (2267132288296250170ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 3] [i_0])))))));
                    arr_8 [i_0] [i_1] [i_0] = 2267132288296250172ULL;
                    arr_9 [i_2] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (549755813760LL)))) || (((/* implicit */_Bool) (-(7820658881281577027LL)))))))));
                    arr_10 [i_1] [(short)6] = ((/* implicit */int) min((549755813742LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 16179611785413301449ULL)) && (((/* implicit */_Bool) (unsigned short)60222)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) ((var_4) || (((_Bool) var_13))))), (((((/* implicit */int) var_0)) / ((-(((/* implicit */int) (_Bool)1))))))));
    var_17 = ((/* implicit */unsigned long long int) var_10);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 16179611785413301443ULL)) ? (((/* implicit */unsigned long long int) (-(549755813751LL)))) : (((2144775222356413674ULL) * (((/* implicit */unsigned long long int) 549755813742LL))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223766
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
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((var_19) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) + (min(((+(2012840363U))), (((/* implicit */unsigned int) ((_Bool) (signed char)112)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_21 = ((unsigned char) (+((+(-7994453027315220172LL)))));
                        arr_10 [i_0] [3U] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */signed char) (+((+(((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) arr_0 [i_1] [i_2 - 1])))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((16760832ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_23 |= ((/* implicit */unsigned char) ((((long long int) ((long long int) arr_9 [i_0] [i_0] [i_0] [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((short) var_3))) < (((/* implicit */int) ((unsigned char) var_5)))))))));
        var_24 = ((/* implicit */unsigned char) ((signed char) ((short) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
        arr_11 [i_0 - 1] = (-(((long long int) ((var_19) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)2] [i_0])))))));
    }
}

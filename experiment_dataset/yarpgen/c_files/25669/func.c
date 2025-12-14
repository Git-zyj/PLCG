/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25669
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_3 + 1] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_8 [i_3 + 1])), (((((/* implicit */int) var_9)) - (((/* implicit */int) arr_5 [i_3 - 2] [i_0]))))));
                        var_13 = ((/* implicit */signed char) var_3);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */short) var_10);
    }
    var_15 = ((/* implicit */signed char) var_11);
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((short) var_5)))));
    var_17 &= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_7))))))))));
}

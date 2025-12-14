/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244220
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-((-(var_13))))))));
    var_17 = ((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) arr_6 [i_2 + 2] [(short)16] [i_0 + 2])), (((unsigned int) arr_3 [i_0]))))));
                    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) 2147483647)))))))), (((arr_4 [i_0 - 1]) ? (((/* implicit */int) ((unsigned short) var_3))) : ((+(((/* implicit */int) (unsigned short)21638))))))));
                    arr_9 [i_0 + 1] [i_1] |= ((/* implicit */unsigned char) max((((/* implicit */int) ((short) ((int) (_Bool)1)))), (max((((/* implicit */int) (unsigned short)57158)), ((~(((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_10);
}

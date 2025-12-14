/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192231
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (((~(691506937U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) arr_2 [i_0] [i_1]))))))))));
                var_13 *= ((min((3603460342U), (((/* implicit */unsigned int) -1104392438)))) == (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_1 + 1]), (arr_0 [i_0]))))));
                arr_6 [(short)1] = ((/* implicit */unsigned char) (((-((+(((/* implicit */int) (unsigned char)118)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)140)), ((unsigned short)8167)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_9);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))) | (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (var_8))))) : (((1893694837U) % (((/* implicit */unsigned int) var_2))))))) ? (((((/* implicit */_Bool) var_3)) ? ((-(var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : ((~((~(var_9)))))));
}

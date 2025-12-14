/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193937
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [17LL] [i_1 - 1])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                    var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4294967293U), (1U)))) ? (((/* implicit */long long int) ((arr_9 [7U] [i_1 - 1] [i_2] [(unsigned short)5]) ? (134217724U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((long long int) var_4))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (((var_3) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1])))))))) : (((((/* implicit */int) ((_Bool) arr_7 [3U] [i_2]))) << (((arr_0 [i_1 - 1] [i_1 - 1]) - (1765490767716810883LL))))));
                    var_11 = ((/* implicit */unsigned long long int) (+(min((max((134217728U), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)50)))))))));
                    var_12 *= ((/* implicit */signed char) ((unsigned int) (unsigned short)16138));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) - (var_2))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36797
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (min(((+(((/* implicit */int) (signed char)16)))), ((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))) : ((+(((/* implicit */int) arr_4 [i_0])))))))));
                    arr_8 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_7);
                    arr_9 [i_2] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0]);
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_2))), (((/* implicit */long long int) max((var_5), (((/* implicit */unsigned char) var_7)))))))));
    var_12 = (((~(min((((/* implicit */long long int) (signed char)16)), (var_6))))) < (((/* implicit */long long int) var_3)));
    var_13 = ((/* implicit */_Bool) var_8);
}

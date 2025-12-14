/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231036
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
    var_10 ^= ((/* implicit */long long int) (-(var_9)));
    var_11 = ((/* implicit */unsigned int) (((+(((/* implicit */int) max(((unsigned short)15369), (((/* implicit */unsigned short) var_1))))))) >> (((/* implicit */int) var_5))));
    var_12 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [i_0] = ((/* implicit */unsigned char) ((int) ((unsigned char) (~(((/* implicit */int) (short)448))))));
                    var_13 = (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? ((+(((/* implicit */int) (unsigned short)15365)))) : (((/* implicit */int) arr_1 [i_1])))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [8LL] [(signed char)7]))) <= (max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)15369))))), (var_4))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_8), (var_5))))))), (var_5))))));
}

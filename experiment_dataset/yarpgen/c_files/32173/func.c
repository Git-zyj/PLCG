/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32173
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) ((unsigned char) (~(454668526136402788LL)))))));
        var_11 ^= ((short) (!(((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) arr_1 [i_0])))))));
        var_12 = ((/* implicit */long long int) (((((+(arr_0 [i_0]))) / (arr_2 [i_0] [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_13 = ((_Bool) (unsigned char)72);
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) arr_8 [i_2 + 2] [i_2 + 1] [i_1 + 4]);
                    var_15 = ((/* implicit */unsigned short) ((((arr_6 [i_1] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) ? (((long long int) arr_9 [i_1] [i_1] [i_2])) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2])))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned short) var_1);
    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) min(((~(3404587016U))), (((/* implicit */unsigned int) ((_Bool) var_9))))));
}

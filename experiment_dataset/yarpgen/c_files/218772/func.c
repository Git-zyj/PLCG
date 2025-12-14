/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218772
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))))) : (arr_2 [i_0])));
        var_12 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [i_0])))) ^ (((/* implicit */int) (unsigned short)34109))));
        var_13 += ((/* implicit */signed char) var_0);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned short)31427))))))));
                    var_15 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min(((_Bool)1), (var_4)))))) % (max((((/* implicit */unsigned long long int) arr_6 [i_1])), (arr_3 [i_1] [i_2])))));
                }
            } 
        } 
        var_16 ^= ((/* implicit */unsigned long long int) min((arr_6 [i_1]), (((/* implicit */unsigned int) (unsigned short)34109))));
    }
    var_17 = ((/* implicit */_Bool) 3013190796U);
}

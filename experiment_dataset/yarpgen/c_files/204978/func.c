/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204978
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
    var_20 = ((/* implicit */long long int) var_3);
    var_21 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [(_Bool)1] [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)8326)) ? (-6315056262494148551LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_13 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (((unsigned int) (unsigned short)65534))));
                        arr_14 [i_0] [i_2] = ((/* implicit */unsigned long long int) var_0);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((_Bool) ((var_0) ? (arr_5 [i_0]) : (((/* implicit */long long int) 1009285284U)))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_23 ^= ((/* implicit */int) 5141499910290815542LL);
        var_24 *= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_13))))));
    }
    var_25 = ((/* implicit */unsigned short) var_16);
    var_26 |= ((/* implicit */_Bool) min((var_5), (var_5)));
}

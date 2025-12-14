/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3983
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
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_3)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_19 ^= (+(max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))));
        var_20 -= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_11)));
    }
    for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) (_Bool)1);
        arr_8 [i_1 - 1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (12047951596379161148ULL)));
        var_21 ^= ((/* implicit */long long int) var_9);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_2))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_23 -= (-(((/* implicit */int) var_3)));
            var_24 ^= ((/* implicit */unsigned short) max((((signed char) arr_12 [i_1] [i_2 - 1] [i_2])), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)49)))))) < ((-(var_16))))))));
            var_25 &= ((/* implicit */_Bool) arr_5 [i_1] [i_2]);
        }
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_26 = ((/* implicit */long long int) arr_0 [i_3]);
            var_27 ^= ((/* implicit */unsigned int) (_Bool)1);
        }
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_28 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned char) (_Bool)1))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-28)))))));
    }
    var_30 = ((/* implicit */signed char) max((((var_13) / (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_14))));
}

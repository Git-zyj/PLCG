/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29635
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_14 |= ((/* implicit */long long int) ((arr_0 [i_0] [i_0]) && (arr_0 [i_0] [i_0])));
        var_15 = ((/* implicit */unsigned long long int) 0LL);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)108)) != (((/* implicit */int) arr_5 [i_0] [i_1] [i_3]))))) != (((/* implicit */int) ((_Bool) arr_10 [i_1] [i_2] [i_3])))));
                        var_17 = ((/* implicit */long long int) ((short) var_1));
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) 1652740650U));
                    }
                } 
            } 
        } 
    }
    var_18 = max((min((var_0), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-49))))))), (((/* implicit */long long int) var_11)));
    var_19 = ((int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0))), (((/* implicit */long long int) var_12))));
    var_20 *= ((/* implicit */long long int) min((var_9), (((/* implicit */signed char) ((((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) var_11))))) != (((/* implicit */int) max((((/* implicit */signed char) var_2)), (var_8)))))))));
}

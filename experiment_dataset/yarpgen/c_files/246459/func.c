/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246459
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_7)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)157)))))) : (max((max((var_11), (((/* implicit */unsigned long long int) var_7)))), (((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 2147483631)) && (((/* implicit */_Bool) min((var_14), ((unsigned char)193)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((unsigned long long int) (signed char)83)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_18)), (min((((/* implicit */unsigned long long int) max((var_10), (var_10)))), (max((var_2), (((/* implicit */unsigned long long int) var_3))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((var_12) && (((/* implicit */_Bool) var_16)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) (signed char)83))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_19)))) & (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)116))))))), (((((((/* implicit */int) var_5)) >= (((/* implicit */int) var_1)))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) var_5))))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_9))));
}

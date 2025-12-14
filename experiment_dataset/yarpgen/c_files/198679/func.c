/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198679
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
    var_11 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) << (((((/* implicit */int) var_2)) - (29429)))))) ? (max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) max((((/* implicit */signed char) var_8)), (var_6)))))) : (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_10)) - (61350)))))));
                                var_13 ^= ((/* implicit */_Bool) var_5);
                                arr_13 [20] [20] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((var_8), (var_4)))) : (((((/* implicit */int) var_7)) << (((((/* implicit */int) var_2)) - (29464)))))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) var_3)) | (((/* implicit */int) var_8))))))) * (((((/* implicit */unsigned long long int) var_0)) - (min((var_1), (var_1)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */_Bool) var_1);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_9);
}

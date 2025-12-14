/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231361
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
    var_10 = ((/* implicit */unsigned short) var_6);
    var_11 = ((/* implicit */unsigned short) var_3);
    var_12 = (~(min((min((var_0), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1372848045)) ? (max((var_4), (((/* implicit */int) (unsigned char)125)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_1])), (var_7))))))) && (((/* implicit */_Bool) max((-1372848045), (((((/* implicit */int) arr_3 [i_1])) << (((((/* implicit */int) var_5)) - (28283))))))))));
                var_14 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1372848044)) || (((/* implicit */_Bool) var_7))))), (max((((/* implicit */unsigned long long int) var_5)), (var_6))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((arr_1 [i_0]) & (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_3 [(signed char)2]))))) > (max((-1372848044), (((/* implicit */int) (unsigned char)241)))))))));
                var_15 = ((/* implicit */signed char) 16U);
            }
        } 
    } 
}

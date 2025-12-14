/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228290
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
    var_15 = ((/* implicit */unsigned long long int) var_4);
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)47867))));
    var_17 &= ((/* implicit */signed char) (!(((((var_4) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-63))))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((min((var_7), (((/* implicit */long long int) var_14)))) | (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (4294967295U))))))) != (((5091643350713488843ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)710)))))));
                arr_5 [(signed char)0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))), (((min((((/* implicit */long long int) 4294967286U)), (var_6))) + (((/* implicit */long long int) ((1363337691) ^ (((/* implicit */int) (unsigned short)63097)))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_6)) ? (var_7) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)28314)), (var_12)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) ((unsigned short) var_3))))), (((/* implicit */int) var_1))));
}

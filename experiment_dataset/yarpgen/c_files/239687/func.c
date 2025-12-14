/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239687
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)27)) ? (arr_3 [i_1]) : (arr_2 [i_1] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_18), (var_16))))) : (min((var_1), (var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)31)) : (arr_2 [i_0] [i_0] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0 + 3])) ? (var_17) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) : (min((-6401075160410577672LL), (((/* implicit */long long int) var_16)))))) : (min((((((/* implicit */_Bool) arr_3 [i_0])) ? (-6401075160410577672LL) : (((/* implicit */long long int) ((/* implicit */int) (short)13462))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -6401075160410577671LL)) ? (((/* implicit */int) arr_0 [i_0 + 3] [i_1])) : (((/* implicit */int) arr_1 [i_0 + 1])))))))));
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6401075160410577671LL)) ? (min((((/* implicit */long long int) 1042096319)), (-6401075160410577671LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
            }
        } 
    } 
    var_20 ^= min((((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_6)) ? (-6401075160410577680LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)217))))) : (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)113))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_7)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)0)))) : (((/* implicit */int) min((var_13), (var_13))))))));
}

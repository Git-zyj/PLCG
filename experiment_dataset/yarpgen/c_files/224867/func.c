/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224867
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
    var_14 = var_13;
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) ((int) (unsigned short)8698))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_3)) - (((/* implicit */int) (signed char)122))))))));
    var_16 = ((/* implicit */unsigned int) var_7);
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62208)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((-3046313146727147233LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_9)) - (175))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 ^= ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_6 [(signed char)6] [i_1])) & (((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)8])) ? (((/* implicit */int) (unsigned short)8698)) : (((/* implicit */int) (unsigned short)2833))))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30567)) ? (((/* implicit */int) arr_0 [0LL] [(_Bool)1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)8])))))));
                var_20 -= ((/* implicit */signed char) arr_1 [(signed char)10] [i_0]);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198247
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
    var_19 = ((/* implicit */int) (((((!(((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) ((int) var_2))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_2)))))) : (((((/* implicit */_Bool) ((int) (short)24964))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) max((245183418), (((/* implicit */int) (short)30720)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) (unsigned short)44314)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_17)))) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_1 + 1])))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (max((((/* implicit */long long int) arr_1 [(unsigned short)10] [i_1 + 2])), (var_2)))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) arr_4 [(signed char)7]);
                arr_6 [i_1] [i_1 + 1] [i_1] = ((((((/* implicit */_Bool) 245183416)) && (((/* implicit */_Bool) arr_0 [i_1])))) ? ((((_Bool)0) ? (3940649673949184LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24330))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (3940649673949184LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24330)))))) ? (((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0])) - (125))))) : (((/* implicit */int) var_3))))));
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) ((short) 1LL))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_10);
}

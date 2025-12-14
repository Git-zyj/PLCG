/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199643
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0 + 3] [(unsigned char)15] = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 2])) | (((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 2]))))) : (((unsigned int) arr_3 [(_Bool)0] [i_0 + 1])));
                var_16 = ((/* implicit */unsigned long long int) ((int) (unsigned char)0));
                var_17 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)61801)))) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) (signed char)74))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_1)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */int) (signed char)-74))))), (min((((/* implicit */unsigned int) (_Bool)0)), (var_10))))))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (unsigned char)252))));
}

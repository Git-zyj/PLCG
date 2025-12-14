/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30024
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
    var_12 = ((/* implicit */short) (unsigned short)5686);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6020787654285442093ULL)) && (((/* implicit */_Bool) 2720920273270709538ULL))))), (6020787654285442093ULL)))) || (((/* implicit */_Bool) min((((long long int) 288230376151711743LL)), (((((/* implicit */_Bool) (short)0)) ? (-1062944115518779007LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [7ULL] [i_1 + 1] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((((/* implicit */_Bool) 9733654714375131180ULL)) || (((/* implicit */_Bool) (unsigned short)59298))))))), ((-(((/* implicit */int) (unsigned char)70))))));
                var_14 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) -1062944115518779007LL)) - (arr_4 [i_0 + 3] [i_1 + 2]))) > ((-(arr_4 [i_0 - 1] [i_1 + 1])))));
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))) % (max((max((9223372036854775800LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1152921504606846975LL)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (short)3224)))))))));
                arr_7 [i_0] [i_1 - 2] [i_1] = ((/* implicit */signed char) (-(((long long int) max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)-11)))))));
            }
        } 
    } 
}

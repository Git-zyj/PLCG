/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190209
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-25)) % (-4194304)))) && (((/* implicit */_Bool) max((((/* implicit */int) (short)25)), (1987618372)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (arr_0 [i_0])))) : (((((/* implicit */_Bool) 4294967290U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */short) arr_2 [10] [10U])), (var_5)))), (max((var_7), (((/* implicit */unsigned int) (unsigned short)127))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_6)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 2198814938U)) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [9] [(_Bool)1])) ? (4039802101U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65408)))))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-25996)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) : (((2U) + (4294967272U)))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_1);
    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) | (((((/* implicit */int) (signed char)-30)) | (((/* implicit */int) var_0))))))), ((((!(((/* implicit */_Bool) (short)16)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)64145)) / (((/* implicit */int) var_9))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (5U)))))));
}

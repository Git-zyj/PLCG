/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31187
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255))))));
    var_20 += ((/* implicit */unsigned char) ((unsigned int) var_3));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0]))))) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [(unsigned char)7])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 3])) ? (((/* implicit */unsigned long long int) 3643828907542038099LL)) : (12037254753923373355ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_0])))) : (((/* implicit */int) ((short) arr_2 [i_0] [i_1]))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) (unsigned short)24269)) : (((/* implicit */int) (signed char)78))))))))));
                arr_7 [i_0] = ((/* implicit */long long int) ((unsigned int) arr_4 [i_0 + 2]));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76)))))))) : (max((((unsigned long long int) arr_2 [i_0] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-29048)) : (((/* implicit */int) arr_1 [i_1])))))))));
            }
        } 
    } 
}

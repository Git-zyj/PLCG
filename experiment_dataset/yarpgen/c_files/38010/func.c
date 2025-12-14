/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38010
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_4 [i_0 - 4] [i_1] [i_2]) : (arr_4 [i_0] [i_0] [i_2])))) : (((((/* implicit */_Bool) 3ULL)) ? (((((/* implicit */_Bool) (unsigned short)4042)) ? (1251511965256738347ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))))) : (((/* implicit */unsigned long long int) -1LL))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6824)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61493))) & (576460752303423487LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) 1747319334)), (var_8)))))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)241)) ? (-576460752303423504LL) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))) ? (15142748620994091119ULL) : (((/* implicit */unsigned long long int) ((int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) min(((unsigned char)241), ((unsigned char)5)));
    var_18 = ((/* implicit */signed char) ((unsigned short) var_1));
    var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)4046)) : (((/* implicit */int) (short)-1))));
}

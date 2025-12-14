/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248871
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
    var_12 = ((/* implicit */int) (short)7986);
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) ((arr_0 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) var_6);
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7983)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1830))) : (2281021062U)))) > ((((!(((/* implicit */_Bool) 13288486085622873039ULL)))) ? (5158257988086678589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                arr_7 [i_1] [i_1] = ((/* implicit */int) var_0);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213235
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)5928))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((max((((((/* implicit */int) arr_0 [1LL] [i_1])) - (((/* implicit */int) var_11)))), (((/* implicit */int) arr_4 [i_0] [i_1])))), (((/* implicit */int) max((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_0])))))))));
                var_20 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (short)-29570)))), (((/* implicit */int) max((arr_5 [i_1] [i_0]), (arr_5 [i_0] [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) var_15)), (((var_5) >> (((((/* implicit */int) (signed char)-108)) + (116))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)23458))))))))));
}

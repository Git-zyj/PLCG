/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3718
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+(((((33554416) != (((/* implicit */int) (short)-29080)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) ((91519376794935488ULL) <= (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (~(3718640003U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned int) arr_4 [i_0]))))), (((long long int) arr_0 [i_0] [11ULL])))))))));
                var_19 ^= ((/* implicit */int) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) | (443397649887554297ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (unsigned short)14336))));
            }
        } 
    } 
}

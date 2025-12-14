/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54678
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
    var_19 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) min((((14227649072396092767ULL) % (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-11)))))));
                arr_6 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)75)) ? (((((/* implicit */int) (unsigned short)53625)) << (((((/* implicit */int) (unsigned short)2339)) - (2337))))) : (((/* implicit */int) var_17))))), (((((/* implicit */_Bool) (short)-32766)) ? (max((var_6), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_2))))))))));
            }
        } 
    } 
}

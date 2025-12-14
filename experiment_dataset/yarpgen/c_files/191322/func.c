/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191322
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_12))) < (((/* implicit */int) var_5))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) min(((+(2673012970482867147ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_2 [i_0] [i_1]))))), (((int) 15773731103226684483ULL)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 14221409864974430604ULL)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2199022731264ULL)) ? (2673012970482867147ULL) : (((/* implicit */unsigned long long int) -6116328522939286248LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -56756148302461287LL)))) : (max((2673012970482867130ULL), (((/* implicit */unsigned long long int) 6116328522939286247LL))))))));
}

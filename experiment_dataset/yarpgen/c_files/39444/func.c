/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39444
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((((unsigned short) 1729382256910270464LL)), (((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0]))))))));
                var_21 = ((/* implicit */_Bool) max((((((63ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)237))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (18446744073709551615ULL)))));
}

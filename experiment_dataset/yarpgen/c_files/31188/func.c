/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31188
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (signed char)(-127 - 1)))))) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) (+(1577098090)))))) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47304)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) var_8))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((max((3039472367214827417LL), (((/* implicit */long long int) ((_Bool) (_Bool)0))))) == (((/* implicit */long long int) ((int) ((unsigned short) var_3))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166)))));
}

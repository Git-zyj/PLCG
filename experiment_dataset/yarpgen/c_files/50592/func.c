/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50592
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
    var_18 = ((/* implicit */long long int) 1661944744U);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_4 [i_1]))))))) ? ((-(((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -7163558755462332299LL)) ? (arr_1 [i_0] [i_1]) : (-7163558755462332308LL)))))));
                var_20 -= ((/* implicit */unsigned char) min((arr_1 [i_0] [i_1 - 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1])))))));
                var_21 = min((((/* implicit */unsigned long long int) max((arr_1 [i_1 + 1] [i_1 + 1]), (((/* implicit */long long int) arr_2 [i_0] [i_1 + 2]))))), ((+(8783820892736111971ULL))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) -7163558755462332308LL);
}

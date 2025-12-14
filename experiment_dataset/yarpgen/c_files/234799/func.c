/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234799
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
    var_20 = ((/* implicit */signed char) 3841214031U);
    var_21 = ((/* implicit */_Bool) var_12);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_22 ^= (short)8817;
                    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (453753265U)));
                    arr_8 [i_0 - 4] [i_1 + 2] [i_2 - 2] [i_0] = ((/* implicit */unsigned short) ((arr_5 [i_2 - 1] [i_1] [i_1] [i_0]) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) min((arr_4 [i_0 - 4] [i_1 - 2] [i_2 - 1] [i_2 + 1]), (arr_4 [i_0 - 4] [i_1 + 3] [5LL] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((13696507932559969179ULL), (((/* implicit */unsigned long long int) 3841214036U))))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    var_25 = ((/* implicit */long long int) var_11);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234610
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
    var_12 -= ((/* implicit */unsigned char) min((var_10), (((/* implicit */long long int) ((unsigned char) (unsigned short)14358)))));
    var_13 = max((((/* implicit */unsigned int) (unsigned short)14346)), (1547069001U));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_10))));
                var_15 = ((/* implicit */unsigned short) min(((-(max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) var_2)))))), (((/* implicit */long long int) 2747898299U))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((var_6) <= (((/* implicit */long long int) 1110981000U))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_0))));
}

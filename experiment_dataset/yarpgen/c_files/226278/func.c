/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226278
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] [18U] &= ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) arr_5 [(_Bool)1])), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -24059540)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_11))))))), (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (1551182843170487428LL))))));
                var_12 = ((/* implicit */int) arr_5 [i_0]);
                var_13 -= (+((-(((/* implicit */int) arr_3 [(signed char)16] [(signed char)16] [i_1])))));
            }
        } 
    } 
    var_14 = var_1;
}

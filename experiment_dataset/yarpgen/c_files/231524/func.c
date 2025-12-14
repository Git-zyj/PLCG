/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231524
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */long long int) ((((unsigned long long int) arr_4 [i_1] [i_0])) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0)))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((18446744073709551610ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0])))))))) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)253)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (12430661429851427918ULL)))) ? ((-(((/* implicit */int) (unsigned char)102)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1] [i_0])), ((unsigned short)65535)))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (-(12430661429851427920ULL)));
    var_21 = max(((-(((var_18) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1702))))))), (((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) (unsigned char)0)))))));
    var_22 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_14))))));
}

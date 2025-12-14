/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21594
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
    var_18 -= ((/* implicit */unsigned int) -7LL);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) 3221225472U);
                    var_20 = ((/* implicit */short) 9223372036854775807LL);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (max((max((min((3499028319009482690LL), (-8716639532867665877LL))), (((/* implicit */long long int) (signed char)24)))), (((/* implicit */long long int) max((((((/* implicit */_Bool) 1)) ? (((/* implicit */int) (short)6126)) : (((/* implicit */int) (unsigned char)212)))), (max((2147479552), (((/* implicit */int) (short)-32750)))))))))));
}

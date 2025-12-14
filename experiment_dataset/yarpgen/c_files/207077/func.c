/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207077
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
    var_16 |= ((/* implicit */unsigned int) min((((unsigned long long int) ((var_12) - (((/* implicit */int) (unsigned short)50456))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3160329792U)) ? (-1389422963001739184LL) : (((/* implicit */long long int) -2147483645))))) ? (((/* implicit */int) ((signed char) var_8))) : (-2147483645))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) arr_8 [i_0]);
                    arr_10 [i_0] [i_1] [(unsigned char)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2147483645)) ? (2147483645) : (2147483645)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_5);
    var_18 = -2147483643;
    var_19 &= ((/* implicit */_Bool) var_5);
}

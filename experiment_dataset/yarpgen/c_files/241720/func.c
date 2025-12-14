/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241720
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2837043010U)) ? (((/* implicit */int) (_Bool)0)) : (-486732227)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) (unsigned short)46023)))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-73))));
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? ((((!(((/* implicit */_Bool) (signed char)-79)))) ? (((((/* implicit */_Bool) (unsigned short)52565)) ? (-7421269557679476708LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) 219395773)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) 7421269557679476729LL)) ? (-432915871) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) 8825740136326695049LL)) ? (1185357243) : (((/* implicit */int) var_17))))))))))));
                arr_7 [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) 7511449561236574510LL);
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (signed char)3))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (unsigned short)63283))));
}

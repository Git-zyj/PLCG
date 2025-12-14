/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4537
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_16 |= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) -9223372036854775779LL))) : (((int) (unsigned short)8191)))));
                        var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32013))) : (-9223372036854775797LL))), (((/* implicit */long long int) (-(33554431U))))));
                        var_18 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((signed char) arr_0 [i_1 - 1] [i_3 - 1]))), (var_4)));
                    }
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_12))) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [(unsigned short)2] [i_2] [i_1])))))));
                }
            } 
        } 
    } 
    var_20 ^= ((var_6) & (((((/* implicit */_Bool) (+(-149674082)))) ? (((/* implicit */int) ((var_12) <= (((/* implicit */long long int) var_9))))) : (((/* implicit */int) var_10)))));
    var_21 = ((/* implicit */signed char) (((+(((/* implicit */int) var_5)))) >> (((((var_14) - (((/* implicit */unsigned int) ((var_9) - (var_15)))))) - (3688745334U)))));
    var_22 += (!(((/* implicit */_Bool) var_6)));
}

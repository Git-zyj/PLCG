/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204764
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
    var_20 -= ((/* implicit */short) ((((((/* implicit */_Bool) min((var_16), (var_1)))) && (var_14))) ? ((~(max((9223372036854775804LL), (9223372036854775801LL))))) : (((((/* implicit */_Bool) var_11)) ? (max((9223372036854775804LL), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)127)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) var_5)))) >> (((((/* implicit */int) ((unsigned char) min((184429411927094742ULL), (((/* implicit */unsigned long long int) var_8)))))) - (206)))));
                            var_21 = ((/* implicit */unsigned long long int) (unsigned short)65535);
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (unsigned char)220))));
                        }
                    } 
                } 
                var_23 = (unsigned short)28959;
            }
        } 
    } 
}

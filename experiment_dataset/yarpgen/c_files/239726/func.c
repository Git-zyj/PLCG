/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239726
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [(unsigned char)2] [i_3] [i_3] |= ((/* implicit */signed char) ((unsigned int) (unsigned char)29));
                                var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((short) var_7))) ? (((((/* implicit */_Bool) (unsigned char)210)) ? (arr_8 [i_2] [i_2]) : (-3097523104501961277LL))) : (-5236898900407232430LL))), (max((var_5), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))))));
                                var_15 = (~((~(min((var_9), (((/* implicit */long long int) (unsigned char)119)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((short) min((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-22)), (var_6)))), ((+(((/* implicit */int) (unsigned char)255))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_6);
}

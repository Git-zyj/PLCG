/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247831
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((unsigned char) (!(((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) var_12)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) -3753987255667669924LL)) || (((/* implicit */_Bool) 1299262163U)))) ? (((1299262163U) & (1299262183U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)8))) == (7620045147161641228LL)))))));
                                var_16 += ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_3)))))), ((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) min((7620045147161641228LL), (((/* implicit */long long int) (signed char)125)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-22844))))) ? (var_2) : (((var_2) / (((/* implicit */int) var_1)))))) : (((/* implicit */int) (short)-4335)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219771
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((_Bool) var_9)))));
                var_11 = ((/* implicit */int) ((signed char) ((int) var_9)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_12 *= ((/* implicit */int) var_2);
                            arr_9 [i_0] [i_0] [6ULL] [i_3] |= ((/* implicit */short) var_0);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_16 [i_5] = ((/* implicit */_Bool) ((max((var_8), (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_5)))))) & ((~(((/* implicit */int) (unsigned short)57344))))));
                var_13 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_6))))));
                arr_17 [i_4] [i_4] |= ((((/* implicit */_Bool) ((var_0) % (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */signed char) var_7))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_5);
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((short) var_2)))));
}

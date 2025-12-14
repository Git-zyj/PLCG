/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35083
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
    var_16 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (short)570))) * (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) != (((/* implicit */int) (short)-570)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(var_9)));
                                var_17 *= ((/* implicit */signed char) (+((~(var_4)))));
                                var_18 = (!(((/* implicit */_Bool) (short)-571)));
                            }
                        } 
                    } 
                }
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) (short)-564)))));
                var_19 = ((/* implicit */signed char) (+((~(((/* implicit */int) (short)-570))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_4);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22647
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
    var_18 |= ((/* implicit */short) ((unsigned char) var_10));
    var_19 ^= ((_Bool) var_13);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((int) ((_Bool) arr_0 [i_2 + 2]))))));
                                var_21 *= ((/* implicit */unsigned short) ((int) ((unsigned char) arr_5 [i_4] [i_2 + 1] [i_1 + 2] [i_4])));
                                var_22 &= ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) 930474113U)));
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((int) (unsigned char)215)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) ((short) ((short) arr_2 [i_0 - 1])));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) var_8);
}

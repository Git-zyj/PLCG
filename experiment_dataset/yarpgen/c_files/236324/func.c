/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236324
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
    var_14 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 15364971002801107228ULL))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned int) 8155205004504816163LL);
                    var_15 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_2])), (8155205004504816147LL)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)130)) == (((/* implicit */int) (short)2723)))))));
                                var_17 = ((/* implicit */unsigned int) arr_1 [i_0] [i_3 + 2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((short) var_5)))));
}

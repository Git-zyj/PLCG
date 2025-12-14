/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51934
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((short) (_Bool)1))), (6467338321270272361ULL)));
                                var_13 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_3])) ? (5076005523612022911LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (_Bool)1)) : (948320312)))))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_0] [4U] [(signed char)1] [(signed char)4] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */long long int) ((unsigned int) (unsigned char)240))) + (-5056366010670391054LL))));
                                var_14 = ((/* implicit */unsigned long long int) (unsigned short)65535);
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) 1528842211642499931LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((var_2) != (var_2))))));
    var_17 = ((/* implicit */unsigned long long int) var_9);
}

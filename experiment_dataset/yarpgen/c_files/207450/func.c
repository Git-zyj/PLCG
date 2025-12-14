/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207450
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))) & (9223372036854775807LL)))), (1217298022241545488ULL))), (((/* implicit */unsigned long long int) ((((((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -590952006)))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) max((var_7), (((/* implicit */short) var_9))))) - (1))))))));
                                arr_14 [i_3 - 1] [i_0] = ((/* implicit */unsigned char) max(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL))));
                                var_13 |= ((/* implicit */unsigned short) max((max((9223372036854775807LL), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_0] [i_0])), (arr_5 [i_1] [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */int) ((((-590952006) - (((/* implicit */int) arr_1 [i_0] [i_0])))) <= ((-(((/* implicit */int) (short)18418))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */long long int) var_3);
    var_16 = ((/* implicit */int) var_4);
}

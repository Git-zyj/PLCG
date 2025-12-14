/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207697
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
    var_11 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-17675))));
    var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)32)) << (((((/* implicit */int) (signed char)108)) - (107))))), (((/* implicit */int) (unsigned char)43))))) ? (((/* implicit */int) max(((short)-31706), ((short)16689)))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_13 *= ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) var_3)))))) ? (((unsigned long long int) (_Bool)1)) : (((unsigned long long int) arr_8 [i_4] [i_1] [i_2] [i_3 + 2] [i_3 + 1]))));
                                var_15 -= ((/* implicit */unsigned char) max((((/* implicit */short) min(((unsigned char)42), (arr_10 [i_3 + 2] [i_3] [i_3 + 1] [i_3] [i_3 - 1])))), (max(((short)-28708), (((/* implicit */short) (unsigned char)239))))));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
}

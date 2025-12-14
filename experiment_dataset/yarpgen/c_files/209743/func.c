/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209743
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
    var_12 = ((/* implicit */long long int) 29U);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned char) ((((15897663U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)12330))))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) != (arr_8 [i_0] [i_1] [i_2] [i_3]))))) < (-9223372036854775807LL))))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (((~((+(((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_1 [i_0]))))))))));
                                arr_15 [i_0] [(unsigned char)13] [(unsigned char)6] [i_4] = ((/* implicit */int) var_11);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) 438793057)) < (15897663U)))), ((+(((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [i_1] [i_0])), ((short)3))))))));
                }
            } 
        } 
    } 
}

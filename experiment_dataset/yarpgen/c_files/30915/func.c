/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30915
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
    var_17 |= ((/* implicit */_Bool) (-(((/* implicit */int) (short)124))));
    var_18 *= ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) var_2);
                var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-134)) : (-1)))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [11] [i_3 - 1] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((var_16) & (((/* implicit */int) (unsigned char)0))))) < (4294967295U)));
                            arr_12 [i_0] [i_0] [(_Bool)1] [i_2] [i_3] [i_3] |= ((/* implicit */long long int) max((min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-124)) + (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))))));
                            arr_13 [i_0] [i_1] [i_2] [4ULL] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) var_14))))) && (((/* implicit */_Bool) (signed char)127)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

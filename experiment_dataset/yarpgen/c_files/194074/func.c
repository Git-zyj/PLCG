/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194074
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((/* implicit */long long int) var_16)), (((long long int) arr_7 [i_0] [i_2])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((short) (-(arr_2 [i_0] [i_1] [i_2]))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) -778390867)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_3] [i_2] [i_1] [i_0])) ? (778390866) : (((/* implicit */int) var_10))))) ? (-90213321) : (778390876))) : ((~(((/* implicit */int) var_8)))))))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (signed char)89))));
                                arr_15 [i_0] [i_4] [i_2] [i_4] [i_4 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */int) min(((short)-12258), (((/* implicit */short) (signed char)-49))))), (((((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_2])) + ((~(778390867)))))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_2] [(unsigned char)11] [i_2]);
                    var_23 |= ((/* implicit */unsigned short) (short)-10489);
                }
            } 
        } 
    } 
    var_24 *= (short)17930;
    var_25 = ((/* implicit */unsigned short) var_16);
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_10))));
}

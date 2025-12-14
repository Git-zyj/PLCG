/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3930
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -38054917752361720LL)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)8))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned long long int) -1733322638)) : (12733141538874734306ULL)))) ? ((+(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10)))))) % (((/* implicit */unsigned long long int) (-(38054917752361719LL))))));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) min((((15770778288600830089ULL) * (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 3] [i_3 - 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)12971))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) var_13);
    var_23 += ((/* implicit */int) var_17);
}

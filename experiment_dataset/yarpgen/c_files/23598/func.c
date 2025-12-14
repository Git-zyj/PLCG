/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23598
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    arr_8 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)87)))))) < (4011621921U))))));
                    var_20 = ((/* implicit */long long int) 673758065U);
                }
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(4011621947U)))) && (((/* implicit */_Bool) (unsigned short)20859)))) && (((/* implicit */_Bool) max((1117527776U), (min((((/* implicit */unsigned int) (unsigned char)202)), (283345342U))))))));
                    arr_12 [9U] [i_1 + 4] [i_1] [i_1] = max((((/* implicit */unsigned int) (unsigned short)14336)), (((unsigned int) 8176U)));
                }
                /* vectorizable */
                for (unsigned int i_4 = 2; i_4 < 23; i_4 += 1) 
                {
                    arr_16 [i_0] [18U] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) (unsigned short)17492));
                    var_21 = var_6;
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_22 |= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)108))));
                                arr_25 [i_0] [i_1] [i_4] [i_5 + 1] [i_6] = ((var_12) & (2492359061U));
                                arr_26 [i_0] [i_1 + 3] [22LL] [i_1 + 3] [i_6] = ((/* implicit */unsigned char) ((unsigned int) 4294959096U));
                                arr_27 [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((974792830U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))))))));
                            }
                        } 
                    } 
                }
                var_23 = 2913720199U;
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -7466496405729835439LL)))))));
            }
        } 
    } 
    var_25 = var_7;
}

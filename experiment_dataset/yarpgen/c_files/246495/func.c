/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246495
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
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
    var_15 = ((/* implicit */signed char) (-((((~(((/* implicit */int) (short)-8339)))) + ((-(((/* implicit */int) (unsigned char)138))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1969683725)))) ? (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_5 [i_4] [(unsigned char)0])) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) -1969683726)) ? (((/* implicit */int) (short)6175)) : (((/* implicit */int) var_6))))))))))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) (~(arr_11 [i_4 - 1] [(_Bool)1] [i_3] [(_Bool)1] [(short)5] [i_0 + 1] [i_0])))) ? (((((/* implicit */_Bool) -3624418977099259667LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_14 [i_0 + 1] [(short)17] [i_2] [(short)17] [i_2] [12LL] [i_4])))) : (((((/* implicit */_Bool) arr_3 [i_3] [i_1])) ? (2025532518) : (-563420678))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) 2663974485U))))))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1630992819U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1] [10LL]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                arr_16 [i_0 + 1] [(signed char)15] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-306836567700061516LL)))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)255))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))) : ((~(((((/* implicit */_Bool) (short)-1)) ? (2663974485U) : (3416944428U)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (-(((((/* implicit */int) var_13)) + (((/* implicit */int) var_1))))))) : ((-((-(var_11))))))))));
}

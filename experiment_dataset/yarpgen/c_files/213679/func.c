/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213679
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
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((max((1006632960U), (((/* implicit */unsigned int) arr_4 [i_2 + 1] [i_1 - 2] [i_2 - 1])))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (unsigned short)48075)))))));
                    var_15 = ((/* implicit */unsigned char) var_9);
                    var_16 = ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17460)) || (((/* implicit */_Bool) -1604129583888638209LL))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) 2951331378U);
                                var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) ((short) ((int) arr_5 [i_0] [(signed char)14] [(unsigned short)14])))), (max((((((/* implicit */_Bool) (unsigned short)41067)) ? (1006632960U) : (0U))), (((/* implicit */unsigned int) arr_9 [i_0 + 3] [i_1 - 1] [i_0 + 3] [i_2 + 1]))))));
                                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) min((arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3] [i_4]), (((/* implicit */int) (unsigned short)41069))))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_1 - 2] [i_1])), (((unsigned long long int) (unsigned short)63237))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -2095220172)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-116)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-113))))), (min((((/* implicit */long long int) ((unsigned int) (_Bool)1))), (((1604129583888638209LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))))))))))));
}

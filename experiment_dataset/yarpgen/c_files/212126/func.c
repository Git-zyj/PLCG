/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212126
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) var_15);
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_11 [i_0 - 2])), (6076433594850114763LL)));
                                arr_12 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_2 - 1] [i_3] [i_3] [i_4] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)26136)) : (((int) -1235994560)))));
                                arr_13 [i_0] [i_1] [i_2 - 1] [i_3 - 1] = ((/* implicit */int) 1560381247U);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_1)) | (((/* implicit */int) arr_8 [i_0])))), (((/* implicit */int) max((arr_0 [i_1]), (arr_6 [i_1] [i_0]))))))) ? (min((((((/* implicit */_Bool) 1560381247U)) ? (arr_9 [i_0] [i_0] [i_1] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))))), (((/* implicit */long long int) 2734586043U)))) : (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) arr_8 [i_2 + 1])))) <= ((~(((/* implicit */int) (signed char)120))))))))));
                    arr_14 [i_2] = ((/* implicit */signed char) arr_1 [i_0]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_0), (var_9))))))), (((((/* implicit */_Bool) 3588967926U)) ? (((((/* implicit */_Bool) 4862695846170232097LL)) ? (var_18) : (((/* implicit */unsigned long long int) 1401372769U)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (2734586049U))))))));
    var_24 = ((/* implicit */long long int) var_13);
}

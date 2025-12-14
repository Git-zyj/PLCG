/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236467
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
    var_18 = ((/* implicit */unsigned int) min(((-((-(var_16))))), (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_9))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_5 [i_2 + 1] [i_1 + 2] [i_2 + 2] [i_2])))), ((+(((/* implicit */int) arr_5 [i_2 + 1] [i_1 - 3] [i_1 - 2] [i_2]))))));
                    var_20 = ((/* implicit */short) min((8062962046667442259LL), (-8062962046667442259LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((max((((/* implicit */unsigned int) (unsigned char)243)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39624))) + (11U))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_2))))))))));
                                arr_13 [i_1] [i_1] [i_1] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)-40)) - ((+(((/* implicit */int) (unsigned short)56497)))))), (((((/* implicit */int) ((8062962046667442263LL) == (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) % (((/* implicit */int) (unsigned char)64))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((max((min((var_7), (((/* implicit */unsigned long long int) arr_0 [i_2 + 2])))), (((/* implicit */unsigned long long int) -8062962046667442259LL)))) >> ((((-(var_3))) + (6094842125279459606LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

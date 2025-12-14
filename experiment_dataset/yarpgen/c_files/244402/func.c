/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244402
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
    var_15 = ((/* implicit */signed char) (-(((min((((/* implicit */unsigned long long int) var_4)), (var_12))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104)))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_0)) : (min((((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */unsigned long long int) var_1)) : (var_10))), (((/* implicit */unsigned long long int) var_6))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-49))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) min((var_2), (var_11))))) ? (min((((((/* implicit */_Bool) 15ULL)) ? (-8138120482272711982LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-74)) * (((/* implicit */int) (short)-32745))))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_2 - 1] [i_3 + 1]), (arr_6 [i_2 - 3] [i_3 - 1])))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 10416552328919942093ULL)))) : (-8138120482272711977LL)));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32763)) ? (5078418278351862490ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((-((+(((/* implicit */int) var_14)))))) : (((/* implicit */int) (signed char)-62))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) (short)-32763);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_11)) : (var_12))), (((/* implicit */unsigned long long int) var_6))))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) ((8138120482272711981LL) - (((/* implicit */long long int) ((/* implicit */int) var_14)))))))))));
    var_23 = ((/* implicit */short) (-(-7207608077549149503LL)));
}

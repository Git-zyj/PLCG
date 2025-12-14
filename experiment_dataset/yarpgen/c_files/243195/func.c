/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243195
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)15)))) ? (((((/* implicit */_Bool) var_16)) ? (1322049146U) : (((/* implicit */unsigned int) var_1)))) : (((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? ((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (var_13))))) : (max((((((/* implicit */_Bool) var_3)) ? (var_1) : (1516975744))), (((/* implicit */int) var_7))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) 6U)) : (-916001610142078024LL))), (((/* implicit */long long int) -1891462497)))))));
    var_19 = ((/* implicit */unsigned long long int) (unsigned char)12);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) -916001610142078013LL))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((min((arr_11 [i_0 + 1] [i_0] [i_3]), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_3] [i_1] [i_4])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 835229922)) / (var_5))))));
                                arr_12 [0LL] [(unsigned short)0] [i_2] [i_1] [i_2] |= ((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_0 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220416
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
    for (int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_12 += min((arr_2 [i_0 - 2]), ((_Bool)1));
                var_13 = ((/* implicit */signed char) var_10);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_14 = ((_Bool) max((arr_8 [i_2 + 2] [i_1 - 2] [i_0 + 1] [i_0 - 2]), (arr_8 [i_2 - 1] [i_1 + 1] [i_0 - 1] [i_0 - 3])));
                                arr_15 [i_1] [i_2 - 1] [i_4] = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (((((/* implicit */_Bool) arr_4 [i_0] [i_3 + 1])) ? (arr_11 [i_0]) : (((/* implicit */unsigned long long int) arr_6 [12LL] [i_1 - 1] [i_2])))))));
                                arr_16 [i_0 - 3] [i_1 + 3] [i_2] [i_1 + 3] [i_4] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) >= (max((var_4), (((/* implicit */unsigned long long int) var_5))))))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (short)11013))))));
                                arr_17 [i_3] [i_3] [i_2 - 1] [(short)14] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_2])) ? (max((arr_13 [i_0] [(unsigned char)11] [i_2] [i_3] [i_4]), (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1] [9ULL])))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_11 [i_0 - 4]), (((/* implicit */unsigned long long int) var_10))))))))));
                                var_15 = ((/* implicit */unsigned int) arr_13 [i_2 + 2] [i_0 - 4] [i_1 + 3] [i_3 - 1] [i_1 + 3]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_2);
    var_17 = ((/* implicit */signed char) var_4);
    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) var_0))))) ? (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (short)29675)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_10)), (var_3))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
}

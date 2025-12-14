/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205778
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
    var_17 = ((/* implicit */signed char) min(((short)5312), (((/* implicit */short) (signed char)119))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))) : (var_15))) >= (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0 - 1]))))), (max((min((12575505979273525416ULL), (((/* implicit */unsigned long long int) -17LL)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)23913)))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (~((+(((/* implicit */int) (signed char)-40))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_1] [i_1] [i_3] [i_4]), (((/* implicit */short) (_Bool)1)))))) <= (0ULL)));
                                arr_14 [i_0 + 2] [i_1] [i_2] [i_3] [(short)0] [i_3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((short) (signed char)28))) ? (max((var_9), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)31), (((/* implicit */signed char) (_Bool)1))))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))) : (arr_13 [i_0] [i_1]))), (max((8858224796540874040LL), (var_12)))))), (max((16880445933516724657ULL), (((/* implicit */unsigned long long int) (short)23904))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((((/* implicit */int) (short)5311)) << (((((/* implicit */int) (short)-5312)) + (5321)))))));
}

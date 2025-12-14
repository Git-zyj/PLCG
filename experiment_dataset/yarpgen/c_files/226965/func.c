/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226965
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
    var_19 = ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) 18U))) ? ((-(((/* implicit */int) ((short) (signed char)-58))))) : (((/* implicit */int) ((unsigned short) var_9))));
                                var_20 = ((unsigned int) ((arr_10 [i_4] [i_0] [i_0] [(short)5] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4]))) : (var_18)));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_6))));
                arr_16 [i_0] [i_0] [(unsigned char)10] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) var_1)), (var_18)))))) * (((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (var_14)))) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (min((arr_6 [i_1]), (((/* implicit */unsigned long long int) var_10))))))));
                arr_17 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)14)) && (((/* implicit */_Bool) 18U)))))) : (arr_6 [i_0])));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_7))));
    var_23 = ((/* implicit */short) ((((((((/* implicit */_Bool) 4294967278U)) ? (9223372036854775801LL) : (((/* implicit */long long int) 4294967278U)))) > (((/* implicit */long long int) var_15)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_11))))) : (min((((/* implicit */long long int) var_12)), ((~(var_2)))))));
}

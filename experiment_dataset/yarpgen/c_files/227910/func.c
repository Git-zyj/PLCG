/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227910
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
    var_19 = ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) max((((/* implicit */int) var_0)), (var_14)));
                var_21 = ((/* implicit */unsigned char) max((((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_3 [i_1] [i_0 + 1] [i_0]))) == (((((/* implicit */_Bool) -8)) ? (var_16) : (arr_0 [7ULL] [i_1])))))), ((short)-20518)));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) var_15);
                                arr_13 [i_0] [i_1] [i_2] [(_Bool)1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [(_Bool)1] [(_Bool)1] [i_2] [(signed char)19] [i_1])) ? (((4294967295U) * (arr_11 [i_0 + 4] [i_0 + 4] [i_0 + 1] [i_0 + 3] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) (unsigned short)2234)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 &= ((/* implicit */signed char) var_6);
    var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((((/* implicit */unsigned long long int) (unsigned short)63301)), (var_4))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)26)) ? (-3216421204371524897LL) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) var_13)))))));
    var_24 = ((/* implicit */unsigned int) ((var_5) ? (((((/* implicit */long long int) -14)) | ((+(var_16))))) : (var_16)));
}

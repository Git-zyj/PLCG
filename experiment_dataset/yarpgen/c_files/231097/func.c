/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231097
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
    var_16 *= ((/* implicit */signed char) 4294967285U);
    var_17 = max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_6)));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 2248906077U)) ? (((/* implicit */int) (short)17)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)160))))) : (((/* implicit */int) var_7))))) ? (max((((/* implicit */long long int) arr_8 [i_3] [i_3] [i_1 - 2])), (-9188201713303575976LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 4294967281U)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52712))))))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_14)))) : (((((/* implicit */_Bool) 4194303U)) ? (var_12) : (var_12))))) : (((((/* implicit */_Bool) var_8)) ? ((+(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((arr_9 [i_1 + 1] [i_1 - 2]) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) arr_9 [i_1 + 1] [i_1 - 2]))))), (max((((/* implicit */unsigned int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])), ((~(var_15)))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1])))))));
                var_22 ^= max((((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)12823))))), (max((((/* implicit */unsigned int) arr_1 [i_1 - 2] [i_1 - 2])), (max((arr_0 [i_0] [i_1 - 2]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (+(var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) : (((((/* implicit */_Bool) 11U)) ? (-5089694478919432936LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))))));
}

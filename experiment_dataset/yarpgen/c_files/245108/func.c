/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245108
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
    var_18 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))) : (var_4)))) ? ((+(((/* implicit */int) (signed char)64)))) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((short) 1503581344U)))))));
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((2231539171041828897LL) & (((/* implicit */long long int) 0)))))))), (max((min((var_4), (((/* implicit */unsigned long long int) var_16)))), (min((14990480008224557987ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    var_20 = ((/* implicit */signed char) var_16);
    var_21 = ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)30))))), (max((arr_2 [12LL]), (arr_2 [(signed char)8])))))));
                arr_5 [i_0] [i_1 + 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4209591852U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (short)5861)))))), (4016981048U)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((unsigned short) min((max((((/* implicit */unsigned long long int) 203740204U)), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3035243928216445605ULL)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0]))))))));
                                arr_15 [i_0] [i_0] [(_Bool)1] [(short)17] [i_4 - 1] = ((/* implicit */short) min((max((var_0), (((/* implicit */unsigned long long int) 1486402534)))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_10 [i_3] [i_0] [i_0] [i_0])) ? (3013081232U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) min((var_14), (var_10)))))))));
                                arr_16 [i_1 + 3] [i_0] [i_4] = ((/* implicit */signed char) ((_Bool) max((12974222863922438303ULL), (((/* implicit */unsigned long long int) -2147483646)))));
                                var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_6 [i_4 + 1] [i_2]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [(_Bool)1] [i_0] [i_1] [i_1 + 1]))))) : (max((var_16), (((/* implicit */unsigned int) arr_13 [i_0] [i_2] [i_0 + 1] [i_0 + 2] [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) var_13))), ((-(((/* implicit */int) (short)-13741)))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201774
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) (signed char)-8)) : (((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))) ? ((+(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_15 = ((/* implicit */int) (+((-(((((/* implicit */_Bool) (signed char)32)) ? (var_13) : (var_7)))))));
    var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? ((((_Bool)1) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) 4315316131364806693LL))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) var_10)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_1))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_10))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_12) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_7))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-43))))))))) : (max((arr_5 [i_0] [i_1] [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) max((((/* implicit */long long int) arr_2 [i_0])), (max((((/* implicit */long long int) min((((/* implicit */signed char) arr_8 [i_0])), ((signed char)-49)))), (var_7)))));
                                var_19 *= ((_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)63)))));
                                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_4] [i_4 - 1] [i_2 - 1] [i_2 - 1])))))));
                                var_21 &= min((((/* implicit */unsigned long long int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) (signed char)-26)) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) var_7)))));
                                var_22 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7)))))));
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)0)), (min((arr_1 [i_0]), (arr_1 [i_0])))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225807
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
    for (int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_12 ^= ((/* implicit */long long int) -569218025);
                            arr_9 [i_0] [i_1] [(_Bool)1] [i_2] [i_3] = ((/* implicit */signed char) max((((((arr_8 [i_2] [i_2] [(unsigned char)6] [i_3]) + (2147483647))) << (((((/* implicit */int) var_2)) - (18))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_3))))))));
                            arr_10 [i_0] [i_1] [i_0] [i_2] [i_3] [i_1] = min((((/* implicit */long long int) ((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_5 [i_2]))))) ^ (var_1)))), (var_9));
                            var_13 = ((/* implicit */unsigned short) (-(((int) (short)7))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */int) ((((((/* implicit */int) var_2)) - (((/* implicit */int) arr_7 [6LL] [(short)6] [i_0] [i_0 - 3] [i_0 - 1] [i_0 + 1])))) <= ((-(875420626)))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (max(((-(var_9))), (((/* implicit */long long int) ((unsigned short) arr_8 [10] [8LL] [10] [i_0 + 1]))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) var_2))))));
    var_16 = ((/* implicit */int) var_0);
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) min(((unsigned char)29), (((/* implicit */unsigned char) var_2))))) != (((/* implicit */int) ((((/* implicit */int) var_3)) <= (var_7))))))), (((((/* implicit */_Bool) ((int) var_0))) ? (var_11) : (((/* implicit */int) min((((/* implicit */short) var_0)), ((short)2047))))))));
}

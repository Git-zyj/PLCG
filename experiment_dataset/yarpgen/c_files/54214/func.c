/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54214
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
    var_13 = ((/* implicit */unsigned int) max(((-(min((((/* implicit */long long int) var_10)), (var_12))))), ((-(var_2)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_14 = var_9;
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned int) min(((-(1ULL))), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)-20)))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((7ULL) != (((/* implicit */unsigned long long int) (-(var_4)))))) ? (min((((((var_5) + (2147483647))) << (((var_7) - (1599728835))))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) 2ULL))))))) : (var_5)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] = ((unsigned short) (-(6U)));
                            var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(65535ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)-1)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (1ULL)))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-4)) != (((/* implicit */int) var_10))));
                            var_17 = ((/* implicit */signed char) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) ((short) max((((/* implicit */short) (_Bool)1)), (var_1)))))));
                            arr_14 [i_1] = ((/* implicit */unsigned long long int) (-(((((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) || (((/* implicit */_Bool) 18446744073709551609ULL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) ((unsigned short) (signed char)126))), ((-(0ULL)))))));
}

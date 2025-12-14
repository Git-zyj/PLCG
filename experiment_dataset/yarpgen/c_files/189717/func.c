/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189717
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
    var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) 10ULL)) ? ((-(((/* implicit */int) var_5)))) : (min((var_7), (((/* implicit */int) var_0)))))) | (max((var_7), (var_7)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 += ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))), ((-(18446744073709551612ULL))))) - (((/* implicit */unsigned long long int) (-(var_7))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (~(var_8))))));
                                arr_13 [i_0] = ((/* implicit */unsigned char) ((3165074201U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_0))))));
                                var_14 *= var_7;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_5))));
    var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */long long int) (~(((/* implicit */int) min(((signed char)92), (((/* implicit */signed char) (_Bool)1)))))))) : (var_8)));
}

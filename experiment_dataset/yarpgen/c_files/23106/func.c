/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23106
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
    var_18 = ((((((/* implicit */_Bool) 67076096U)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_13)))))) : (min((((/* implicit */unsigned int) var_8)), (var_14))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)123)) & (((/* implicit */int) (unsigned short)21027))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_19 &= ((((/* implicit */_Bool) (unsigned short)44540)) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))));
                                arr_11 [i_0] [i_2] [i_4] = max(((~(((unsigned long long int) 4294967292U)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_1 [i_4]) : (((/* implicit */long long int) arr_4 [i_4] [i_1 - 1] [i_0])))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -293410370))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */short) ((long long int) var_3));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned char) (_Bool)1);
}
